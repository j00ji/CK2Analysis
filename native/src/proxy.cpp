#include <Windows.h>

#include <array>

struct IDirect3D9;

namespace {

HMODULE g_proxy_module = nullptr;
HMODULE g_real_d3d9 = nullptr;
HMODULE g_core_module = nullptr;
INIT_ONCE g_initialize_once = INIT_ONCE_STATIC_INIT;
using Direct3DCreate9Fn = IDirect3D9*(WINAPI*)(UINT);
Direct3DCreate9Fn g_real_direct3d_create9 = nullptr;

bool ModuleDirectory(HMODULE module, std::array<wchar_t, MAX_PATH>& path,
                     DWORD& directory_length) noexcept {
    const DWORD length = GetModuleFileNameW(module, path.data(),
                                            static_cast<DWORD>(path.size()));
    if (length == 0 || length >= path.size()) {
        return false;
    }
    for (DWORD index = length; index > 0; --index) {
        if (path[index - 1] == L'\\' || path[index - 1] == L'/') {
            directory_length = index;
            return true;
        }
    }
    return false;
}

BOOL CALLBACK InitializeProxy(PINIT_ONCE, PVOID, PVOID*) {
    std::array<wchar_t, MAX_PATH> system_path{};
    const UINT system_length = GetSystemDirectoryW(
        system_path.data(), static_cast<UINT>(system_path.size()));
    constexpr wchar_t d3d9_name[] = L"\\d3d9.dll";
    if (system_length == 0 || system_length + std::size(d3d9_name) > system_path.size()) {
        OutputDebugStringA("CK2 Naval proxy: unable to resolve system directory\n");
        return TRUE;
    }
    wcscpy_s(system_path.data() + system_length, system_path.size() - system_length,
             d3d9_name);
    g_real_d3d9 = LoadLibraryW(system_path.data());
    if (g_real_d3d9 == nullptr) {
        OutputDebugStringA("CK2 Naval proxy: unable to load system d3d9.dll\n");
        return TRUE;
    }
    g_real_direct3d_create9 = reinterpret_cast<Direct3DCreate9Fn>(
        GetProcAddress(g_real_d3d9, "Direct3DCreate9"));

    std::array<wchar_t, MAX_PATH> core_path{};
    DWORD directory_length = 0;
    if (ModuleDirectory(g_proxy_module, core_path, directory_length)) {
        constexpr wchar_t core_name[] = L"ck2_naval.dll";
        if (directory_length + std::size(core_name) <= core_path.size()) {
            wcscpy_s(core_path.data() + directory_length,
                     core_path.size() - directory_length, core_name);
            g_core_module = LoadLibraryW(core_path.data());
            if (g_core_module == nullptr) {
                OutputDebugStringA("CK2 Naval proxy: unable to load ck2_naval.dll\n");
            }
        }
    }
    return TRUE;
}

} // namespace

extern "C" __declspec(dllexport) IDirect3D9* WINAPI Direct3DCreate9(
    const UINT sdk_version) {
    InitOnceExecuteOnce(&g_initialize_once, &InitializeProxy, nullptr, nullptr);
    if (g_real_direct3d_create9 == nullptr) {
        return nullptr;
    }
    return g_real_direct3d_create9(sdk_version);
}

BOOL WINAPI DllMain(HINSTANCE instance, DWORD reason, LPVOID) {
    if (reason == DLL_PROCESS_ATTACH) {
        g_proxy_module = instance;
        DisableThreadLibraryCalls(instance);
    }
    return TRUE;
}

