#include "ck2naval/probe.hpp"

#include "ck2naval/addresses.hpp"

#include <Windows.h>

#include <cstddef>

namespace ck2naval {
namespace {

bool TryReadPointer(const void* base, const std::size_t offset,
                    std::uintptr_t& value) noexcept {
    if (base == nullptr) {
        return false;
    }
    __try {
        value = *reinterpret_cast<const std::uintptr_t*>(
            static_cast<const std::byte*>(base) + offset);
        return true;
    } __except (EXCEPTION_EXECUTE_HANDLER) {
        value = 0;
        return false;
    }
}

bool TryReadByte(const std::uintptr_t base, const std::size_t offset,
                 std::uint8_t& value) noexcept {
    if (base == 0) {
        return false;
    }
    __try {
        value = *reinterpret_cast<const std::uint8_t*>(base + offset);
        return true;
    } __except (EXCEPTION_EXECUTE_HANDLER) {
        value = 0;
        return false;
    }
}

bool IsVtable(const void* object, const std::uintptr_t expected,
              bool& readable) noexcept {
    std::uintptr_t vtable = 0;
    readable = TryReadPointer(object, 0, vtable);
    return readable && vtable == expected;
}

bool IsSeaProvince(const void* province, bool& readable) noexcept {
    std::uintptr_t definition = 0;
    std::uint8_t land = 0;
    readable = TryReadPointer(province, 0xF0, definition) &&
               TryReadByte(definition, 0x64, land);
    return readable && land == 0;
}

} // namespace

Observation ObserveArrival(const std::uintptr_t module_base, const void* province,
                           const void* unit) noexcept {
    Observation result{};
    bool unit_readable = false;
    bool province_readable = false;
    result.navy = IsVtable(unit, module_base + rva::kFleetVtable, unit_readable);
    result.sea = IsSeaProvince(province, province_readable);
    result.readable = unit_readable && province_readable;
    return result;
}

Observation ObserveReinforcement(const std::uintptr_t module_base, const void* combat,
                                 const void* unit) noexcept {
    Observation result = ObserveCombat(module_base, combat);
    bool unit_readable = false;
    result.navy = IsVtable(unit, module_base + rva::kFleetVtable, unit_readable);
    result.readable = result.readable && unit_readable;
    return result;
}

Observation ObserveCombat(const std::uintptr_t module_base, const void* combat) noexcept {
    Observation result{};
    bool combat_readable = false;
    result.type1 = IsVtable(combat, module_base + rva::kType1CombatVtable,
                            combat_readable);

    std::uintptr_t province = 0;
    bool province_readable = false;
    if (TryReadPointer(combat, 0x28, province)) {
        result.sea = IsSeaProvince(reinterpret_cast<const void*>(province), province_readable);
    }
    result.readable = combat_readable && province_readable;
    result.naval_combat = result.type1 && result.sea;
    return result;
}

} // namespace ck2naval

