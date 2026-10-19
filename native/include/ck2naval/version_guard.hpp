#pragma once

#include <Windows.h>

#include <string>

namespace ck2naval {

inline constexpr char kExpectedExecutableSha256[] =
    "cc2d65b51d9099b3d632fe3269fa647aaf7c00fcb00cc0240adbaa8e6bbbb75e";

bool VerifyRuntimeTarget(HMODULE executable_module, std::string& report) noexcept;
bool VerifyFileTarget(const std::wstring& executable_path, std::string& report) noexcept;

} // namespace ck2naval

