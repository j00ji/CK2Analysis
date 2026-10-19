#include "ck2naval/version_guard.hpp"

#include "ck2naval/addresses.hpp"
#include "ck2naval/hash.hpp"

#include <algorithm>
#include <array>
#include <cstddef>
#include <cstdint>
#include <cstring>
#include <sstream>
#include <vector>

namespace ck2naval {
namespace {

std::string Narrow(const std::wstring& input) {
    if (input.empty()) {
        return {};
    }
    const int size = WideCharToMultiByte(CP_UTF8, 0, input.c_str(),
                                         static_cast<int>(input.size()), nullptr, 0,
                                         nullptr, nullptr);
    if (size <= 0) {
        return "<wide-string conversion failed>";
    }
    std::string output(static_cast<std::size_t>(size), '\0');
    WideCharToMultiByte(CP_UTF8, 0, input.c_str(), static_cast<int>(input.size()),
                        output.data(), size, nullptr, nullptr);
    return output;
}

bool VerifyHash(const std::wstring& path, std::string& report) noexcept {
    Sha256Digest digest{};
    std::wstring error;
    if (!ComputeFileSha256(path, digest, error)) {
        report = "SHA-256 failed: " + Narrow(error);
        return false;
    }
    const std::string actual = Sha256Hex(digest);
    if (actual != kExpectedExecutableSha256) {
        report = "unsupported executable SHA-256: " + actual;
        return false;
    }
    return true;
}

bool VerifyRuntimeSignatures(const std::uintptr_t base, std::string& report) noexcept {
    const auto* dos = reinterpret_cast<const IMAGE_DOS_HEADER*>(base);
    if (dos->e_magic != IMAGE_DOS_SIGNATURE) {
        report = "runtime image has no DOS signature";
        return false;
    }
    const auto* nt = reinterpret_cast<const IMAGE_NT_HEADERS64*>(base + dos->e_lfanew);
    if (nt->Signature != IMAGE_NT_SIGNATURE ||
        nt->OptionalHeader.Magic != IMAGE_NT_OPTIONAL_HDR64_MAGIC) {
        report = "runtime image is not a PE32+ executable";
        return false;
    }
    const std::size_t image_size = nt->OptionalHeader.SizeOfImage;
    for (const HookSignature& signature : kObservationHookSignatures) {
        if (signature.rva + signature.bytes.size() > image_size) {
            report = std::string("RVA outside runtime image: ") + signature.name;
            return false;
        }
        const void* address = reinterpret_cast<const void*>(base + signature.rva);
        if (std::memcmp(address, signature.bytes.data(), signature.bytes.size()) != 0) {
            report = std::string("runtime signature mismatch: ") + signature.name;
            return false;
        }
    }
    return true;
}

class MappedFile final {
  public:
    ~MappedFile() {
        if (view_ != nullptr) {
            UnmapViewOfFile(view_);
        }
        if (mapping_ != nullptr) {
            CloseHandle(mapping_);
        }
        if (file_ != INVALID_HANDLE_VALUE) {
            CloseHandle(file_);
        }
    }

    bool Open(const std::wstring& path, std::string& report) noexcept {
        file_ = CreateFileW(path.c_str(), GENERIC_READ,
                            FILE_SHARE_READ | FILE_SHARE_WRITE | FILE_SHARE_DELETE,
                            nullptr, OPEN_EXISTING, FILE_ATTRIBUTE_NORMAL, nullptr);
        if (file_ == INVALID_HANDLE_VALUE) {
            report = "unable to open executable for signature validation";
            return false;
        }
        LARGE_INTEGER size{};
        if (!GetFileSizeEx(file_, &size) || size.QuadPart <= 0) {
            report = "unable to read executable size";
            return false;
        }
        size_ = static_cast<std::size_t>(size.QuadPart);
        mapping_ = CreateFileMappingW(file_, nullptr, PAGE_READONLY, 0, 0, nullptr);
        if (mapping_ == nullptr) {
            report = "unable to create read-only executable mapping";
            return false;
        }
        view_ = static_cast<const std::byte*>(
            MapViewOfFile(mapping_, FILE_MAP_READ, 0, 0, 0));
        if (view_ == nullptr) {
            report = "unable to map executable read-only";
            return false;
        }
        return true;
    }

