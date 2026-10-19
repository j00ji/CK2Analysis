# Can type-1 battle updates process fleets after admission is bypassed?

**Status:** resolved for steady-state update; aftermath remains separate  
**Static confidence:** medium-high  
**New Ghidra queries:** 3

## Evidence
| Address / ID | Saved artifact path | Direct observation | Confidence |
|---|---|---|---|
| `0x1403a6300` | `artifacts/phase3/functions/1403a6300.c` | Type-1 update uses sides, flanks, shared unit ownership/control fields, component lists, and combat-type switches. The large participant-specific branch guarded by type 3 is skipped by type 1; no direct army accessor or army `+0x230` dereference appears. | High for inspected body |
| `0x140b9aa40` | `artifacts/p12-type1-unit-contribution.json` | Per-unit contribution walks shared component list `unit+0x38` and sums all eight amounts through component `+0xc4`; optional recursion uses common unit fields. | High |
| `0x140bba2a0` | `artifacts/p12-type1-side-aggregate.json` | Side aggregation walks participant units and components, summing all eight categories without an army/navy test. | High |
| `0x1403a8de0` | `artifacts/p12-type1-preupdate-maintenance.json` | Pre-update maintenance iterates flank component vectors, resolves shared component/owner relations, and removes invalid components from both sides through `0x1403a1900`. No unit army accessor or navy-invalid cast is present. | Medium-high; every owner/config virtual was not classified |
| damage pipeline | `artifacts/p3-damage-registry.json`, `artifacts/p3-scheduler-category-math.json` | Tactic, attack, defense, morale, casualty, retargeting, and exhausted-unit cleanup structurally include category 7/GALLEYS. | High |

## Interpretation

After custom admission and valid side/flank attachment, the existing type-1 steady-state update is structurally capable of processing fleets. No inspected path dereferences a navy as an army. Ship quantity and morale receive ordinary combat mutations, and zero-strength cleanup reaches the shared unit-removal machinery.

This supports a hybrid naval encounter that reuses type-1 side/update arithmetic. It does not make the entire type-1 lifecycle fleet-safe: `0x1403a8de0` may remove components when owner/political relations cease to qualify, and its component/configuration virtual predicates were not fully classified. More importantly, completion, retreat, events, results, and cargo consequences remain separate contracts.

## Limitations and integrity

Static analysis only; no fleet was injected or battle executed. All three new functions decompiled with complete instruction exports. Absence of an army cast in these bounded functions is not whole-program proof, and actual GALLEYS coefficients remain unavailable.

## Next question

Can the type-1 completion and losing-side disposition path detach or retreat a navy safely, or must naval aftermath be replaced?
