#pragma once

#include <cstdint>
#include <string>

namespace ck2naval {

void SetManualPrototypeEnabled(bool enabled) noexcept;
bool InstallObservationHooks(std::uintptr_t module_base, std::string& error) noexcept;
bool RemoveObservationHooks(std::string& error) noexcept;

} // namespace ck2naval

