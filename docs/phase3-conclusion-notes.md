# Phase 3 bounded conclusion and retreat evidence

Later follow-up sections supersede earlier open questions, including the successful extended decompilation and manager driver below.

Offline review of [p3-battle-lifecycle.json](../artifacts/p3-battle-lifecycle.json) and [p3-side-conclusion.json](../artifacts/p3-side-conclusion.json), 2026-10-18 UTC. Target SHA-256 `cc2d65b51d9099b3d632fe3269fa647aaf7c00fcb00cc0240adbaa8e6bbbb75e`. No execution or patching. These notes cover small conclusion gates and unit cleanup; they do not claim complete battle rewards, warscore, casualties, or event behavior.

## The type-1 terminal test

Function `0x1403b7360` is reached through type-1 combat virtual `+0x88` (raw pointer at `0x141090360`). It tests the first side, then the second side. Each side check looks across three vector-like pointer pairs at side `+0xc8/+0xd0`, repeated with stride `0xc8`. If a pair is nonempty, it calls `0x1403a3bf0(side,out)` and sums the eight 32-bit category values at output `+0x10..+0x2c`. A side has continuing content only if a vector pair is nonempty and that category sum is nonzero. If the first side is exhausted, it takes the first conclusion branch immediately; otherwise it checks the second. It returns zero when both sides still satisfy the continuation test.

When a side is exhausted, the function:

1. Initializes an empty category-summary object.
2. Calls `0x1403a2a80(losing_side, summary)` to choose an additional terminal disposition.
3. Calls large finalizer `0x1403ad020` with numeric outcome 0 when the first side ends, or 1 when the second ends. It passes the summary pointer only if the disposition is true.
4. Calls `0x1403a2150(losing_side, disposition)` to detach/retreat or remove units.
5. Returns 1.

Assembly anchors: first finalizer call `0x1403b746b`, first side cleanup `0x1403b7477`; second finalizer call `0x1403b756e`, second cleanup `0x1403b757a`.

Confidence: **high** for tests and call order. The eight-category sum is directly observed. It is not a direct morale-zero test, and the semantics of individual vector elements and aggregation helper are supplied by the separate side/morale analysis. Do not equate an empty active vector with destruction of every soldier.

## Additional terminal disposition

`0x1403a2a80(side,out_summary)` resolves its combat via `0x1403a1430`. It returns false for a missing combat and for a side that is the second side of type-3 combat. Otherwise:

- If combat 32-bit `+0x38` is below global `0x1416e2644`, it returns true immediately (`CMP` at `0x1403a2bf0`). The counter and configuration variable names are not established by this function alone.
- It aggregates the side's units with `0x140bbb130(side+0x30,out,1)` and sums the eight category values.
- It identifies the opposing side. For a type-3 second-side opponent, it uses `0x1403a3bf0` and a factor of 500; otherwise it uses `0x140bbb130(opponent+0x30,out,1)` and a factor of 1000.
- It compares the opponent total with a fixed-point threshold computed from the own total and global `0x1416e261c` (global read `0x1403a2e46`). If the opponent total is at or below that threshold, it returns false. If above, it accumulates each unit component's eight category fields `+0xa8..+0xc4` into the output summary and returns true.

Faithful simplified threshold expression, retaining integer truncations:

```c
factor = opponent_is_type3_second_side ? 500 : 1000;
scaled = (factor * (int64_t)global_1416e261c) / 1000;
threshold = ((int32_t)scaled * (int64_t)own_total) / 1000;
if (opponent_total <= (int32_t)threshold) return false;
// Accumulate own remaining component categories into output; then true.
```

The resulting true flag causes the cleanup routine below to select its removal path, suggesting a stack-destruction/wipe condition. That interpretation is **medium confidence** until the game-state removal callee and configuration binding names are checked. The early true return does not populate category totals, unlike the ratio-driven true branch. No numeric threshold values have been assigned from game knowledge.

## Unit detachment and retreat/removal

`0x1403a2150(side, disposition)` iterates the side's unit list at `+0x30`, advancing node `+0x10` before processing the current unit. It chooses a candidate destination using queued movement and `0x140b9e9b0`, or helper `0x140b9d9d0` / `0x140b9d430` based on **combat** virtual `+0x68/+0x70`. Those virtual slots belong to the combat returned by `0x1403a1430`, not to the unit. They must not be interpreted as the army/navy type-test slots that happen to share those offsets.

