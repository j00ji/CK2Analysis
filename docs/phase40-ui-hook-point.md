# Phase 40: candidate hook for a galley battle row

**Question:** Where is the narrowest hook point to map category 7 to a ship row?

## Finding

The best candidate is the specialized `CombatView` callback `FUN_1403c2200` at RVA `0x3c2200`, not the generic UI factory `FUN_140a9d8d0` or the combat-result finalizer. The generic factory dispatches `CombatView` nodes to this callback at `0x140a9ecde` and `0x140aa19db` ([Phase 38 caller evidence](../artifacts/phase38-combat-ui-caller.json)). The callback receives the view context, caller-owned output buffer, and authored UI node; it reads the node key and writes the returned presentation data into that output ([Phase 37 function evidence](../artifacts/phase37-combat-ui-total.json)).

## Safety boundary and limits

A detour here can preserve stock behavior for every other UI node and only handle a `galleys` row, keeping the change out of combat simulation and global localization. It must also be gated to the naval combat view. This is only a **candidate**: the exact output-buffer ownership/layout and the correct category-7 result source must be verified before implementing a detour. `FUN_14039e690` aggregates eight categories, but its presentation shape and safe way to expose category 7 are not proven ([Phase 39 evidence](../artifacts/phase39-combat-category-summary.json)). A layout-only row or label-only substitution would not guarantee correct ship counts.

Confidence: medium for hook-point selection; low for implementation safety until ABI and data flow are validated. No new Ghidra queries this turn; this answer reuses existing artifacts. No binary or runtime changes were made.

**Next question:** What exact output-buffer fields and category-7 values does `FUN_1403c2200` expect for a row?
