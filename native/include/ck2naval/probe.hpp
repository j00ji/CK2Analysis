#pragma once

#include <cstdint>

namespace ck2naval {

struct Observation final {
    bool readable{};
    bool navy{};
    bool sea{};
    bool type1{};
    bool naval_combat{};
};

Observation ObserveArrival(std::uintptr_t module_base, const void* province,
                           const void* unit) noexcept;
Observation ObserveCombat(std::uintptr_t module_base, const void* combat) noexcept;
Observation ObserveReinforcement(std::uintptr_t module_base, const void* combat,
                                 const void* unit) noexcept;

} // namespace ck2naval

