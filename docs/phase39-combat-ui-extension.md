# Phase 39: extending the battle category UI

**Question:** Can an interface override add the galley row, or is native code needed for the value/label?

## Finding

The generic UI factory `FUN_140a9d8d0` dispatches a `CombatView` node to `FUN_1403c2200` (see [Phase 38](phase38-combat-ui-row-source.md)). That callback maps authored keys to built-in categories but has no `galleys` case.

The related flank-summary helper `FUN_14039e690` aggregates across eight category slots (`uVar13 < 8`, accumulating into `local_358[8]`), but its emitted category labels are the seven standard land categories (`LIGHT_INFANTRY` through `KNIGHTS`); it has no `GALLEYS` label. Evidence: [saved decompilation](../artifacts/phase39-combat-category-summary.json).

## Assessment and limits

A `.gui`/interface override could plausibly add a visual row, but the inspected stock presenter paths do not provide a galley-specific value/label mapping. A functional separate ship count therefore needs either a native hook/custom data provider or a complete replacement UI path that can independently read category 7. The report does **not** prove whether CK2's interface language can bind category 7 through some other exposed variable. The workspace contains no interface assets to test that possibility. No runtime or game binary changes were made.

**New Ghidra queries this turn:** 1 function decompilation (`FUN_14039e690`).

**Next question:** What is the safest UI hook point for mapping the existing eighth result category to a ship row?
