# Phase 46: adding a GALLEYS CombatView row

## Finding

The row contract is a `CombatView` node whose key is read through virtual `+0x90`; `FUN_140a9d8d0` dispatches it to `FUN_1403c2200`. The callback has a fixed key-to-label switch and no `galleys` case (`0x1403c33a6..0x1403c353f`). Therefore adding only an authored `galleys` node is insufficient: compiled code must recognize it and populate the existing output object while preserving its string/state ownership.

For a custom branch, read category 7 from the current vector returned by `FUN_14039cbf0(flank, summary)`: summary offset `+0x2c` (eighth dword of vector A). Convert fixed-point quantity using positive ceiling `/1000`, then format through the same integer presentation helper `FUN_140c668e0` used by `FUN_14039e690`; supply a localized GALLEYS label. The live flank pointer is selected by `FUN_1403c2200` as `side+0x48+flankIndex*0xc8`.

The workspace contains no `.gui`/`.gfx` interface source, so the exact authored row layout/key syntax and whether an override can add it remain unverified. The stock helper's category summary has no GALLEYS label; adding a line to its `COMBATVIEW_TOTALTROOPS_FLANK` summary is an alternative if a separate row cannot be authored, but that would require preserving the helper's string-composition contract.

Evidence: `artifacts/phase2/functions/1403c2200.c`, `artifacts/phase2/functions/14039e690.c`, `artifacts/phase39-combat-category-summary.json`, `docs/phase38-combat-ui-row-source.md`, and `docs/phase45-combat-count-format.md`.

Confidence: high that compiled handler support is required for a distinct key; medium for the proposed summary offset-to-formatter connection; no interface override tested. Static only. New Ghidra queries this turn: 0.