    const std::byte* data() const noexcept { return view_; }
    std::size_t size() const noexcept { return size_; }

  private:
    HANDLE file_ = INVALID_HANDLE_VALUE;
    HANDLE mapping_ = nullptr;
    const std::byte* view_ = nullptr;
    std::size_t size_ = 0;
};

const std::byte* RvaToFilePointer(const MappedFile& file, const std::uint32_t rva,
                                  const std::size_t length) noexcept {
    if (file.size() < sizeof(IMAGE_DOS_HEADER)) {
        return nullptr;
    }
    const auto* dos = reinterpret_cast<const IMAGE_DOS_HEADER*>(file.data());
    if (dos->e_magic != IMAGE_DOS_SIGNATURE || dos->e_lfanew < 0 ||
        static_cast<std::size_t>(dos->e_lfanew) + sizeof(IMAGE_NT_HEADERS64) >
            file.size()) {
        return nullptr;
    }
    const auto* nt = reinterpret_cast<const IMAGE_NT_HEADERS64*>(
        file.data() + static_cast<std::size_t>(dos->e_lfanew));
    if (nt->Signature != IMAGE_NT_SIGNATURE ||
        nt->OptionalHeader.Magic != IMAGE_NT_OPTIONAL_HDR64_MAGIC) {
        return nullptr;
    }

    const IMAGE_SECTION_HEADER* section = IMAGE_FIRST_SECTION(nt);
    for (std::uint16_t index = 0; index < nt->FileHeader.NumberOfSections;
         ++index, ++section) {
        const std::uint32_t span =
            std::max(section->Misc.VirtualSize, section->SizeOfRawData);
        if (rva < section->VirtualAddress || rva - section->VirtualAddress >= span) {
            continue;
        }
        const std::size_t offset = static_cast<std::size_t>(section->PointerToRawData) +
                                   (rva - section->VirtualAddress);
        if (offset > file.size() || length > file.size() - offset) {
            return nullptr;
        }
        return file.data() + offset;
    }
    return nullptr;
}

bool VerifyFileSignatures(const std::wstring& path, std::string& report) noexcept {
    MappedFile file;
    if (!file.Open(path, report)) {
        return false;
    }
    for (const HookSignature& signature : kObservationHookSignatures) {
        const std::byte* address = RvaToFilePointer(
            file, static_cast<std::uint32_t>(signature.rva), signature.bytes.size());
        if (address == nullptr) {
            report = std::string("cannot map RVA for signature: ") + signature.name;
            return false;
        }
        if (std::memcmp(address, signature.bytes.data(), signature.bytes.size()) != 0) {
            report = std::string("file signature mismatch: ") + signature.name;
            return false;
        }
    }
    return true;
}

} // namespace

bool VerifyRuntimeTarget(HMODULE executable_module, std::string& report) noexcept {
    report.clear();
    if (executable_module == nullptr) {
        report = "null executable module";
        return false;
    }

    std::array<wchar_t, 32768> path{};
    const DWORD length = GetModuleFileNameW(executable_module, path.data(),
                                            static_cast<DWORD>(path.size()));
    if (length == 0 || length >= path.size()) {
        report = "unable to resolve executable path";
        return false;
    }
    if (!VerifyHash(path.data(), report)) {
        return false;
    }
    if (!VerifyRuntimeSignatures(reinterpret_cast<std::uintptr_t>(executable_module), report)) {
        return false;
    }
    report = "supported CK2 executable and observation signatures verified";
    return true;
}

bool VerifyFileTarget(const std::wstring& executable_path, std::string& report) noexcept {
    report.clear();
    if (!VerifyHash(executable_path, report)) {
        return false;
    }
    if (!VerifyFileSignatures(executable_path, report)) {
        return false;
    }
    report = "supported CK2 file hash and observation signatures verified";
    return true;
}

} // namespace ck2naval

