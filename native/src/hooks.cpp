#include "ck2naval/hooks.hpp"

#include "ck2naval/addresses.hpp"
#include "ck2naval/log.hpp"
#include "ck2naval/probe.hpp"

#include <Windows.h>
#include <MinHook.h>

#include <array>
#include <atomic>
#include <cstddef>
#include <cstdint>
#include <cstdio>

namespace ck2naval {
namespace {

using ExistingCombatArrivalFn = std::uint32_t(__fastcall*)(void*, void*, void*);
using NewEncounterAdmissionFn = int(__fastcall*)(void*, void*, void*);
// The caller consumes the bool-like result in AL. Keep the full RAX return in
// the trampoline type so observation preserves unspecified upper bits exactly.
using Type1ReinforcementFn = std::uint64_t(__fastcall*)(void*, void*);
using Type1UpdateFn = std::uint64_t(__fastcall*)(void*, std::uintptr_t,
                                                 std::uintptr_t, std::intptr_t,
                                                 std::uintptr_t);
using Type1CompletionFn = std::uint64_t(__fastcall*)(void*);
using SideAggregateFn = void*(__fastcall*)(void*, void*);
using LoserHandlingFn = void(__fastcall*)(void*, std::uint8_t);
using NeutralSideDetachFn = void(__fastcall*)(void*);
using MovementRequestFn = void(__fastcall*)(void*, void*, std::uint8_t);
using MovementCancellationFn = void(__fastcall*)(void*, std::uint8_t);
using MovementLockFn = std::uint64_t(__fastcall*)(void*);
using ProvinceLookupFn = void*(__fastcall*)(void*, std::uint32_t);
using MovementEdgeCostFn = void*(__fastcall*)(void*, std::int32_t*, void*);
using OpponentPredicateFn = std::uint8_t(__fastcall*)(void*, void*, std::uint8_t,
                                                       std::uint8_t);
using CombatFactoryFn = void(__fastcall*)(void*, void*, int, void*, void*,
                                          std::uint32_t*);
using CombatCountUpdateFn = void(__fastcall*)(void*, char);
using EngineStringInitFn = void(__fastcall*)(void*, const char*, std::size_t);
using EngineStringDestroyFn = void(__fastcall*)(void*);
using IntegerToUiStringFn = void*(__fastcall*)(void*, std::int32_t);
using UiNamedLookupFn = void*(__fastcall*)(void*, void*);
using SetUiTextFn = void(__fastcall*)(void*, void*, std::uint32_t);

ExistingCombatArrivalFn g_existing_combat_arrival = nullptr;
NewEncounterAdmissionFn g_new_encounter_admission = nullptr;
Type1ReinforcementFn g_type1_reinforcement = nullptr;
Type1UpdateFn g_type1_update = nullptr;
Type1CompletionFn g_type1_completion = nullptr;
SideAggregateFn g_side_aggregate = nullptr;
LoserHandlingFn g_loser_handling = nullptr;
NeutralSideDetachFn g_neutral_side_detach = nullptr;
MovementRequestFn g_movement_request = nullptr;
MovementCancellationFn g_movement_cancellation = nullptr;
MovementLockFn g_movement_lock = nullptr;
ProvinceLookupFn g_province_lookup = nullptr;
MovementEdgeCostFn g_movement_edge_cost = nullptr;
OpponentPredicateFn g_opponent_predicate = nullptr;
CombatFactoryFn g_combat_factory = nullptr;
CombatCountUpdateFn g_combat_count_update = nullptr;
EngineStringInitFn g_engine_string_init = nullptr;
EngineStringDestroyFn g_engine_string_destroy = nullptr;
IntegerToUiStringFn g_integer_to_ui_string = nullptr;
SetUiTextFn g_set_ui_text = nullptr;
std::uintptr_t g_module_base = 0;

std::atomic<bool> g_manual_prototype_enabled{false};
std::atomic<std::uint64_t> g_existing_calls{0};
std::atomic<std::uint64_t> g_new_calls{0};
std::atomic<std::uint64_t> g_reinforcement_calls{0};
std::atomic<std::uint64_t> g_naval_update_calls{0};
std::atomic<std::uint64_t> g_completion_check_calls{0};
std::atomic<std::uint64_t> g_empty_scan_calls{0};
std::atomic<std::uint64_t> g_blocked_embarked_orders{0};
std::atomic<bool> g_galleys_widget_missing_logged{false};
std::atomic<bool> g_galleys_widget_updated_logged{false};

constexpr std::uint64_t kInitialLogLimit = 64;
constexpr std::size_t kMaximumProvinceUnits = 4096;
constexpr std::size_t kMaximumRememberedEncounters = 256;
constexpr std::size_t kMaximumRetreatingFleets = 256;

struct NavalEncounterRecord final {
    void* combat = nullptr;
    void* province = nullptr;
    void* first = nullptr;
    void* second = nullptr;
    bool completed = false;
};

SRWLOCK g_encounter_lock = SRWLOCK_INIT;
std::array<NavalEncounterRecord, kMaximumRememberedEncounters> g_encounters{};
std::size_t g_next_encounter = 0;
thread_local void* g_naval_completion_in_progress = nullptr;

bool ShouldLog(const std::uint64_t call_number, const Observation& observation) noexcept {
    if (call_number <= kInitialLogLimit) {
        return true;
    }
    const bool relevant = observation.navy || observation.sea ||
                          observation.naval_combat;
    return relevant && (call_number <= 512 || call_number % 256 == 0);
}

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

bool HasLiveControl(const void* owner, const std::size_t control_offset,
                    bool& readable) noexcept {
    std::uintptr_t control = 0;
    if (!TryReadPointer(owner, control_offset, control)) {
        readable = false;
        return false;
    }
    if (control == 0) {
        readable = true;
        return false;
    }
    __try {
        readable = true;
        return *reinterpret_cast<const std::int32_t*>(control + 8) != 0;
    } __except (EXCEPTION_EXECUTE_HANDLER) {
        readable = false;
        return false;
    }
}

bool TryReadInt32(const void* base, const std::size_t offset,
                  std::int32_t& value) noexcept {
    if (base == nullptr) {
        return false;
    }
    __try {
        value = *reinterpret_cast<const std::int32_t*>(
            static_cast<const std::byte*>(base) + offset);
        return true;
    } __except (EXCEPTION_EXECUTE_HANDLER) {
        value = 0;
        return false;
    }
}

void* FindUiChild(void* parent, const std::size_t vtable_offset,
                  void* name) noexcept {
    std::uintptr_t vtable = 0;
    std::uintptr_t lookup = 0;
    if (parent == nullptr || name == nullptr ||
        !TryReadPointer(parent, 0, vtable) ||
        !TryReadPointer(reinterpret_cast<const void*>(vtable), vtable_offset,
                        lookup) ||
        lookup == 0) {
        return nullptr;
    }
    return reinterpret_cast<UiNamedLookupFn>(lookup)(parent, name);
}

void UpdateGalleysCountWidget(void* view, const char side_selector) noexcept {
    if (view == nullptr || g_engine_string_init == nullptr ||
        g_engine_string_destroy == nullptr || g_integer_to_ui_string == nullptr ||
        g_set_ui_text == nullptr || g_side_aggregate == nullptr) {
        return;
    }

    std::uintptr_t ui_context = 0;
    std::uintptr_t battle_state = 0;
    if (!TryReadPointer(view, 0x38, ui_context) || ui_context == 0 ||
        !TryReadPointer(view, 0x40, battle_state) || battle_state == 0) {
        return;
    }

    alignas(16) std::array<std::byte, 0x20> side_name{};
    const char* const side_key = side_selector == 0 ? "attacker" : "defender";
    g_engine_string_init(side_name.data(), side_key, 8);
    void* side_window = FindUiChild(reinterpret_cast<void*>(ui_context), 0xE8,
                                    side_name.data());
    g_engine_string_destroy(side_name.data());
    if (side_window == nullptr) {
        return;
    }

    alignas(16) std::array<std::byte, 0x20> control_name{};
    g_engine_string_init(control_name.data(), "galleys_total", 13);
    void* count_control = FindUiChild(side_window, 0x88, control_name.data());
    g_engine_string_destroy(control_name.data());
    if (count_control == nullptr) {
        if (!g_galleys_widget_missing_logged.exchange(true)) {
            log::Write(
                "GALLEYS count widget not found; add galleys_total to both combat side layouts");
        }
        return;
    }

    std::uintptr_t side = 0;
    const std::size_t side_offset = side_selector == 0 ? 0x10 : 0x18;
    if (!TryReadPointer(reinterpret_cast<const void*>(battle_state), side_offset,
                        side) ||
        side == 0) {
        return;
    }

    alignas(16) std::array<std::byte, 0x80> aggregate{};
    void* aggregate_data =
        g_side_aggregate(reinterpret_cast<void*>(side), aggregate.data());
    std::int32_t fixed_count = 0;
    if (aggregate_data == nullptr ||
        !TryReadInt32(aggregate_data, 0x2C, fixed_count)) {
        return;
    }

    alignas(16) std::array<std::byte, 0x20> formatted_count{};
    void* formatted_text = nullptr;
    if (fixed_count < 1) {
        g_engine_string_init(formatted_count.data(), "", 0);
        formatted_text = formatted_count.data();
    } else {
        std::int32_t display_count = fixed_count / 1000;
        if (fixed_count % 1000 != 0) {
            ++display_count;
        }
        formatted_text = g_integer_to_ui_string(formatted_count.data(),
                                                display_count);
    }
    if (formatted_text != nullptr) {
        g_set_ui_text(count_control, formatted_text, 0);
        if (!g_galleys_widget_updated_logged.exchange(true)) {
            log::Write("GALLEYS count widget connected to live category-7 aggregate");
        }
    }
    g_engine_string_destroy(formatted_count.data());
}

bool TryReadByte(const void* base, const std::size_t offset,
                 std::uint8_t& value) noexcept {
    if (base == nullptr) {
        return false;
    }
    __try {
        value = *reinterpret_cast<const std::uint8_t*>(
            static_cast<const std::byte*>(base) + offset);
        return true;
    } __except (EXCEPTION_EXECUTE_HANDLER) {
        value = 0;
        return false;
    }
}

bool TryWriteInt32(void* base, const std::size_t offset,
                   const std::int32_t value) noexcept {
    if (base == nullptr) {
        return false;
    }
    __try {
        *reinterpret_cast<std::int32_t*>(
            static_cast<std::byte*>(base) + offset) = value;
        return true;
    } __except (EXCEPTION_EXECUTE_HANDLER) {
        return false;
    }
}

bool IsExactFleet(const void* unit) noexcept {
    std::uintptr_t vtable = 0;
    return TryReadPointer(unit, 0, vtable) &&
           vtable == g_module_base + rva::kFleetVtable;
}

void __fastcall GuardEmbarkedArmyMovementDuringNavalCombat(
    void* unit, void* destination, const std::uint8_t flag) {
    if (g_manual_prototype_enabled.load() && !IsExactFleet(unit)) {
        std::uintptr_t carrier = 0;
        if (TryReadPointer(unit, 0x230, carrier) && carrier != 0 &&
            IsExactFleet(reinterpret_cast<const void*>(carrier))) {
            bool readable = false;
            if (HasLiveControl(reinterpret_cast<const void*>(carrier), 0x68,
                               readable) && readable) {
                const std::uint64_t call_number =
                    g_blocked_embarked_orders.fetch_add(1) + 1;
                if (call_number <= 32 || call_number % 64 == 0) {
                    log::Write(
                        "blocked embarked-army movement during fleet combat call=%llu",
                        static_cast<unsigned long long>(call_number));
                }
                return;
            }
        }
    }
    g_movement_request(unit, destination, flag);
}

std::uint64_t __fastcall ExtendFleetMovementLock(void* unit) {
    if (!IsExactFleet(unit)) {
        return g_movement_lock(unit);
    }

    std::uintptr_t game_state = 0;
    std::uint8_t enabled = 0;
    if (!TryReadPointer(reinterpret_cast<const void*>(
                            g_module_base + rva::kGameStateGlobal),
                        0, game_state) ||
        !TryReadByte(reinterpret_cast<const void*>(game_state), 0x575,
                     enabled)) {
        return g_movement_lock(unit);
    }
    if (enabled == 0) {
        return 0;
    }

    std::int32_t route_count = 0;
    std::int32_t progress = 0;
    std::uintptr_t route_head = 0;
    if (!TryReadInt32(unit, 0xA0, route_count) || route_count <= 0 ||
        !TryReadInt32(unit, 0xB0, progress) || progress <= 0 ||
        !TryReadPointer(unit, 0x90, route_head) || route_head == 0) {
        return 0;
    }

    std::int32_t next_province_id = 0;
    if (!TryReadInt32(reinterpret_cast<const void*>(route_head), 0,
                      next_province_id) || next_province_id < 0) {
        return g_movement_lock(unit);
    }
    std::uintptr_t province_manager = 0;
    if (!TryReadPointer(reinterpret_cast<const void*>(
                            g_module_base + rva::kProvinceManagerGlobal),
                        0, province_manager)) {
        return g_movement_lock(unit);
    }
    void* destination = g_province_lookup(
        reinterpret_cast<void*>(province_manager),
        static_cast<std::uint32_t>(next_province_id));
    if (destination == nullptr) {
        return g_movement_lock(unit);
    }

    std::int32_t edge_cost = 0;
    g_movement_edge_cost(unit, &edge_cost, destination);
    if (edge_cost == 0) {
        return 0;
    }
    const std::int64_t progress_ratio =
        static_cast<std::int64_t>(progress) * 1000 / edge_cost;
    return progress_ratio > 500 ? 1 : 0;
}

struct RetreatingFleet final {
    void* unit = nullptr;
    void* destination = nullptr;
};

std::size_t SnapshotNavalRetreats(
    void* side,
    std::array<RetreatingFleet, kMaximumRetreatingFleets>& retreats,
    bool& truncated) noexcept {
    truncated = false;
    std::uintptr_t node = 0;
    if (!TryReadPointer(side, 0x30, node)) {
        return 0;
    }

    std::size_t count = 0;
    std::size_t visited = 0;
    while (node != 0 && visited < kMaximumRetreatingFleets) {
        ++visited;
        std::uintptr_t unit = 0;
        std::uintptr_t next = 0;
        if (!TryReadPointer(reinterpret_cast<const void*>(node), 0, unit) ||
            !TryReadPointer(reinterpret_cast<const void*>(node), 0x10, next)) {
            break;
        }
        node = next;
        if (unit == 0 || !IsExactFleet(reinterpret_cast<const void*>(unit))) {
            continue;
        }

        std::uintptr_t current = 0;
        std::uintptr_t previous = 0;
        if (!TryReadPointer(reinterpret_cast<const void*>(unit), 0x80, current) ||
            !TryReadPointer(reinterpret_cast<const void*>(unit), 0x88, previous) ||
            previous == 0 || previous == current) {
            retreats[count++] = {reinterpret_cast<void*>(unit), nullptr};
            continue;
        }
        retreats[count++] = {reinterpret_cast<void*>(unit),
                             reinterpret_cast<void*>(previous)};
    }
    truncated = node != 0;
    return count;
}

bool RequestCommittedRetreat(void* unit, void* destination) noexcept {
    // State 2 is the engine's arrival-cleared committed-movement state. It
    // prevents command cancellation while the retreat route is active and is
    // reset to zero by 0x140ba2870 when the destination is reached.
    if (!TryWriteInt32(unit, 0xB4, 2)) {
        return false;
    }

    auto* suppression = reinterpret_cast<std::uint8_t*>(
        g_module_base + rva::kRngSuppressionByte);
    std::uint8_t saved = 0;
    bool suppression_readable = false;
    __try {
        saved = *suppression;
        *suppression = 1;
        suppression_readable = true;
    } __except (EXCEPTION_EXECUTE_HANDLER) {
        suppression_readable = false;
    }

    g_movement_request(unit, destination, 0);

    if (suppression_readable) {
        __try {
            *suppression = saved;
        } __except (EXCEPTION_EXECUTE_HANDLER) {
        }
    }
    return true;
}

bool SameUnitPair(const NavalEncounterRecord& record, const void* first,
                  const void* second) noexcept {
    return (record.first == first && record.second == second) ||
           (record.first == second && record.second == first);
}

bool IsCompletedPairSuppressed(void* first, void* second) noexcept {
    AcquireSRWLockExclusive(&g_encounter_lock);
    bool suppressed = false;
    for (NavalEncounterRecord& record : g_encounters) {
        if (!record.completed || !SameUnitPair(record, first, second)) {
            continue;
        }
        std::uintptr_t first_province = 0;
        std::uintptr_t second_province = 0;
        const bool together =
            TryReadPointer(record.first, 0x80, first_province) &&
            TryReadPointer(record.second, 0x80, second_province) &&
            first_province == reinterpret_cast<std::uintptr_t>(record.province) &&
            second_province == reinterpret_cast<std::uintptr_t>(record.province);
        if (together) {
            suppressed = true;
        } else {
            record = {};
        }
        break;
    }
    ReleaseSRWLockExclusive(&g_encounter_lock);
    return suppressed;
}

void RememberEncounter(void* combat, void* province, void* first,
                       void* second) noexcept {
    if (combat == nullptr) {
        return;
    }
    AcquireSRWLockExclusive(&g_encounter_lock);
    NavalEncounterRecord* target = nullptr;
    for (NavalEncounterRecord& record : g_encounters) {
        if (record.combat == combat || SameUnitPair(record, first, second)) {
            target = &record;
            break;
        }
    }
    if (target == nullptr) {
        target = &g_encounters[g_next_encounter];
        g_next_encounter = (g_next_encounter + 1) % g_encounters.size();
    }
    *target = {combat, province, first, second, false};
    ReleaseSRWLockExclusive(&g_encounter_lock);
}

bool MarkEncounterCompleted(void* combat) noexcept {
    AcquireSRWLockExclusive(&g_encounter_lock);
    bool found = false;
    for (NavalEncounterRecord& record : g_encounters) {
        if (record.combat == combat) {
            record.completed = true;
            found = true;
            break;
        }
    }
    ReleaseSRWLockExclusive(&g_encounter_lock);
    return found;
}

bool SideHasContinuingContent(void* side, bool& readable,
                              std::int64_t& strength) noexcept {
    readable = false;
    strength = 0;
    if (side == nullptr || g_side_aggregate == nullptr) {
        return false;
    }

    bool has_components = false;
    for (std::size_t flank = 0; flank < 3; ++flank) {
        const std::size_t base = flank * 0xC8;
        std::uintptr_t begin = 0;
        std::uintptr_t end = 0;
        if (!TryReadPointer(side, 0xC8 + base, begin) ||
            !TryReadPointer(side, 0xD0 + base, end)) {
            return false;
        }
        has_components = has_components || begin != end;
    }

    std::array<std::byte, 0x80> aggregate{};
    void* output = g_side_aggregate(side, aggregate.data());
    if (output == nullptr) {
        return false;
    }
    for (std::size_t category = 0; category < 8; ++category) {
        std::int32_t amount = 0;
        if (!TryReadInt32(output, 0x10 + category * sizeof(amount), amount)) {
            return false;
        }
        strength += amount;
    }
    readable = true;
    return has_components && strength != 0;
}

struct OpponentScan final {
    void* opponent = nullptr;
    std::size_t units = 0;
    std::size_t navies = 0;
    std::size_t free_navies = 0;
    std::size_t eligible = 0;
    bool unreadable = false;
};

OpponentScan FindEligibleOpponent(void* province, void* arriving_unit) noexcept {
    OpponentScan scan;
    std::uintptr_t node = 0;
    if (!TryReadPointer(province, 0xCC0, node)) {
        scan.unreadable = true;
        return scan;
    }

    for (std::size_t visited = 0; node != 0 && visited < kMaximumProvinceUnits;
         ++visited) {
        std::uintptr_t candidate = 0;
        std::uintptr_t next = 0;
        if (!TryReadPointer(reinterpret_cast<const void*>(node), 0, candidate) ||
            !TryReadPointer(reinterpret_cast<const void*>(node), 0x10, next)) {
            scan.unreadable = true;
            return scan;
        }
        node = next;
        if (candidate == 0 || candidate == reinterpret_cast<std::uintptr_t>(arriving_unit)) {
            continue;
        }
        if (IsCompletedPairSuppressed(arriving_unit,
                                      reinterpret_cast<void*>(candidate))) {
            continue;
        }
        ++scan.units;

        const Observation candidate_observation = ObserveArrival(
            g_module_base, province, reinterpret_cast<const void*>(candidate));
        scan.unreadable = scan.unreadable || !candidate_observation.readable;
        if (candidate_observation.navy) {
            ++scan.navies;
        }

        bool association_readable = false;
        const bool live = HasLiveControl(reinterpret_cast<const void*>(candidate), 0x68,
                                         association_readable);
        scan.unreadable = scan.unreadable || !association_readable;
        if (candidate_observation.navy && association_readable && !live) {
            ++scan.free_navies;
        }

        // Mirror the stock 0x1403bb5d0 loop: its eligibility predicate, not an
        // exact concrete-vtable comparison, decides whether this unit can oppose
        // the arriving fleet.
        const bool eligible =
            g_opponent_predicate(arriving_unit, reinterpret_cast<void*>(candidate), 0, 0) != 0;
        if (visited < 8) {
            log::Write(
                "automatic candidate index=%zu exact_navy=%u association_readable=%u live=%u eligible=%u",
                visited, candidate_observation.navy, association_readable, live, eligible);
        }
        if (eligible) {
            ++scan.eligible;
            scan.opponent = reinterpret_cast<void*>(candidate);
            return scan;
        }
    }
    return scan;
}

bool TryCreateManualCombat(void* manager, void* province, void* arriving_unit) noexcept {
    bool readable = false;
    if (HasLiveControl(province, 0xCE0, readable) || !readable) {
        log::Write("automatic creation refused: province already has live combat or unreadable state");
        return false;
    }
    if (HasLiveControl(arriving_unit, 0x68, readable) || !readable) {
        log::Write("automatic creation refused: arriving fleet already has live combat or unreadable state");
        return false;
    }

    const OpponentScan scan = FindEligibleOpponent(province, arriving_unit);
    if (scan.opponent == nullptr) {
        const std::uint64_t empty_call = g_empty_scan_calls.fetch_add(1) + 1;
        if (scan.units != 0 || empty_call <= 8 || empty_call % 256 == 0) {
            log::Write(
                "automatic creation skipped: no eligible hostile fleet; scan=%llu units=%zu exact_navies=%zu free_exact_navies=%zu eligible=%zu unreadable=%u",
                static_cast<unsigned long long>(empty_call), scan.units, scan.navies,
                scan.free_navies, scan.eligible, scan.unreadable);
        }
        return false;
    }

    log::Write(
        "automatic creation requested: invoking type-1 factory for two fleets; units=%zu exact_navies=%zu free_exact_navies=%zu eligible=%zu unreadable=%u",
        scan.units, scan.navies, scan.free_navies, scan.eligible, scan.unreadable);
    std::uint32_t modifier = 0xFFFFFFFFU;
    g_combat_factory(manager, province, 1, arriving_unit, scan.opponent, &modifier);

    bool province_readable = false;
    bool attacker_readable = false;
    bool defender_readable = false;
    const bool province_live = HasLiveControl(province, 0xCE0, province_readable);
    const bool attacker_live = HasLiveControl(arriving_unit, 0x68, attacker_readable);
    const bool defender_live = HasLiveControl(scan.opponent, 0x68, defender_readable);
    std::uintptr_t combat = 0;
    const bool combat_readable = TryReadPointer(province, 0xCD8, combat);
    if (province_live && combat_readable && combat != 0) {
        RememberEncounter(reinterpret_cast<void*>(combat), province, arriving_unit,
                          scan.opponent);
        const auto interrupt_cargo_routes = [](void* fleet) noexcept {
            std::uintptr_t node = 0;
            if (!TryReadPointer(fleet, 0x230, node)) {
                return std::size_t{0};
            }
            std::size_t interrupted = 0;
            for (std::size_t visited = 0;
                 node != 0 && visited < kMaximumProvinceUnits; ++visited) {
                std::uintptr_t army = 0;
                std::uintptr_t next = 0;
                if (!TryReadPointer(reinterpret_cast<const void*>(node), 0, army) ||
                    !TryReadPointer(reinterpret_cast<const void*>(node), 0x10, next)) {
                    break;
                }
                node = next;
                if (army == 0) {
                    continue;
                }
                std::uintptr_t carrier = 0;
                std::int32_t route_count = 0;
                if (TryReadPointer(reinterpret_cast<const void*>(army), 0x230,
                                   carrier) &&
                    carrier == reinterpret_cast<std::uintptr_t>(fleet) &&
                    TryReadInt32(reinterpret_cast<const void*>(army), 0xA0,
                                 route_count) &&
                    route_count > 0) {
                    g_movement_cancellation(reinterpret_cast<void*>(army), 1);
                    ++interrupted;
                }
            }
            return interrupted;
        };
        const std::size_t interrupted =
            interrupt_cargo_routes(arriving_unit) +
            interrupt_cargo_routes(scan.opponent);
        if (interrupted != 0) {
            log::Write("naval combat interrupted %zu embarked-army movement route(s)",
                       interrupted);
        }
    }
    log::Write(
        "automatic creation returned: province_live=%u attacker_live=%u defender_live=%u readable=%u remembered=%u",
        province_live, attacker_live, defender_live,
        province_readable && attacker_readable && defender_readable,
        province_live && combat_readable && combat != 0);
    return province_live;
}

std::uint32_t __fastcall ObserveExistingCombatArrival(void* manager, void* province,
                                                       void* unit) {
    const Observation observation = ObserveArrival(g_module_base, province, unit);
    const std::uint32_t result = g_existing_combat_arrival(manager, province, unit);
    const std::uint64_t call_number = g_existing_calls.fetch_add(1) + 1;
    if (ShouldLog(call_number, observation)) {
        log::Write("observe existing-arrival call=%llu readable=%u navy=%u sea=%u result=%u",
                   static_cast<unsigned long long>(call_number), observation.readable,
                   observation.navy, observation.sea, result);
    }
    return result;
}

int __fastcall ObserveNewEncounterAdmission(void* manager, void* province, void* unit) {
    const Observation observation = ObserveArrival(g_module_base, province, unit);
    if (g_manual_prototype_enabled.load() && observation.readable && observation.navy &&
        observation.sea) {
        if (TryCreateManualCombat(manager, province, unit)) {
            const std::uint64_t call_number = g_new_calls.fetch_add(1) + 1;
            log::Write("automatic creation accepted on new-admission call=%llu; returning type 1",
                       static_cast<unsigned long long>(call_number));
            return 1;
        }
    }

    const int result = g_new_encounter_admission(manager, province, unit);
    const std::uint64_t call_number = g_new_calls.fetch_add(1) + 1;
    if (ShouldLog(call_number, observation)) {
        log::Write("observe new-admission call=%llu readable=%u navy=%u sea=%u result=%d",
                   static_cast<unsigned long long>(call_number), observation.readable,
                   observation.navy, observation.sea, result);
    }
    return result;
}

std::uint64_t __fastcall ObserveType1Reinforcement(void* combat, void* unit) {
    const Observation observation = ObserveReinforcement(g_module_base, combat, unit);
    const std::uint64_t result = g_type1_reinforcement(combat, unit);
    const std::uint64_t call_number = g_reinforcement_calls.fetch_add(1) + 1;
    if (ShouldLog(call_number, observation)) {
        log::Write(
            "observe type1-reinforcement call=%llu readable=%u navy=%u type1=%u sea=%u naval=%u result_al=%u raw_rax=0x%016llX",
            static_cast<unsigned long long>(call_number), observation.readable,
            observation.navy, observation.type1, observation.sea,
            observation.naval_combat, static_cast<unsigned>(result & 0xFFU),
            static_cast<unsigned long long>(result));
    }
    return result;
}

std::uint64_t __fastcall ObserveType1Update(void* combat, const std::uintptr_t argument2,
                                           const std::uintptr_t argument3,
                                           const std::intptr_t argument4,
                                           const std::uintptr_t argument5) {
    const Observation observation = ObserveCombat(g_module_base, combat);
    const std::uint64_t result =
        g_type1_update(combat, argument2, argument3, argument4, argument5);
    if (g_manual_prototype_enabled.load() && observation.naval_combat) {
        const std::uint64_t call_number = g_naval_update_calls.fetch_add(1) + 1;
        if (call_number <= 16 || call_number % 256 == 0) {
            log::Write("prototype update: ran naval type-1 update call=%llu result=%llu",
                       static_cast<unsigned long long>(call_number),
                       static_cast<unsigned long long>(result));
        }
    }
    return result;
}

std::uint64_t __fastcall GuardType1Completion(void* combat) {
    const Observation observation = ObserveCombat(g_module_base, combat);
    if (g_manual_prototype_enabled.load() && observation.naval_combat) {
        const std::uint64_t call_number = g_completion_check_calls.fetch_add(1) + 1;
        std::uintptr_t first_side = 0;
        std::uintptr_t second_side = 0;
        bool first_readable = false;
        bool second_readable = false;
        std::int64_t first_strength = 0;
        std::int64_t second_strength = 0;
        if (!TryReadPointer(combat, 0x10, first_side) ||
            !TryReadPointer(combat, 0x18, second_side)) {
            log::Write("prototype completion check failed closed: unreadable side pointers");
            return 0;
        }
        const bool first_alive = SideHasContinuingContent(
            reinterpret_cast<void*>(first_side), first_readable, first_strength);
        const bool second_alive = SideHasContinuingContent(
            reinterpret_cast<void*>(second_side), second_readable, second_strength);
        if (!first_readable || !second_readable) {
            log::Write("prototype completion check failed closed: unreadable side state");
            return 0;
        }
        if (first_alive && second_alive) {
            if (call_number <= 16 || call_number % 256 == 0) {
                log::Write(
                    "prototype completion check: ongoing call=%llu first_strength=%lld second_strength=%lld",
                    static_cast<unsigned long long>(call_number),
                    static_cast<long long>(first_strength),
                    static_cast<long long>(second_strength));
            }
            return 0;
        }
        g_naval_completion_in_progress = combat;
        const std::uint64_t result = g_type1_completion(combat);
        g_naval_completion_in_progress = nullptr;
        const bool remembered = result != 0 && MarkEncounterCompleted(combat);
        log::Write(
            "prototype naval completion: stock result finalizer returned=%llu first_alive=%u second_alive=%u first_strength=%lld second_strength=%lld remembered=%u",
            static_cast<unsigned long long>(result),
            first_alive, second_alive, static_cast<long long>(first_strength),
            static_cast<long long>(second_strength), remembered);
        return result;
    }
    return g_type1_completion(combat);
}

void __fastcall GuardLoserHandling(void* side, const std::uint8_t disposition) {
    if (g_manual_prototype_enabled.load() &&
        g_naval_completion_in_progress != nullptr) {
        std::array<RetreatingFleet, kMaximumRetreatingFleets> retreats{};
        bool truncated = false;
        const std::size_t count = SnapshotNavalRetreats(side, retreats, truncated);

        // Detach before submitting movement, matching the safe common portion
        // of stock loser handling while bypassing its land-only destination
        // selector and fleet/cargo destruction branch.
        g_neutral_side_detach(side);

        std::size_t requested = 0;
        std::size_t failed = 0;
        std::size_t missing_destination = 0;
        for (std::size_t index = 0; index < count; ++index) {
            if (retreats[index].destination == nullptr) {
                ++missing_destination;
                continue;
            }
            if (RequestCommittedRetreat(retreats[index].unit,
                                        retreats[index].destination)) {
                ++requested;
            } else {
                ++failed;
            }
        }
        log::Write(
            "prototype naval aftermath: detached loser side and requested committed retreats disposition=%u fleets=%zu requested=%zu failed=%zu missing_previous=%zu truncated=%u",
            static_cast<unsigned>(disposition), count, requested, failed,
            missing_destination, truncated);
        return;
    }
    g_loser_handling(side, disposition);
}

void __fastcall UpdateCombatCountWidgets(void* view, const char side_selector) {
    g_combat_count_update(view, side_selector);
    UpdateGalleysCountWidget(view, side_selector);
}

struct HookSpec final {
    std::uintptr_t rva;
    void* detour;
    void** original;
};

std::array<HookSpec, 9> HookSpecs() noexcept {
    return {{{
                 rva::kExistingCombatArrival,
                 reinterpret_cast<void*>(&ObserveExistingCombatArrival),
                 reinterpret_cast<void**>(&g_existing_combat_arrival),
             },
             {
                 rva::kNewEncounterAdmission,
                 reinterpret_cast<void*>(&ObserveNewEncounterAdmission),
                 reinterpret_cast<void**>(&g_new_encounter_admission),
             },
             {
                 rva::kType1Reinforcement,
                 reinterpret_cast<void*>(&ObserveType1Reinforcement),
                 reinterpret_cast<void**>(&g_type1_reinforcement),
             },
             {
                 rva::kType1Update,
                 reinterpret_cast<void*>(&ObserveType1Update),
                 reinterpret_cast<void**>(&g_type1_update),
             },
             {
                 rva::kType1Completion,
                 reinterpret_cast<void*>(&GuardType1Completion),
                 reinterpret_cast<void**>(&g_type1_completion),
             },
             {
                 rva::kLoserHandling,
                 reinterpret_cast<void*>(&GuardLoserHandling),
                 reinterpret_cast<void**>(&g_loser_handling),
             },
             {
                 rva::kHalfwayMovementLock,
                 reinterpret_cast<void*>(&ExtendFleetMovementLock),
                 reinterpret_cast<void**>(&g_movement_lock),
             },
             {
                 rva::kMovementRequest,
                 reinterpret_cast<void*>(&GuardEmbarkedArmyMovementDuringNavalCombat),
                 reinterpret_cast<void**>(&g_movement_request),
             },
             {
                 rva::kCombatCountUpdate,
                 reinterpret_cast<void*>(&UpdateCombatCountWidgets),
                 reinterpret_cast<void**>(&g_combat_count_update),
             }}};
}

std::string MinHookError(const char* action, const MH_STATUS status) {
    char buffer[192]{};
    _snprintf_s(buffer, _TRUNCATE, "%s failed: %s (%d)", action,
                MH_StatusToString(status), static_cast<int>(status));
    return buffer;
}

} // namespace

void SetManualPrototypeEnabled(const bool enabled) noexcept {
    g_manual_prototype_enabled.store(enabled);
}

bool InstallObservationHooks(const std::uintptr_t module_base, std::string& error) noexcept {
    error.clear();
    g_module_base = module_base;
    g_opponent_predicate = reinterpret_cast<OpponentPredicateFn>(
        module_base + rva::kOpponentPredicate);
    g_combat_factory = reinterpret_cast<CombatFactoryFn>(
        module_base + rva::kCombatFactory);
    g_side_aggregate = reinterpret_cast<SideAggregateFn>(
        module_base + rva::kSideAggregate);
    g_neutral_side_detach = reinterpret_cast<NeutralSideDetachFn>(
        module_base + rva::kNeutralSideDetach);
    g_movement_cancellation = reinterpret_cast<MovementCancellationFn>(
        module_base + rva::kMovementCancellation);
    g_province_lookup = reinterpret_cast<ProvinceLookupFn>(
        module_base + rva::kProvinceLookup);
    g_movement_edge_cost = reinterpret_cast<MovementEdgeCostFn>(
        module_base + rva::kMovementEdgeCost);
    g_engine_string_init = reinterpret_cast<EngineStringInitFn>(
        module_base + rva::kEngineStringInit);
    g_engine_string_destroy = reinterpret_cast<EngineStringDestroyFn>(
        module_base + rva::kEngineStringDestroy);
    g_integer_to_ui_string = reinterpret_cast<IntegerToUiStringFn>(
        module_base + rva::kIntegerToUiString);
    g_set_ui_text = reinterpret_cast<SetUiTextFn>(
        module_base + rva::kSetUiText);

    MH_STATUS status = MH_Initialize();
    if (status != MH_OK && status != MH_ERROR_ALREADY_INITIALIZED) {
        error = MinHookError("MH_Initialize", status);
        return false;
    }

    const auto hooks = HookSpecs();
    std::size_t created = 0;
    for (const HookSpec& hook : hooks) {
        void* target = reinterpret_cast<void*>(module_base + hook.rva);
        status = MH_CreateHook(target, hook.detour, hook.original);
        if (status != MH_OK) {
            error = MinHookError("MH_CreateHook", status);
            for (std::size_t index = 0; index < created; ++index) {
                MH_RemoveHook(reinterpret_cast<void*>(module_base + hooks[index].rva));
            }
            MH_Uninitialize();
            return false;
        }
        ++created;
    }

    for (const HookSpec& hook : hooks) {
        status = MH_QueueEnableHook(reinterpret_cast<void*>(module_base + hook.rva));
        if (status != MH_OK) {
            error = MinHookError("MH_QueueEnableHook", status);
            MH_DisableHook(MH_ALL_HOOKS);
            for (const HookSpec& cleanup : hooks) {
                MH_RemoveHook(reinterpret_cast<void*>(module_base + cleanup.rva));
            }
            MH_Uninitialize();
            return false;
        }
    }

    status = MH_ApplyQueued();
    if (status != MH_OK) {
        error = MinHookError("MH_ApplyQueued", status);
        MH_DisableHook(MH_ALL_HOOKS);
        for (const HookSpec& hook : hooks) {
            MH_RemoveHook(reinterpret_cast<void*>(module_base + hook.rva));
        }
        MH_Uninitialize();
        return false;
    }

    log::Write("installed 9 guarded hooks; automatic prototype=%u",
               g_manual_prototype_enabled.load());
    return true;
}

bool RemoveObservationHooks(std::string& error) noexcept {
    error.clear();
    MH_STATUS status = MH_DisableHook(MH_ALL_HOOKS);
    if (status != MH_OK && status != MH_ERROR_NOT_INITIALIZED) {
        error = MinHookError("MH_DisableHook", status);
        return false;
    }
    status = MH_Uninitialize();
    if (status != MH_OK && status != MH_ERROR_NOT_INITIALIZED) {
        error = MinHookError("MH_Uninitialize", status);
        return false;
    }
    return true;
}

} // namespace ck2naval
