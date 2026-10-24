# Phase 45: CombatView category-count formatting

## Finding

The flank-summary presenter `FUN_14039e690` (called by `FUN_1403c2200` at `0x1403c36c3`) obtains the eight category totals with `FUN_14039cbf0(param_1,&local_188)`. For each standard troop row it converts the corresponding fixed-point amount to a whole count by dividing by 1000 and rounding upward when there is a nonzero remainder and the value is positive, then passes the integer through `FUN_140c668e0` for display formatting. Examples: `local_178[0]` at `0x14039e690` lines around 211–215; analogous entries are used for later categories. The presenter has no GALLEYS label/row despite aggregating eight categories.

For a custom GALLEYS row, match the count convention: `q = raw / 1000; if (raw % 1000 != 0) q += raw > 0;` then use the same integer formatter (`FUN_140c668e0`) or the equivalent UI formatting path. The ship panel independently uses the same upward rounding at `FUN_140bc0530` (`0x140bc07eb` onward). Do not feed a raw fixed-point value directly to the label.

Evidence: `artifacts/phase2/functions/14039e690.c`, `artifacts/phase2/functions/1403c2200.c`, `artifacts/phase2/functions/140bc0530.c`, and `docs/phase39-combat-ui-extension.md`.

Confidence: high for the integer rounding convention; medium for reusing the exact `FUN_140c668e0` call in a custom row (formatting context/ownership not tested). Static only. New Ghidra queries this turn: 0.
