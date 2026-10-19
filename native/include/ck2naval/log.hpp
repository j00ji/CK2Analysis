#pragma once

#include <Windows.h>

namespace ck2naval::log {

bool Initialize(HMODULE owner_module) noexcept;
void Write(const char* format, ...) noexcept;
void Shutdown() noexcept;

} // namespace ck2naval::log

