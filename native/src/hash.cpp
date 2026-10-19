#include "ck2naval/hash.hpp"

#include <Windows.h>
#include <bcrypt.h>

#include <array>
#include <cstdio>
#include <memory>
#include <vector>

namespace ck2naval {
namespace {

constexpr bool BcryptSucceeded(const NTSTATUS status) noexcept {
    return status >= 0;
}

struct AlgorithmCloser final {
    void operator()(void* value) const noexcept {
        if (value != nullptr) {
            BCryptCloseAlgorithmProvider(static_cast<BCRYPT_ALG_HANDLE>(value), 0);
        }
    }
};

struct HashCloser final {
    void operator()(void* value) const noexcept {
        if (value != nullptr) {
            BCryptDestroyHash(static_cast<BCRYPT_HASH_HANDLE>(value));
        }
    }
};

using UniqueAlgorithm = std::unique_ptr<void, AlgorithmCloser>;
using UniqueHash = std::unique_ptr<void, HashCloser>;

std::wstring Win32Error(const wchar_t* action, const DWORD code) {
    wchar_t buffer[160]{};
    _snwprintf_s(buffer, _TRUNCATE, L"%s failed with Win32 error %lu", action,
                 static_cast<unsigned long>(code));
    return buffer;
}

std::wstring NtError(const wchar_t* action, const NTSTATUS status) {
    wchar_t buffer[160]{};
    _snwprintf_s(buffer, _TRUNCATE, L"%s failed with NTSTATUS 0x%08lX", action,
                 static_cast<unsigned long>(status));
    return buffer;
}

} // namespace

bool ComputeFileSha256(const std::wstring& path, Sha256Digest& digest,
                       std::wstring& error) noexcept {
    error.clear();
    digest.fill(0);

    HANDLE file = CreateFileW(path.c_str(), GENERIC_READ,
                              FILE_SHARE_READ | FILE_SHARE_WRITE | FILE_SHARE_DELETE,
                              nullptr, OPEN_EXISTING, FILE_FLAG_SEQUENTIAL_SCAN, nullptr);
    if (file == INVALID_HANDLE_VALUE) {
        error = Win32Error(L"CreateFileW", GetLastError());
        return false;
    }

    BCRYPT_ALG_HANDLE raw_algorithm = nullptr;
    NTSTATUS status = BCryptOpenAlgorithmProvider(&raw_algorithm, BCRYPT_SHA256_ALGORITHM,
                                                   nullptr, 0);
    UniqueAlgorithm algorithm(raw_algorithm);
    if (!BcryptSucceeded(status)) {
        CloseHandle(file);
        error = NtError(L"BCryptOpenAlgorithmProvider", status);
        return false;
    }

    DWORD object_size = 0;
    DWORD bytes_written = 0;
    status = BCryptGetProperty(raw_algorithm, BCRYPT_OBJECT_LENGTH,
                               reinterpret_cast<PUCHAR>(&object_size), sizeof(object_size),
                               &bytes_written, 0);
    if (!BcryptSucceeded(status)) {
        CloseHandle(file);
        error = NtError(L"BCryptGetProperty", status);
        return false;
    }

    std::vector<std::uint8_t> hash_object(object_size);
    BCRYPT_HASH_HANDLE raw_hash = nullptr;
    status = BCryptCreateHash(raw_algorithm, &raw_hash, hash_object.data(), object_size,
                              nullptr, 0, 0);
    UniqueHash hash(raw_hash);
    if (!BcryptSucceeded(status)) {
        CloseHandle(file);
        error = NtError(L"BCryptCreateHash", status);
        return false;
    }

    std::array<std::uint8_t, 64 * 1024> buffer{};
    for (;;) {
        DWORD read = 0;
        if (!ReadFile(file, buffer.data(), static_cast<DWORD>(buffer.size()), &read, nullptr)) {
            const DWORD code = GetLastError();
            CloseHandle(file);
            error = Win32Error(L"ReadFile", code);
            return false;
        }
        if (read == 0) {
            break;
        }
        status = BCryptHashData(raw_hash, buffer.data(), read, 0);
        if (!BcryptSucceeded(status)) {
            CloseHandle(file);
            error = NtError(L"BCryptHashData", status);
            return false;
        }
    }

    CloseHandle(file);
    status = BCryptFinishHash(raw_hash, digest.data(), static_cast<ULONG>(digest.size()), 0);
    if (!BcryptSucceeded(status)) {
        error = NtError(L"BCryptFinishHash", status);
        return false;
    }
    return true;
}

std::string Sha256Hex(const Sha256Digest& digest) {
    constexpr char digits[] = "0123456789abcdef";
    std::string result;
    result.resize(digest.size() * 2);
    for (std::size_t index = 0; index < digest.size(); ++index) {
        result[index * 2] = digits[digest[index] >> 4U];
        result[index * 2 + 1] = digits[digest[index] & 0x0FU];
    }
    return result;
}

} // namespace ck2naval

