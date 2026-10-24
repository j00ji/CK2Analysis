# Phase 48: safest GALLEYS count-widget hook

## Finding

The direct count-widget updater is `FUN_1403c4470` at `0x1403c4470`, not the tooltip/category callback `FUN_1403c2200`. Ghidra string xrefs show `FUN_1403c4470` explicitly looks up `light_infantry_total`, other `*_total` controls, and `units_total`; for each it formats fixed-point values with `/1000` and positive-ceiling rounding, then assigns the resulting string through `FUN_140c58b10`. It selects attacker/defender from `param_2`, and obtains the side's category aggregate with `FUN_1403a3bf0` at call site `0x1403c47d2`. The aggregate's first vector has eight entries; entry 7 (GALLEYS) is the last entry (`summary+0x2c`, represented by `local_11c` in this updater and included in the `units_total` sum).

Recommended narrow extension: add a `galleys_total` text box to both side blocks in `combat.gui`, then post-hook `FUN_1403c4470` while preserving its original call. Use its side selector to identify the same attacker/defender side, aggregate via `FUN_1403a3bf0`, read current vector category 7, apply the same positive-ceiling `/1000`, convert through `FUN_140d5ebc0`, look up the new child by name, and set it with `FUN_140c58b10`. This keeps the addition in presentation code and avoids changing simulation or the fragile opaque output object of `FUN_1403c2200`. A separate `galleys` case in `FUN_1403c2200` is only needed if the icon/tooltip itself should have a ship-specific label.

Evidence: `artifacts/phase48-combat-count-widget-refs.json` (one Ghidra string-search query) and `artifacts/phase48-combat-count-widget-updater.json` (one function query), plus `docs/phase42-result-galleys-offsets.md` and `docs/phase45-combat-count-format.md`.

Confidence: high for updater/field/rounding mapping; medium for hook safety until ABI, callback order, and runtime widget lookup are validated. Static only. New Ghidra queries this turn: 2.
