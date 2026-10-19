#include "ck2naval/hooks.hpp"
#include "ck2naval/log.hpp"
#include "ck2naval/version_guard.hpp"

#include <Windows.h>

#include <array>
#include <atomic>
#include <cstdint>
#include <string>

namespace {

HMODULE g_module = nullptr;
std::atomic<bool> g_hooks_installed{false};

int ReadPrototypeSetting(const wchar_t* setting, const int fallback) noexcept {
    std::array<wchar_t, MAX_PATH> path{};
    const DWORD length = GetModuleFileNameW(g_module, path.data(),
                                            static_cast<DWORD>(path.size()));
    if (length == 0 || length >= path.size()) {
        return fallback;
    }
    for (DWORD index = length; index > 0; --index) {
        if (path[index - 1] != L'\\' && path[index - 1] != L'/') {
            continue;
        }
        path[index] = L'\0';
        constexpr wchar_t filename[] = L"ck2_naval.ini";
        if (index + std::size(filename) > path.size()) {
            return fallback;
        }
        wcscpy_s(path.data() + index, path.size() - index, filename);
        return GetPrivateProfileIntW(L"prototype", setting, fallback, path.data());
    }
    return fallback;
}

DWORD WINAPI InitializeCore(void*) {
    if (!ck2naval::log::Initialize(g_module)) {
        OutputDebugStringA("CK2 Naval: failed to initialize file logger\n");
    }

    HMODULE executable = GetModuleHandleW(nullptr);
    std::string report;
    if (!ck2naval::VerifyRuntimeTarget(executable, report)) {
        ck2naval::log::Write("version guard rejected process: %s", report.c_str());
        return 1;
    }
    ck2naval::log::Write("version guard accepted process: %s", report.c_str());

    const bool manual_prototype =
        ReadPrototypeSetting(L"manual_creation", 0) == 1;
    ck2naval::SetManualPrototypeEnabled(manual_prototype);
    ck2naval::log::Write("automatic creation prototype configured=%u",
                         manual_prototype);

    std::string hook_error;
    if (!ck2naval::InstallObservationHooks(
            reinterpret_cast<std::uintptr_t>(executable), hook_error)) {
        ck2naval::log::Write("hook installation failed: %s", hook_error.c_str());
        return 2;
    }
    g_hooks_installed.store(true);
    if (manual_prototype) {
        ck2naval::log::Write(
            "automatic prototype active: fleet battles update and finalize results; land loser retreat/destruction is blocked");
    } else {
        ck2naval::log::Write("CK2 Naval observation layer active; gameplay behavior unchanged");
    }
    return 0;
}

} // namespace

extern "C" __declspec(dllexport) BOOL WINAPI CK2NavalShutdown() {
    if (!g_hooks_installed.exchange(false)) {
        return TRUE;
    }
    std::string error;
    const bool removed = ck2naval::RemoveObservationHooks(error);
    if (!removed) {
        ck2naval::log::Write("hook removal failed: %s", error.c_str());
        return FALSE;
    }
    ck2naval::log::Write("observation hooks removed");
    ck2naval::log::Shutdown();
    return TRUE;
}

BOOL WINAPI DllMain(HINSTANCE instance, DWORD reason, LPVOID) {
    if (reason == DLL_PROCESS_ATTACH) {
        g_module = instance;
        DisableThreadLibraryCalls(instance);
        HANDLE thread = CreateThread(nullptr, 0, &InitializeCore, nullptr, 0, nullptr);
        if (thread != nullptr) {
            CloseHandle(thread);
        }
    }
    return TRUE;
}

