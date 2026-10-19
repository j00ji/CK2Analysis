# Split-command executor: fleets, assignments, and cargo

Date: 2026-10-18. Static continuation of [split-command identification](phase6-split-command.md). Target SHA-256: `cc2d65b51d9099b3d632fe3269fa647aaf7c00fcb00cc0240adbaa8e6bbbb75e`. Addresses are preferred virtual addresses; descriptive names are analyst interpretations.

## Result

**Fleet construction and component transfer are confirmed.** Executor `0x1403f7bc0` uses command byte `+0x98` to choose an army or navy, creates/registers the unit, and moves resolved components through the shared removal/insertion helpers. These maintain positional assignment storage but **recompute destination assignments rather than preserving the old flank bytes**.

**Cargo safety is partially resolved.** There is no explicit embarked-army transfer loop or remaining-capacity guard in the executor. Its new navy starts with an empty cargo list. No inspected direct step moves cargo with selected ship components. Callbacks and upstream eligibility remain incompletely traced, so this does not prove that the UI permits splitting a loaded fleet or that every indirect effect preserves cargo. Existing ordinary updates can delete whole carried army components if a fleet becomes over capacity.

## Evidence and query boundary

The existing `ghidra/CK2.gpr` project was reopened through `scripts/Query-Analysis.ps1` with `-process CK2game.exe -noanalysis -readOnly`. Exactly three new function queries were issued:

| Query | Purpose | Evidence |
| --- | --- | --- |
| `0x1403f7bc0` | Executor | [JSON](../artifacts/p6-split-executor.json), [export](../artifacts/phase6/functions/1403f7bc0.c) |
| `0x140b9b660` | Refresh called by removal/insertion | [JSON](../artifacts/p6-split-executor-refresh.json), [export](../artifacts/phase6/functions/140b9b660.c) |
| `0x140132b60` | Navy finalization call | [JSON](../artifacts/p6-split-executor-navy-finalize.json), [export](../artifacts/phase6/functions/140132b60.c) |

All three decompilations completed without reported errors or instruction truncation. These are workspace Ghidra exports, not REA Evidence IDs. JSON preserves instructions and reference limitations; inferred decompiler types are not source types. Request JSON and console/script logs use matching filename stems. No initialization, reanalysis, subagents, target execution, or executable modification occurred. Investigation stopped at the three-query limit.

## Fleet path

High-confidence observations from the executor:

1. It resolves the identity at command `+0x88` through `0x1400d3090` (`0x1403f7be9`), caches the result at `+0x80`, and tests an owner-associated object's virtual `+0x30` (`0x1403f7c22`). False returns before construction. The predicate's precise meaning remains unresolved; it is not an identified cargo-capacity check.
2. It obtains the province using command `+0x90`. Byte `+0x98` selects allocation/constructor: zero uses `0x240` bytes and `0x1401add10`; nonzero uses `0x250` bytes and navy constructor `0x140ba7310` (`0x1403f7c97`). It creates/registers a type-`0x3e` unit identity.
3. It relocates the new unit with `0x140b98e30` (`0x1403f7cf1`) and passes command byte `+0x99` to `0x140ba5840` (`0x1403f7d00`). This second argument is explicit in the instructions (`MOVZX EDX,[RSI+0x99]`) although omitted in the inferred pseudocode call.
4. It iterates 32-bit IDs at command `+0xa0..+0xa8`, resolving each as component type `0x3f`. Unresolved IDs are skipped. Each resolved component's source is its parent at `+0x28`; removal is followed by insertion into the new unit. The loop has no explicit source-navy test or requirement that all IDs have the same parent. This describes the executor, not permission to submit arbitrary payloads.
5. Creation precedes the ID loop. An empty selection, or one with no resolved IDs, does not itself prevent construction in this body. Upstream rejection and subsequent empty-unit cleanup are unresolved.

Before removal, source byte `+0x157 == 0` causes `0x140ba5840(new_unit,0)`. Otherwise, if new-unit byte `+0x158` is nonzero, the executor sets new-unit `+0x157 = 1` and calls `0x140b9b660`. Instructions `0x1403f7d82..0x1403f7dae` distinguish the adjacent bytes. Their complete gameplay meanings and the semantics of `0x140ba5840` remain untraced; neither is labeled a cargo guard here.

