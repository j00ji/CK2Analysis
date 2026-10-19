#include "ck2naval/log.hpp"

#include <array>
#include <cstdarg>
#include <cstdio>

namespace ck2naval::log {
namespace {

SRWLOCK g_lock = SRWLOCK_INIT;
HANDLE g_file = INVALID_HANDLE_VALUE;

bool BuildLogPath(HMODULE owner_module, std::array<wchar_t, MAX_PATH>& path) noexcept {
    const DWORD length = GetModuleFileNameW(owner_module, path.data(),
                                            static_cast<DWORD>(path.size()));
    if (length == 0 || length >= path.size()) {
        return false;
    }
    for (DWORD index = length; index > 0; --index) {
        if (path[index - 1] == L'\\' || path[index - 1] == L'/') {
            path[index] = L'\0';
            constexpr wchar_t filename[] = L"ck2_naval.log";
            if (index + std::size(filename) > path.size()) {
                return false;
            }
            wcscpy_s(path.data() + index, path.size() - index, filename);
            return true;
        }
    }
    return false;
}

} // namespace

bool Initialize(HMODULE owner_module) noexcept {
    std::array<wchar_t, MAX_PATH> path{};
    if (!BuildLogPath(owner_module, path)) {
        return false;
    }

    AcquireSRWLockExclusive(&g_lock);
    if (g_file == INVALID_HANDLE_VALUE) {
        g_file = CreateFileW(path.data(), FILE_APPEND_DATA,
                             FILE_SHARE_READ | FILE_SHARE_WRITE, nullptr, OPEN_ALWAYS,
                             FILE_ATTRIBUTE_NORMAL, nullptr);
    }
    const bool opened = g_file != INVALID_HANDLE_VALUE;
    ReleaseSRWLockExclusive(&g_lock);

    if (opened) {
        Write("logger initialized");
    }
    return opened;
}

void Write(const char* format, ...) noexcept {
    char message[1024]{};
    va_list arguments;
    va_start(arguments, format);
    _vsnprintf_s(message, _TRUNCATE, format, arguments);
    va_end(arguments);

    SYSTEMTIME now{};
    GetLocalTime(&now);
    char line[1200]{};
    const int length = _snprintf_s(
        line, _TRUNCATE, "%04u-%02u-%02u %02u:%02u:%02u.%03u [tid=%lu] %s\r\n",
        now.wYear, now.wMonth, now.wDay, now.wHour, now.wMinute, now.wSecond,
        now.wMilliseconds, static_cast<unsigned long>(GetCurrentThreadId()), message);
    if (length <= 0) {
        return;
    }

    OutputDebugStringA(line);
    AcquireSRWLockExclusive(&g_lock);
    if (g_file != INVALID_HANDLE_VALUE) {
        DWORD written = 0;
        WriteFile(g_file, line, static_cast<DWORD>(length), &written, nullptr);
        FlushFileBuffers(g_file);
    }
    ReleaseSRWLockExclusive(&g_lock);
}

void Shutdown() noexcept {
    AcquireSRWLockExclusive(&g_lock);
    if (g_file != INVALID_HANDLE_VALUE) {
        CloseHandle(g_file);
        g_file = INVALID_HANDLE_VALUE;
    }
    ReleaseSRWLockExclusive(&g_lock);
}

} // namespace ck2naval::log