For a unit whose ordinary combat handle matches this combat, it releases and clears unit `+0x60/+0x68`; for a matching separate type-3-associated handle, it releases and clears unit `+0x70/+0x78`. It also handles a possible other siege-associated relationship, unit UI/animation state, and removes the unit from the side list. The inlined ordinary removal branch updates list head/tail/links and decrements side count `+0x40`, or marks a node for deferred removal if side byte `+0x44` is set; it also calls `0x1403a1cc0`.

The post-detachment branches include:

- When the passed disposition is true, call `0x140786dc0(game_state,unit)` at `0x1403a2a5c`.
- A missing/same destination or certain owner/government flags can reach the same callee for type 1; the exact additional predicates remain unnamed.
- Otherwise set unit 32-bit `+0xb4` to 1 at `0x1403a290b`. In the enabled command-processing branch, invoke `0x140b9cdc0(unit,destination)` at `0x1403a2950`, allocate a `0x98`-byte command object with table `0x1411443e0` and ID `0x32d3`, populate the unit pointer/IDs plus a mode value 2 or 3, and enqueue it via `0x140c3d960`.

`+0xb4` is therefore strong retreat-state evidence in this context, but the complete enum is not recovered. Destination construction, routing rules, and `0x140786dc0`'s exact removal semantics need separate inspection. The currently observed code establishes detachment and command/state changes, not runtime completion of a retreat.

## Reuse implications and next bounded targets

The conclusion path must maintain unit handles, side collections, possible concurrent siege relationships, command state, and ownership references. A naval extension would need consistent behavior for each of these. Existing fleet movement and collection storage do not demonstrate compatibility with army conclusion behavior.

Concrete next targets if needed: `0x140786dc0` to verify unit destruction/removal, `0x140b9d9d0` / `0x140b9d430` for retreat destinations, and the parent-selected manager cleanup functions `0x1403bd500`, `0x1403bd7d0`, `0x1403bd8e0` for registry removal and lifecycle scheduling. The full `0x1403ad020` finalizer is handled separately; no exact warscore, prisoner, loot, or notification conclusions are inferred from this bounded pass.

## Follow-up: large finalizer recovered

The extended-timeout retry [p3-conclusion-extended.json](../artifacts/p3-conclusion-extended.json) successfully decompiled `0x1403ad020`; [readable pseudocode](../artifacts/phase3/functions/1403ad020.c) is retained. Ghidra warns that its type-propagation algorithm did not settle and replaced `_alloca_probe` with an injection. The output is complete, but its large stack-frame reconstruction and inferred argument types merit caution. The following observations are bounded to clear branches, calls, and storage, corroborated by the retained instructions.

The finalizer returns immediately if game-state byte `+0x62a` is zero or combat byte `+0x50` is already nonzero. Otherwise it sets combat `+0x50` to 1. This makes `+0x50` a **finalization/already-handled flag** in this path. Type 3 is routed to `0x1403b2100` at call `0x1403b20c7`; the ordinary result-processing branch requires both side unit counts at `+0x40` to be nonzero. Empty-side cases do not run that full branch even though the finalization flag is set.

### Outcome flag now resolved

For the type-1 result branch:

| Input flag | Winning side | Losing side | Winning/losing actor vectors |
|---|---|---|---|
| `param_2 == 0` | Combat `+0x18` | Combat `+0x10` | Combat `+0x70` / `+0x58` |
| `param_2 != 0` | Combat `+0x10` | Combat `+0x18` | Combat `+0x58` / `+0x70` |

This is directly corroborated by calls to `0x1403ac770` with `battle_won` (`0x1403adf36`) and `battle_lost` (`0x1403adf61`) after the pointer selection. It agrees with the terminal test's outcome 0 for the first side ending and outcome 1 for the second side ending. Original attacker/defender field names are not required for this mapping.

### Result object and aftermath dependencies

The ordinary branch allocates **`0x148` bytes** and invokes constructor `0x14017fd50` at `0x1403ad1ef`. It stores outcome flag at result `+0x130`, a relationship/orientation boolean at `+0x131`, combat's 32-bit handle at result `+0x134`, and province at result `+0x138`. It aggregates category summaries from all three side records into per-side result blocks, and incorporates the optional extra summary into the losing side's block. The exact historical-versus-current meanings of every category block are not assigned here.

The finalizer resolves an inter-owner relationship through `0x140251570`. When present, it passes the result to `0x140bdf680` at `0x1403ad94d`. Before cleanup it checks whether the result pointer exists in that relationship's pointer vector at `+0xf0/+0xf8`; if retained there, it leaves the object alive, otherwise it invokes its virtual destructor with deletion flag 1. This is strong result-history ownership evidence, while precise war-class and result-class names remain analyst interpretations until those callees are inspected.