After transfer it calls owner-associated `0x1404942d0` with the new unit and conditionally invokes arrival processing `0x1403bc0c0`. Temporary RNG suppression (`0x1417e3b32 = 1`) surrounds later conditional UI/owner-associated processing, **not the component transfer loop**. The previous value is restored before the final army/navy branch.

## Component assignments

The decisive instruction sequence is:

```text
0x1403f7db6: RCX = component.parent
0x1403f7dba: call 0x140b987f0(source, component)
0x1403f7dbf: R8D = -1
0x1403f7dc9: call 0x140b97bb0(new_unit, component, -1)
```

Existing [removal evidence](../artifacts/phase5/functions/140b987f0.c) finds the source list index, shifts later assignment bytes left, decrements vector end at unit `+0x120`, unlinks the component, and clears its parent. It also updates existing live combat associations where applicable.

Existing [insertion evidence](../artifacts/phase2/functions/140b97bb0.c) appends the component and a newly chosen byte to destination vector `+0x118/+0x120/+0x128`, updating parent/owner associations. Assignment scoring uses destination flank totals, including ships; an empty center total selects assignment 1. See [prior assignment analysis](phase4-assignment-notes.md) and [Phase 5 mutation analysis](phase5-compatibility-followup.md#f-03-removal-and-observed-transfer-paths-maintain-positional-assignments).

**Conclusion:** for valid input structures, this path maintains component-list/assignment-vector correspondence through the ordinary helpers. It does not copy old flank bytes. Destination assignments may differ; no final global rebalance is established. No executor guard was identified that repairs malformed vector lengths or invalid parent pointers.

The second query clarifies `0x140b9b660`: it rebuilds unit naming state. Its fleet branch obtains localized `FLEET`, formats `UNIT_ARMY_NAME`, writes the name, and returns after temporary cleanup. That branch is not fleet capacity enforcement. This narrows the earlier generic description of this call as a state refresh.

## Embarked cargo

### Observations

- Existing [navy constructor](../artifacts/phase2/functions/140ba7310.c) zeros cargo head/tail/count at `+0x230/+0x238/+0x240`. The executor constructs the navy before inserting ship components.
- The executor transfers component objects, not embarked armies. It does not directly traverse source cargo, rewrite army carrier pointers, call known embark/disembark helpers, compare cargo against remaining source capacity, or call enforcement `0x140ba7fc0`.
- The previously inspected consolidation path `0x140bb2050` explicitly transfers fleet cargo lists and rewrites carrier pointers. That pattern is absent here; see [Phase 5 transfer findings](phase5-compatibility-followup.md#f-03-removal-and-observed-transfer-paths-maintain-positional-assignments).
- The final navy branch converts through virtual `+0x60`, calls `0x140132b60` at `0x1403f7fc0`, then calls `0x140132db0(1,0x140132e8c,navy)`. The third query shows `0x140132b60` dispatching callbacks through the unit's `+0xd8` object and global listeners, including virtual `+0x230` and helper `0x140132e94`. The virtual slot offset is not a cargo-list access. Callback implementations were not followed within the budget.

### Inference and remaining uncertainty

Absent additional indirect effects, cargo remains attached to the source while the new fleet receives selected ship components and starts without cargo. **This is a bounded inference**, not runtime evidence or a proof across every callback. Owner-associated calls, `0x140ba5840`, listeners, and upstream eligibility may impose behavior not established here.

Existing [capacity enforcement](../artifacts/phase5/functions/140ba7fc0.c) compares embarked troop aggregate against capacity and removes/destroys whole carried army components while over capacity. The [ordinary update wrapper](../artifacts/phase2/functions/140b96b20.c) invokes this for navies; [Phase 5](phase5-compatibility-followup.md#f-04-capacity-loss-can-delete-cargo-during-ordinary-fleet-updates) records the chain. Thus **if a loaded source is allowed to split and retains cargo exceeding its reduced capacity**, later ordinary enforcement can delete cargo components. This investigation does not establish that the UI permits that state, when enforcement next runs, or that deletion necessarily follows a valid player split.

## Status at stop

| Objective | Status |
| --- | --- |
| Fleet handling | Answered: explicit navy creation, shared component transfer, and navy finalization. |
| Component assignments | Answered for this path: remove source byte by position; recompute destination byte on append. |
| Cargo handling/protection | Partial: no direct redistribution/capacity guard; new cargo list starts empty; callback and upstream protections unresolved. |

No further queries were issued. These findings do not establish working naval combat or complete split safety.
