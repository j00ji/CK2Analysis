# Phase 38: source of battle UI category rows

**Question:** Does the result UI generate a galley row from combat data, or must its UI model be extended?

## Finding

`FUN_140a9d8d0` is a generic UI-element dispatch path. When the incoming node's type is `CombatView`, it calls `FUN_1403c2200` with that node (`0x140a9ecde`; another `combat_view` path calls it at `0x140aa19db`). Evidence: [saved caller decompilation](../artifacts/phase38-combat-ui-caller.json).

`FUN_1403c2200` reads the node's key via virtual slot `+0x90` and has a fixed mapping for the known troop keys, but not `galleys` (see [Phase 37 UI evidence](phase37-combat-unit-ui.md) and [saved function export](../artifacts/phase37-combat-ui-total.json)). This path consumes an authored UI node; it does not visibly enumerate combat categories to create rows dynamically.

## Assessment and limits

Best-supported answer: a distinct ship row needs both (1) a `galleys` row in the `CombatView` UI model and (2) a matching label/category mapping in the compiled UI handler. Combat data already aggregates category 7, but that alone cannot create a row. Confidence: medium-high for the handler consuming an authored node and omitting `galleys`; medium for the two-part implementation requirement. The workspace contains no `.gui`/interface source to verify the precise layout file or test a UI-only extension. No runtime or game binary changes were made.

**New Ghidra queries this turn:** 1 function decompilation (`FUN_140a9d8d0`).

**Next question:** Can the missing UI row be supplied by a CK2 interface override, or is a native hook required to extend the compiled handler?
