# Cargo movement guard and intermittent fleet admission

**Status:** movement-request guard built; runtime test pending  
**New Ghidra queries:** 0

## Cargo orders

The user's reproduction is an army move order while that army remains embarked.
The hook now guards `0x140b9cdc0`, the saved movement-request entry, and suppresses
the order only when the prototype is enabled, the unit is carried by an exact
fleet vtable, and that fleet has a live combat association at `+0x68`. Unreadable
or non-matching state passes through to CK2. The shared detach helper is not
changed, preserving normal port arrival and stock fleet-destruction cleanup.

At combat creation, the same cargo lists are scanned for carried armies with
nonempty routes. Their route is interrupted through stock force-cancel
`0x140ba15e0(army, 1)`, the engine's unconditional route-clearing path. This
covers orders already underway, including a route beyond the normal halfway
lock, without clearing route memory directly or detaching the army. Runtime
confirmation is still needed.

## Intermittent battle admission

The existing `logs/ck2_naval.log` records repeated naval admission attempts that
skip for two distinct reasons: some scans contain no exact navy in the province
list (`exact_navies=0`), and others find a free exact navy but CK2's opponent
predicate `0x140b99d90` rejects it (`eligible=0`). Other attempts pass that same
predicate and create combat successfully. The scan correctly avoids forcing a
battle merely because a fleet-shaped object is nearby; CK2's predicate also
checks combat/movement/carriage state and political hostility. The current log
does not say which internal predicate condition rejected a particular fleet.

Therefore intermittent no-battle reports are consistent with the candidate not
yet being in the province occupancy list or the stock eligibility predicate
rejecting that pair; current evidence cannot distinguish a real false negative
from an encounter that CK2 itself considers ineligible. Do not bypass this
predicate until a controlled failed encounter identifies which gate is wrong.

## Verification

MSBuild RelWithDebInfo succeeded. `ck2_naval_verify.exe CK2game.exe` passed the
supported executable hash and all eight hook-signature checks. DLL SHA-256:
`AB87BB20F3EFBD65116CDB9047F0F02E419FD17114B8543853BD8CBC225F7504`.

**Confidence:** high for the observed saved movement-request path and logged
candidate/predicate outcomes; medium for interpreting live association `+0x68`
as current fleet combat state; runtime cargo behavior unverified.

## Next question

Can you test this build by ordering embarked troops to move during a fleet battle,
then retrying the order after the battle ends?