Clear gameplay integrations include:

- Calls using `battle_won` and `battle_lost`, with the selected side actor vectors and eligible commander-like characters.
- Conditional lookups of `on_battle_lost_owner` and `on_battle_won_owner`; nonnull lookups are dispatched through `0x1408b3220` at `0x1403ae3f0` and `0x1403ae51c` with script context objects. The contents and effects of external scripts are unavailable in this copied executable.
- Conditional resolution/application paths involving `opinion_defeated_rebels` and owner/character relations.
- Creation of `BATTLE`, `WINNER`, and `LOOSER` (literal spelling) notification replacements; notification keys include `LANDBATTLEOVER_OTHER`, `LANDBATTLEOVER_LOSS`, and `LANDBATTLEOVER_WIN`.
- End-of-combat UI fields named `warscore`, `prestige`, `miltech`, and `piety`, plus victory/defeat presentation. These names establish integration points; they are not sufficient to establish complete reward formulas or all conditions for awarding those values.

The ordinary finalizer therefore depends on owners, characters, commander/side history, category totals, relationship/history state, scripts, and presentation. Reusing a battle container for fleets would still require coherent outcomes across those dependencies. Exact warscore and reward calculations remain outside this bounded pass, and no naval feasibility conclusion follows merely from finding this shared aftermath infrastructure.

## Follow-up: removal and fleet cargo behavior

Evidence: [p3-damage-writers-manager.json](../artifacts/p3-damage-writers-manager.json).

`0x140786dc0` is now **high-confidence unit removal/destruction**. Its diagnostics refer explicitly to `pUnit`, owner demesne unit membership, `pUnit->IsArmy()`, location, and subunit count in `gamestate.cpp`. The examined code unlinks unit references from owner-related collections, combat-side membership, and province-side combat associations, calls separate army/navy cleanup helpers `0x140132d10` / `0x140132d60`, and ends with a virtual destructor-style call using the unit's secondary interface and deletion flag 1:

```text
140788075 MOV byte ptr [RBX+0x400],1
14078807c LEA RCX,[RSI+0x10]
140788080 MOV RAX,[RCX]
140788083 MOV EDX,1
140788088 CALL qword ptr [RAX]
14078808a MOV byte ptr [RBX+0x400],0
```

The secondary destructor's implementation is not decompiled here, so allocator-level details remain unclaimed. Combined collection cleanup and deleting-destructor convention strongly support the removal role. The earlier `0x1403a2a80` true disposition therefore corresponds to a destruction/wipe path rather than ordinary retreat, subject to its explicit threshold and type-3 exceptions.

**Fleet-specific consequence:** if the removed unit is a navy (`unit virtual +0x68` false, `+0x70` true) and navy embarked-count `+0x240` is nonzero, this function traverses navy embarked-list `+0x230` and recursively calls itself for each carried army. The recursive call is at `0x140787ced`. Conversely, removing an embarked army unlinks it from its navy's list through army `+0x230`. These are existing engine removal semantics, not proposed naval casualty rules. A fleet-combat design must deliberately address transported armies; blindly routing defeated fleets through this path would inherit recursive cargo-army removal.

## Follow-up: manager removal and re-evaluation

`0x1403bd500(manager, combat_pair)` identifies an associated province (including settlement-related and stored fallback pointers), calls combat cleanup `0x1403aa9c0`, finds the combat in manager list `+0x18`, removes its node through `0x1403be090`, and releases the supplied pair through `0x1403bdd50`. It then traverses the province's unit list `+0xcc0`; units with neither live ordinary nor siege-associated combat handles are sent to `0x1403bc0c0`, the previously identified arrival/combat reconsideration entry. Some stationary/state-qualified units additionally reach `0x140934230`. Thus removal can trigger another combat evaluation in the same province, not merely free the old object.

`0x1403bd8e0(manager)` traverses the registered combats when global byte `0x1416e32d2` permits. After `0x1403a9a80(combat)`, it queues a type-3 combat if its first-side unit count is zero, and other combat types if either side count is zero. It avoids duplicates by scanning 16-byte object/control pairs in manager vector `+0x30/+0x38`, then appends through `0x1403be260`. This is a deferred cleanup queue; its draining/scheduling caller still needs the parent's subsequent driver analysis.

`0x1403bd7d0` is destructor-like cleanup for another list-owning object with table `0x1410903c8`. Under its byte `+0x20` condition, it calls `0x1403aa9c0` on held combats, clears/relinquishes their pairs, and removes list nodes; finally it calls `0x1403bdf60`. Its list header is at object `+8`, so it must not be conflated with the main manager's `+0x18` list solely because it handles the same combat objects.

