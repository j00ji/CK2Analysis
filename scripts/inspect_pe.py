"""Read-only PE inventory; standard library only. Never loads or executes the PE.

Usage: python scripts/inspect_pe.py CK2game.exe --output artifacts
ASCII inventory includes printable runs of 4..4096 bytes. Addresses are preferred
image VAs; a file range outside headers/section raw data has no mapped address.
"""
import argparse
import csv
import datetime
import hashlib
import json
from pathlib import Path
import re
import struct
import uuid


def inventory(path, output):
    data = path.read_bytes()
    output.mkdir(parents=True, exist_ok=True)

    def unpack(fmt, offset):
        size = struct.calcsize(fmt)
        if offset < 0 or offset + size > len(data):
            raise ValueError(f"Read outside file at {offset:#x}, size {size}")
        return struct.unpack_from(fmt, data, offset)

    def cstring(offset):
        end = data.find(b"\0", offset, min(len(data), offset + 65536))
        if end < 0:
            raise ValueError(f"Unterminated string at {offset:#x}")
        return data[offset:end].decode("ascii", errors="backslashreplace")

    if data[:2] != b"MZ":
        raise ValueError("Not MZ")
    pe_offset = unpack("<I", 0x3C)[0]
    if data[pe_offset:pe_offset + 4] != b"PE\0\0":
        raise ValueError("Not PE")
    machine, nsects, timestamp, symptr, symcount, optsize, chars = unpack("<HHIIIHH", pe_offset + 4)
    opt = pe_offset + 24
    magic = unpack("<H", opt)[0]
    if magic not in (0x10B, 0x20B):
        raise ValueError(f"Unsupported optional header {magic:#x}")
    is64 = magic == 0x20B
    base = unpack("<Q" if is64 else "<I", opt + (24 if is64 else 28))[0]
    entry = unpack("<I", opt + 16)[0]
    section_alignment, file_alignment = unpack("<II", opt + 32)
    image_size, header_size = unpack("<II", opt + 56)
    subsystem, dllchars = unpack("<HH", opt + 68)
    ndir = unpack("<I", opt + (108 if is64 else 92))[0]
    dirpos = opt + (112 if is64 else 96)
    dirnames = ["export", "import", "resource", "exception", "security", "base_relocation", "debug", "architecture", "global_ptr", "tls", "load_config", "bound_import", "iat", "delay_import", "clr", "reserved"]
    directories = []
    for i in range(min(ndir, 16)):
        address, size = unpack("<II", dirpos + 8 * i)
        directories.append({"index": i, "name": dirnames[i], "address": hex(address), "size": size, "address_kind": "file_offset" if i == 4 else "rva"})
    sections = []
    for i in range(nsects):
        pos = opt + optsize + 40 * i
        name, vsize, rva, rawsize, rawptr, _, _, _, _, flags = unpack("<8sIIIIIIHHI", pos)
        sections.append({"name": name.rstrip(b"\0").decode("ascii", errors="backslashreplace"), "rva": hex(rva), "va": hex(base + rva), "virtual_size": vsize, "raw_offset": rawptr, "raw_size": rawsize, "characteristics": hex(flags), "executable": bool(flags & 0x20000000), "readable": bool(flags & 0x40000000), "writable": bool(flags & 0x80000000)})

    def rva_offset(rva):
        if rva < header_size:
            return rva
        for section in sections:
            start = int(section["rva"], 16)
            if start <= rva < start + section["raw_size"]:
                return section["raw_offset"] + rva - start
        raise ValueError(f"RVA not backed by file: {rva:#x}")

    def offset_address(offset):
        if offset < header_size:
            return hex(offset), hex(base + offset), "headers"
        for section in sections:
            start = section["raw_offset"]
            if start <= offset < start + section["raw_size"]:
                rva = int(section["rva"], 16) + offset - start
                return hex(rva), hex(base + rva), section["name"]
        return "", "", "unmapped"

    def directory(index):
        return (int(directories[index]["address"], 16), directories[index]["size"]) if index < len(directories) else (0, 0)

    imports = []
    import_rva, import_size = directory(1)
    if import_rva:
        descriptor = rva_offset(import_rva)
        for dindex in range(4096):
            original, stamp, forward, name_rva, first = unpack("<IIIII", descriptor + 20 * dindex)
            if not any((original, stamp, forward, name_rva, first)):
                break
            dll = cstring(rva_offset(name_rva))
            thunk = rva_offset(original or first)
            width = 8 if is64 else 4
            ordinal_mask = 1 << (width * 8 - 1)
            for tindex in range(65536):
                value = unpack("<Q" if is64 else "<I", thunk + width * tindex)[0]
                if value == 0:
                    break
                if value & ordinal_mask:
                    name, ordinal, hint = "", value & 0xFFFF, ""
                else:
                    import_name = rva_offset(value)
                    hint = unpack("<H", import_name)[0]
                    name, ordinal = cstring(import_name + 2), ""
                iat_rva = first + width * tindex
                imports.append({"dll": dll, "name": name, "ordinal": ordinal, "hint": hint, "iat_rva": hex(iat_rva), "iat_va": hex(base + iat_rva), "descriptor_file_offset": hex(descriptor + 20 * dindex)})
    with (output / "pe-imports.tsv").open("w", encoding="utf-8", newline="") as stream:
        writer = csv.DictWriter(stream, fieldnames=["dll", "name", "ordinal", "hint", "iat_rva", "iat_va", "descriptor_file_offset"], delimiter="\t")
        writer.writeheader()
        writer.writerows(imports)

    exports = []
    export_rva, export_size = directory(0)
    if export_rva:
        fields = unpack("<IIHHIIIIIII", rva_offset(export_rva))
        ordinal_base, nfunc, nname, functions_rva, names_rva, ordinals_rva = fields[5:]
        names = {}
        for i in range(nname):
            name_rva = unpack("<I", rva_offset(names_rva) + 4 * i)[0]
            ord_index = unpack("<H", rva_offset(ordinals_rva) + 2 * i)[0]
            names[ord_index] = cstring(rva_offset(name_rva))
        for i in range(nfunc):
            func_rva = unpack("<I", rva_offset(functions_rva) + i * 4)[0]
            if func_rva:
                exports.append({"name": names.get(i), "ordinal": ordinal_base + i, "rva": hex(func_rva), "va": hex(base + func_rva), "forwarder": cstring(rva_offset(func_rva)) if export_rva <= func_rva < export_rva + export_size else None})

    debug = []
    debug_rva, debug_size = directory(6)
    if debug_rva:
        for i in range(debug_size // 28):
            flags, stamp, major, minor, dtype, size, address, pointer = unpack("<IIHHIIII", rva_offset(debug_rva) + 28 * i)
            record = {"type": dtype, "size": size, "rva": hex(address), "file_offset": hex(pointer), "timestamp_raw": stamp}
            payload = data[pointer:pointer + size]
            if dtype == 2 and payload[:4] == b"RSDS" and len(payload) >= 24:
                record.update({"format": "RSDS", "pdb_guid": str(uuid.UUID(bytes_le=payload[4:20])), "age": struct.unpack_from("<I", payload, 20)[0], "pdb_path": payload[24:].split(b"\0")[0].decode("utf-8", errors="backslashreplace")})
            elif dtype == 2 and payload[:4] == b"NB10" and len(payload) >= 16:
                record.update({"format": "NB10", "pdb_path": payload[16:].split(b"\0")[0].decode("utf-8", errors="backslashreplace")})
            debug.append(record)

    resources = []
    resource_rva, resource_size = directory(2)
    if resource_rva:
        root = rva_offset(resource_rva)
        visited = set()

        def walk_resource(relative, path_ids):
            if relative in visited or len(path_ids) > 8:
                return
            visited.add(relative)
            _, _, _, _, named_count, id_count = unpack("<IIHHHH", root + relative)
            for i in range(named_count + id_count):
                name, target = unpack("<II", root + relative + 16 + i * 8)
                if name & 0x80000000:
                    stringpos = root + (name & 0x7FFFFFFF)
                    length = unpack("<H", stringpos)[0]
                    label = data[stringpos + 2:stringpos + 2 + 2 * length].decode("utf-16le", errors="replace")
                else:
                    label = name
                nextpath = path_ids + [label]
                if target & 0x80000000:
                    walk_resource(target & 0x7FFFFFFF, nextpath)
                else:
                    rva, size, codepage, reserved = unpack("<IIII", root + target)
                    resources.append({"path": nextpath, "rva": hex(rva), "file_offset": hex(rva_offset(rva)), "size": size, "codepage": codepage})
        walk_resource(0, [])

    versions = []
    for resource in resources:
        if resource["path"][0] != 16:
            continue
        start, size = int(resource["file_offset"], 16), resource["size"]
        blob = data[start:start + size]
        signature = blob.find(b"\xbd\x04\xef\xfe")
        record = {"resource_path": resource["path"], "file_offset": hex(start)}
        if signature >= 0 and signature + 52 <= len(blob):
            fields = struct.unpack_from("<13I", blob, signature)
            fmtver = lambda ms, ls: ".".join(str(x) for x in (ms >> 16, ms & 65535, ls >> 16, ls & 65535))
            record["file_version"] = fmtver(fields[2], fields[3])
            record["product_version"] = fmtver(fields[4], fields[5])
        record["utf16_printable_runs"] = [m.group().decode("utf-16le") for m in re.finditer(rb"(?:[\x20-\x7e]\x00){4,}", blob)]
        versions.append(record)

    string_count, overlong_count = 0, 0
    string_section_counts = {}
    with (output / "pe-strings.tsv").open("w", encoding="utf-8", newline="") as stream:
        writer = csv.writer(stream, delimiter="\t")
        writer.writerow(["file_offset", "rva", "va", "section", "length", "text"])
        for match in re.finditer(rb"[\x20-\x7e]{4,}", data):
            if len(match.group()) > 4096:
                overlong_count += 1
                continue
            rva, va, section = offset_address(match.start())
            writer.writerow([hex(match.start()), rva, va, section, len(match.group()), match.group().decode("ascii")])
            string_count += 1
            string_section_counts[section] = string_section_counts.get(section, 0) + 1

    raw_end = max([header_size] + [s["raw_offset"] + s["raw_size"] for s in sections])
    result = {
        "generated_utc": datetime.datetime.now(datetime.timezone.utc).isoformat(),
        "source_path": str(path.resolve()), "file_size": len(data), "sha256": hashlib.sha256(data).hexdigest(),
        "method": "Static Python standard-library PE header/directory parser; no target loading/execution",
        "pe_header_file_offset": hex(pe_offset), "machine": hex(machine), "architecture": {0x14C: "x86 (32-bit)", 0x8664: "x86-64", 0xAA64: "ARM64"}.get(machine, "unknown"),
        "optional_header_magic": hex(magic), "format": "PE32+" if is64 else "PE32", "image_base": hex(base), "entry_rva": hex(entry), "entry_va": hex(base + entry),
        "coff_timestamp_raw": timestamp, "coff_timestamp_utc": datetime.datetime.fromtimestamp(timestamp, datetime.timezone.utc).isoformat(), "coff_characteristics": hex(chars),
        "coff_symbol_table_file_offset": hex(symptr), "coff_symbol_count": symcount, "subsystem": subsystem, "dll_characteristics": hex(dllchars), "image_size": image_size, "header_size": header_size,
        "section_alignment": section_alignment, "file_alignment": file_alignment, "sections": sections, "directories": directories,
        "import_count": len(imports), "import_dlls": {dll: sum(i["dll"] == dll for i in imports) for dll in sorted({i["dll"] for i in imports})},
        "exports": exports, "debug": debug, "resources": resources, "version_resources": versions,
        "ascii_string_count": string_count, "ascii_string_section_counts": string_section_counts, "ascii_overlong_runs_excluded": overlong_count,
        "overlay_offset": hex(raw_end), "overlay_size": max(0, len(data) - raw_end),
        "limitations": ["Timestamp is a header assertion, not independently verified build time.", "ASCII runs include instruction bytes and incidental printable data; strings alone do not establish behavior.", "Preferred virtual addresses are not runtime addresses if the image is relocated.", "No disassembly, decompilation, runtime execution, signature verification, delay-import parsing or external symbol lookup was performed.", "Version strings are extracted as UTF-16 printable runs without key/value association."]
    }
    (output / "pe-overview.json").write_text(json.dumps(result, indent=2) + "\n", encoding="utf-8")
    print(json.dumps({key: result[key] for key in ("sha256", "file_size", "architecture", "image_base", "entry_va", "import_count", "import_dlls", "ascii_string_count", "debug", "version_resources")}, indent=2))


if __name__ == "__main__":
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("binary", type=Path)
    parser.add_argument("--output", type=Path, default=Path("artifacts"))
    args = parser.parse_args()
    inventory(args.binary, args.output)
