# CK2 Naval native scaffold

This directory contains the first implementation layer for the naval-combat
extension. Observation is the default. An explicitly enabled prototype can
automatically construct fleet combats, run their stock updates, and replace
land aftermath with a guarded fleet retreat.

Current outputs:

- `d3d9.dll`: target-specific proxy that forwards CK2's sole imported D3D9
  entry point and loads `ck2_naval.dll` from the same directory.
- `ck2_naval.dll`: verifies the exact supported executable and installs eight
  guarded hooks. With the prototype disabled, every gameplay path calls the
  original function and returns its original result.
- `ck2_naval_verify.exe`: validates the copied executable's SHA-256 and hook
  prologue bytes without executing CK2.
- `ck2_naval.ini`: defaults the mutating prototype to disabled.

## Build

From an x64 Visual Studio 2022 developer shell:

```powershell
cmake -S native -B native/build -G Ninja -DCMAKE_BUILD_TYPE=RelWithDebInfo
cmake --build native/build
native/build/bin/ck2_naval_verify.exe CK2game.exe
```

MinHook is pinned under `third_party/minhook` at release `v1.3.4`, commit
`c3fcafdc10146beb5919319d0683e44e3c30d537`.

## Safety boundary

- The DLL refuses any executable whose SHA-256 differs from the analyzed copy.
- It separately checks 16 bytes at each guarded hook before patching memory.
- Hook installation is all-or-nothing.
- No executable file is modified.
- Do not copy these binaries into the game directory until the static verifier
  passes and the observation test is deliberately scheduled.

## Guarded automatic-creation test

Use only a disposable, non-Ironman single-player save. Do not save after
creating the prototype battle.

1. Exit CK2. Copy the newly built `ck2_naval.dll` and `ck2_naval.ini` beside
   the already tested proxy. Do not overwrite an unrelated `d3d9.dll`.
2. Change `manual_creation=0` to `manual_creation=1` in the copied INI.
3. Remove or archive the old `ck2_naval.log` so this run is unambiguous.
4. Launch CK2. Park one fleet at sea, then order a fleet belonging to a realm
   currently at war with it to enter that occupied sea province. Both fleets
   must be out of port and not already in combat.
5. Let the moving fleet enter the occupied province and allow the battle to
   finish. Confirm that the loser receives a route toward its previous province,
   that the route cannot be cancelled, and that control returns on arrival. Do
   not split, merge, embark, disembark, or save during this test.
6. During a separate battle, select an embarked army and try issuing a move
   order. It should remain aboard until the naval combat ends; after combat,
   army movement should work normally again.
7. Exit to desktop without saving and return the new log for inspection.

The update hook at `0x1403a6300` now observes and runs naval type-1 updates.
The fifth hook replaces completion `0x1403b7360` only for `type 1 + sea`
combats while the prototype is enabled. It mirrors the stock side-exhaustion
test, then invokes the stock result finalizer so the existing battle-result UI
receives winner/loser data. A sixth hook replaces `0x1403a2150` only during
that synchronous naval completion. It snapshots the losing fleets, performs
the engine's neutral side detach, and orders each fleet back toward its recorded
previous province using the existing navy-aware movement layer. The retreat
uses the engine state that locks cancellation and clears on arrival. It still
avoids the land-only destination selector and fleet/cargo destruction branch.
The same fleet pair is suppressed from re-engaging until it separates. Land
battles and sieges continue through their original functions.

The seventh hook extends the existing halfway movement-lock predicate to
fleets. It uses the same movement progress, edge cost, and 50% threshold as
armies. This supplies the same result to CK2's cancellation/UI callers; the
fleet lock-in is confirmed in-game. The eighth hook blocks movement requests
from an embarked army while its carrier has active combat state; it does not
touch the shared detach helper, so normal port arrival and fleet-destruction
cleanup remain in CK2's original code paths. When combat is created, the DLL
also uses CK2's force-cancel movement routine on carried armies that already
have a route, so an ongoing disembark order is interrupted at battle start.

If the game crashes, remove `d3d9.dll`, `ck2_naval.dll`, and `ck2_naval.ini`,
then preserve any generated log. The executable itself is never patched.

