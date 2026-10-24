# Phase 49: GALLEYS count-widget hook implementation

Implemented a presentation-only post-hook on `FUN_1403c4470` (`RVA 0x3c4470`). It calls the original updater unchanged, resolves the matching attacker/defender GUI branch, and looks for a child named `galleys_total`. If present, it calls the existing side aggregate and reads current category 7 at summary `+0x2c`, applies the stock positive-ceiling `/1000` rule, formats via `FUN_140d5ebc0`, and assigns through `FUN_140c58b10`. If the named widget is absent, it safely skips and logs that an interface control is required.

The new hook has a 16-byte entry signature guard, and the executable-wide hash guard remains unchanged. Changes are in `native/include/ck2naval/addresses.hpp` and `native/src/hooks.cpp`.

Verification: MSBuild succeeded for `ck2_naval` and `ck2_naval_verify`; the verifier accepted the installed `CK2game.exe` hash and all nine signatures. `git diff --check` passed. No game executable or Steam interface file was modified. Runtime rendering is not yet validated, and the workspace does not include a `combat.gui` override adding `galleys_total`; until that control is supplied, this hook intentionally has no visible effect.

Confidence: high for static wiring/build/version-signature validation; unverified in-game. New Ghidra queries this turn: 0 (reused Phase 48 artifacts; 2 new queries were made in the prior turn).
