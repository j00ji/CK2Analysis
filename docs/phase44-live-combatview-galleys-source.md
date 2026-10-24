# Phase 44: live CombatView GALLEYS source

## Finding

The live `CombatView` callback is `FUN_1403c2200` (`0x1403c2200`). Its battle context reaches the side object at `*(param_1+0x40)`, then each flank at `side+0x48 + flankIndex*0xc8` (observed around `0x1403c3c90`). The terminal-result builder `FUN_1403ad020` sums each flank's two category vectors. The current-count vector is A; its category-7/GALLEYS slot is **flank+0x4c** (equivalently side-relative `+0x94 + flankIndex*0xc8`). Thus a custom per-flank row should source that fixed-point value and format it consistently with the game count convention.

Important limitation: stock `FUN_1403c2200` has no `galleys` key/case and does not directly bind a category count into its output buffer. Its UI path consumes authored flank nodes and presenter helpers. Therefore `flank+0x4c` is the live data source identified by the aggregation layout, not proof of a stock CombatView count read at that instruction. The separate ship panel reads subunit `+0xc4` and rounds positive fractional units upward; do not assume the CombatView uses that same formatter without verification.

Evidence: `artifacts/phase2/functions/1403c2200.c` around `0x1403c3c90`; `artifacts/phase3/functions/1403ad020.c`; `docs/phase42-result-galleys-offsets.md`; `docs/phase43-galleys-display-array.md`.

Confidence: high for live side/flank traversal and category-7 slot mapping; medium for custom-row integration/formatting. Static only. New Ghidra queries this turn: 0.
