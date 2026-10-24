#pragma once

#include <array>
#include <cstddef>
#include <cstdint>

namespace ck2naval {

inline constexpr std::uintptr_t kPreferredImageBase = 0x140000000ULL;

namespace rva {
inline constexpr std::uintptr_t kExistingCombatArrival = 0x003BB1A0;
inline constexpr std::uintptr_t kNewEncounterAdmission = 0x003BB5D0;
inline constexpr std::uintptr_t kType1Reinforcement = 0x003A53C0;
inline constexpr std::uintptr_t kType1Update = 0x003A6300;
inline constexpr std::uintptr_t kSideAggregate = 0x003A3BF0;
inline constexpr std::uintptr_t kLoserHandling = 0x003A2150;
inline constexpr std::uintptr_t kNeutralSideDetach = 0x003A2F60;
inline constexpr std::uintptr_t kType1Completion = 0x003B7360;
inline constexpr std::uintptr_t kOpponentPredicate = 0x00B99D90;
inline constexpr std::uintptr_t kMovementRequest = 0x00B9CDC0;
inline constexpr std::uintptr_t kMovementCancellation = 0x00BA15E0;
inline constexpr std::uintptr_t kHalfwayMovementLock = 0x00BA1FF0;
inline constexpr std::uintptr_t kMovementEdgeCost = 0x00BA2760;
inline constexpr std::uintptr_t kProvinceLookup = 0x00822200;
inline constexpr std::uintptr_t kCombatFactory = 0x003BC270;
inline constexpr std::uintptr_t kCombatCountUpdate = 0x003C4470;
inline constexpr std::uintptr_t kEngineStringInit = 0x0000B0300;
inline constexpr std::uintptr_t kEngineStringDestroy = 0x0000AE4F0;
inline constexpr std::uintptr_t kIntegerToUiString = 0x00D5EBC0;
inline constexpr std::uintptr_t kSetUiText = 0x00C58B10;

inline constexpr std::uintptr_t kGameStateGlobal = 0x016E3260;
inline constexpr std::uintptr_t kProvinceManagerGlobal = 0x016E32D8;
inline constexpr std::uintptr_t kRngSuppressionByte = 0x017E3B32;

inline constexpr std::uintptr_t kFleetVtable = 0x011430F8;
inline constexpr std::uintptr_t kType1CombatVtable = 0x010902D8;
} // namespace rva

struct HookSignature final {
    const char* name;
    std::uintptr_t rva;
    std::array<std::uint8_t, 16> bytes;
};

inline constexpr std::array<HookSignature, 9> kObservationHookSignatures{{
    {
        "existing-combat-arrival",
        rva::kExistingCombatArrival,
        {0x48, 0x89, 0x4C, 0x24, 0x08, 0x56, 0x57, 0x41,
         0x56, 0x48, 0x83, 0xEC, 0x60, 0x48, 0xC7, 0x44},
    },
    {
        "new-encounter-admission",
        rva::kNewEncounterAdmission,
        {0x40, 0x55, 0x57, 0x41, 0x54, 0x48, 0x83, 0xEC,
         0x40, 0x49, 0x8B, 0x00, 0x4C, 0x8B, 0xE1, 0x49},
    },
    {
        "type1-reinforcement",
        rva::kType1Reinforcement,
        {0x48, 0x89, 0x5C, 0x24, 0x08, 0x48, 0x89, 0x74,
         0x24, 0x10, 0x57, 0x48, 0x83, 0xEC, 0x20, 0x48},
    },
    {
        "type1-update",
        rva::kType1Update,
        {0x40, 0x55, 0x56, 0x57, 0x41, 0x54, 0x41, 0x55,
         0x41, 0x56, 0x41, 0x57, 0x48, 0x8D, 0xAC, 0x24},
    },
    {
        "type1-completion",
        rva::kType1Completion,
        {0x48, 0x8B, 0xC4, 0x55, 0x48, 0x8D, 0x68, 0xA1,
         0x48, 0x81, 0xEC, 0xA0, 0x00, 0x00, 0x00, 0x48},
    },
    {
        "loser-handling",
        rva::kLoserHandling,
        {0x88, 0x54, 0x24, 0x10, 0x55, 0x53, 0x56, 0x57,
         0x41, 0x54, 0x41, 0x55, 0x41, 0x56, 0x41, 0x57},
    },
    {
        "halfway-movement-lock",
        rva::kHalfwayMovementLock,
        {0x40, 0x53, 0x48, 0x83, 0xEC, 0x20, 0x48, 0x8B,
         0x05, 0x63, 0x12, 0xB4, 0x00, 0x48, 0x8B, 0xD9},
    },
    {
        "movement-request",
        rva::kMovementRequest,
        {0x48, 0x8B, 0xC4, 0x56, 0x57, 0x41, 0x56, 0x48,
         0x83, 0xEC, 0x60, 0x48, 0xC7, 0x40, 0xB8, 0xFE},
    },
    {
        "combat-count-update",
        rva::kCombatCountUpdate,
        {0x48, 0x8B, 0xC4, 0x88, 0x50, 0x10, 0x48, 0x89,
         0x48, 0x08, 0x55, 0x53, 0x56, 0x57, 0x41, 0x54},
    },
}};

} // namespace ck2naval

