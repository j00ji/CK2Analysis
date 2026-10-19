"""Check local Phase 2 evidence integrity without loading or executing CK2."""
import datetime
import hashlib
import json
from pathlib import Path
import re
import struct

ROOT = Path(__file__).resolve().parents[1]
EXPECTED = 'cc2d65b51d9099b3d632fe3269fa647aaf7c00fcb00cc0240adbaa8e6bbbb75e'
binary = (ROOT / 'CK2game.exe').read_bytes()
digest = hashlib.sha256(binary).hexdigest()
assert digest == EXPECTED, 'Target identity changed'

# Bounded raw read corroborates the movement-command constructor vtable.
pe = json.loads((ROOT / 'artifacts/pe-overview.json').read_text(encoding='utf-8-sig'))
table = 0x141144510
section = next(s for s in pe['sections']
               if int(s['va'], 16) <= table < int(s['va'], 16) + s['raw_size'])
entries = []
for slot in range(0, 0x90, 8):
    cell = table + slot
    offset = section['raw_offset'] + cell - int(section['va'], 16)
    raw = binary[offset:offset + 8]
    entries.append({'slot_offset': hex(slot), 'cell_va': hex(cell),
                    'file_offset': offset, 'raw_hex': raw.hex(),
                    'target_va': hex(struct.unpack('<Q', raw)[0])})
(ROOT / 'artifacts/phase2-command-vtable.json').write_text(json.dumps({
    'sha256': digest, 'method': 'Static read of 0x90 bytes at constructor-installed table; no execution',
    'table_va': hex(table), 'entries': entries,
    'qualification': 'Bounded pointer window; complete table extent is not established'
}, indent=2) + '\n', encoding='utf-8')

queries, functions, capped_refs, failures = [], [], [], []
for path in sorted((ROOT / 'artifacts').glob('p2-*.json')):
    if path.name.endswith('-request.json'):
        continue
    raw = path.read_bytes()
    data = json.loads(raw.decode('utf-8-sig'))
    if data.get('sha256') != digest:
        failures.append(f'{path.name}: target hash mismatch')
    queries.append({'file': str(path.relative_to(ROOT)), 'mode': data.get('mode'),
                    'sha256': hashlib.sha256(raw).hexdigest(), 'bytes': len(raw)})
    if data.get('mode') != 'function':
        continue
    expected_entries = data['query'].split(',')
    results = data['result']
    if len(results) != len(expected_entries):
        failures.append(f'{path.name}: result count mismatch')
    for result in results:
        entry = result.get('entry')
        functions.append(entry)
        if not result.get('decompile_completed') or result.get('instructions_truncated'):
            failures.append(f'{path.name}: incomplete function {entry}')
        if result.get('incoming_references', {}).get('truncated'):
            capped_refs.append(entry)
        export = ROOT / 'artifacts/phase2/functions' / f'{entry}.c'
        if not export.exists():
            failures.append(f'Missing readable export {entry}')

docs = [ROOT / 'README.md', *sorted((ROOT / 'docs').glob('*.md'))]
link_count = 0
for path in docs:
    content = path.read_text(encoding='utf-8-sig')
    for target in re.findall(r'\[[^\]]*\]\(([^)]+)\)', content):
        if target.startswith(('http:', 'https:', '#', 'mailto:')):
            continue
        target = target.split('#')[0].strip('<>')
        link_count += 1
        if not (path.parent / target).exists():
            failures.append(f'{path.relative_to(ROOT)}: missing link {target}')
locks = [str(p.relative_to(ROOT)) for p in (ROOT / 'ghidra').rglob('*')
         if p.is_file() and (p.name.endswith('.lock') or '.lock.' in p.name)]
if locks:
    failures.append('Project lock files remain')
assert (ROOT / 'ghidra/CK2.gpr').is_file()
assert (ROOT / 'ghidra/CK2.rep').is_dir()
report = {
    'generated_utc': datetime.datetime.now(datetime.timezone.utc).isoformat(),
    'target_sha256': digest, 'target_unchanged': digest == EXPECTED,
    'queries': queries, 'function_results': len(functions),
    'unique_functions': len(set(functions)),
    'incoming_reference_caps': sorted(set(capped_refs)),
    'markdown_files_checked': len(docs), 'local_links_checked': link_count,
    'project_locks': locks, 'failures': failures,
    'scope': 'Artifact completeness and identity checks, not runtime or semantic validation'
}
(ROOT / 'artifacts/phase2-verification.json').write_text(
    json.dumps(report, indent=2) + '\n', encoding='utf-8')
print(json.dumps({k: v for k, v in report.items() if k != 'queries'}, indent=2))
raise SystemExit(bool(failures))