The subsequent [p3-formulas-removal.json](../artifacts/p3-formulas-removal.json) establishes `0x1403aa9c0` more precisely: it calls `0x1403a2f60` on both side pointers, then clears a matching province combat object/control pair at `+0xcd8/+0xce0`, with reference release. For a matching type-3 settlement combat at settlement `+0xcc8`, it instead calls `0x1409fe3f0(settlement,0,1)`. The internals of side helper `0x1403a2f60` remain unexamined by this worker.

The same batch rules out `0x1403bd9e0` as a cleanup-queue drain. It walks a list header at argument `+8`, feeds actor-vector contents, side-unit lists, full `0x2a0`-byte side objects, and `0x98`-byte combat objects to `0x1401ac450(pointer,size,32bit_accumulator)`, and returns the accumulated value. A **checksum/state-digest interpretation is likely**, pending inspection of `0x1401ac450`; no networking or save-file use is claimed without callers. It identifies another potential compatibility boundary for added combat state but does not establish removal scheduling. Parent-selected `0x1403b9b30` is the concrete direct caller of actual removal function `0x1403bd500` and is the next driver to inspect.

## Follow-up: minimum-duration and overrun configuration names

[p3-config-and-stub-listing.json](../artifacts/p3-config-and-stub-listing.json) and its compact [binding summary](../artifacts/p3-config-bindings.txt) resolve the earlier unnamed globals through direct configuration-binding instructions:

| Global | Confirmed configuration name | Binding anchors |
|---|---|---|
| `0x1416e2644` | `MIN_COMBAT_DAYS` | `LEA R8,[global]` at `0x1404809d3`, name at `0x1404809da`, bind call `0x1404809e8` |
| `0x1416e261c` | `OVERRUN_RATIO` | `LEA R8,[global]` at `0x140482643`, name at `0x14048264a`, bind call `0x140482658` |
| `0x1416e2670` | `MORALE_COLLAPSE_THRESHOLD` | Global/name loads at `0x1404808c2` / `0x1404808c9` |

Therefore `0x1403a2a80` selects destruction when the battle's `+0x38` duration-like field is below `MIN_COMBAT_DAYS`, or later when the opponent exceeds the fixed-point `OVERRUN_RATIO` threshold described above, subject to its type-3-side exclusion. The cleanup destination decision compares `0x140b9e9b0(unit)` against `MORALE_COLLAPSE_THRESHOLD`. Configuration binding and control flow are confirmed; defaults, loaded runtime values, and units for the morale result have not been observed. These findings strengthen the overrun/wipe interpretation without importing external game rules.

## Final follow-up: manager update, deferred removal, and side detachment

Evidence: [manager driver](../artifacts/p3-scheduler-category-math.json), [game-state caller](../artifacts/p3-game-update-caller.json), and [side detachment](../artifacts/p3-final-contracts.json). Confidence: high for calls, collections, and reference cleanup; precise simulation cadence remains unresolved.

`0x1403b9b30(manager, context)` walks manager's registered list at `+0x18`, retaining each object/control pair while processing it. Combats already present in the deferred-removal vector at `+0x30/+0x38` are skipped. Others receive battle virtual `+0x78`, resolving to `0x1403a6300` for the concrete type-1 table. A true update result queues that combat if absent. After traversal, the driver calls `0x1403bd500` for queued pairs, releases their references, and resets the vector end to its beginning. Thus completion returns feed actual manager removal; `0x1403bd9e0` is not that driver.

`0x140784760` calls this driver at instruction `0x1407851f2`, passing game-state `+0x230` as the manager and game-state `+0x370` as context. This connects the manager to the game-state update path. The scheduling caller above this function and its time-unit contract have not been traced; a daily cadence is not claimed solely from `MIN_COMBAT_DAYS` naming.

Side detachment `0x1403a2f60` walks side participant list `+0x30`, invokes or inlines side virtual `+0x38` removal, and compares the unit's resolved combat pair with the side's. Matching ordinary combat associations are cleared at unit `+0x60/+0x68`, with weak-reference release; matching separate siege associations are similarly handled. Combined with `0x1403aa9c0` clearing the province association and `0x1403bd500` unlinking the manager node, this establishes the cleanup chain at the object/collection level. The exact destruction behavior of each referenced helper and allocator is not exhaustively audited.

Remaining conclusion work is narrower: exact retreat destination rules, reward/war-result formulas, script contents, save/load/identity behavior, and scheduler cadence. No runtime execution or validation was performed.
