# Fleet compatibility follow-up: identity, mutation, and load contracts

2026-10-17/18, local static analysis. Target SHA-256: `cc2d65b51d9099b3d632fe3269fa647aaf7c00fcb00cc0240adbaa8e6bbbb75e`.

This is a follow-up to the [Phase 4 assignment](phase4-assignment-notes.md), [ship-stat](phase4-ship-stats.md), and [persistence/determinism](phase4-persistence-determinism.md) findings. No target execution, binary modification, Steam access, or remote transfer. Addresses are preferred VAs; function descriptions are analyst interpretations. Naval-combat feasibility remains **unproven**.

## F-01: Ship-component identities match the flank loader's required type

**High confidence for the static registration/load chain.** Evidence: [unit/component tables](../artifacts/phase5-unit-component-tables.json), [registration and navy serialization](../artifacts/p5-identity-unit-serialization.json), [ID primitive and shared unit loading](../artifacts/p5-load-assignment-registry.json), [post-load hook listing](../artifacts/p5-component-postload-config-scope.json), [saved-ID registration](../artifacts/phase5/functions/140a2ac20.c), [parse wrapper](../artifacts/phase5/functions/140c38110.c).

The prior fleet spawn trace calls shared component constructor `0x140a2a420` at `0x1405c6789`, then its virtual `+0x38` at `0x1405c67f8`. Component table `0x1410fba40` resolves that slot to `0x140a2ab80`. That routine supplies type **0x3f**, advances the game-state counter at `+0x430`, and retries `0x140c425f0` until identity registration succeeds. This matches the type that flank reader `0x14039bf20` uses to resolve component IDs. Source for the spawn registers/instructions: [Phase 2 core export](../artifacts/p2-core-functions.json).

Fleet/unit registration is different: navy secondary table `0x141143228`, installed at unit `+0x10`, resolves `+0x38` to `0x140b953f0`. It supplies type **0x3e** and advances game `+0x42c`. The ID pair ends up at unit `+0x20/+0x24`, because ID code receives the secondary-interface pointer, not the unit base.

| Object | Registration receiver | Saved ID location | Observed type |
|---|---|---|---|
| Fleet/shared unit | `unit + 0x10` | `unit + 0x20/+0x24` | `0x3e` |
| Shared ship component | `component` | `component + 0x10/+0x14` | `0x3f` |

`0x140c425f0` resolves a proposed identity, handles duplicate/invalid cases, writes the ID, calls registry insertion `0x140c42760`, and marks registration state. Its full registry insertion implementation has not been audited; the type supplied by fleet/component callers is confirmed.

The generic block reader `0x140c38110` repeatedly invokes object virtual `+0x20` for fields. On normal block termination, when no parse error was recorded, it invokes virtual `+0x28`. The component hook at `0x140a2bbe0` is a small instruction-only stub: if either saved ID word is nonzero, dispatch virtual `+0x40` with `component+0x10`. That slot is `0x140a2ac20`, which updates the counter and registers the saved ID with duplicate rejection. Registration failure clears both component ID words. The shared unit field reader discards the component if both are zero after parsing.

This closes the **identity-type mismatch uncertainty**, not the entire save round-trip. Registry availability, parse success, duplicates, object load order, and later association fixups still affect reconstruction. The stub lacks an analyzed function boundary; its listing, not fabricated decompilation, is the evidence.

## F-02: Unit components and assignment bytes load independently

**High confidence for selected reader/writer behavior.** Evidence: [shared unit reader/writer](../artifacts/p5-load-assignment-registry.json), [byte-vector codec](../artifacts/p5-task-and-assignment-codec.json), [format-string bytes](../artifacts/phase5-static-followup.json).

Navy reader/writer `0x140ba7dd0` / `0x140ba7f10` delegate shared fields to `0x140b95f20` / `0x140b96490`. All four receive **unit+0x10**. Consequently an access to receiver `+0x108` is unit `+0x118`, not a different vector.

| Token in a unit block | Writer behavior | Reader behavior |
|---|---|---|
| `0xb` | Writes the unit identity pair | Reads the pair; normal post-load hook registers it |
| `0x28c8` | Writes each component block in linked-list order | Allocates a 0x1b0-byte shared component, parses it, rejects a zero ID, appends it and sets component `+0x28` to the unit |
| `0x2c89` | Emits the nonempty assignment-byte vector | Reads bytes into the vector at unit `+0x118` |
| `0x2c8a/0x2c8b/0x2c8c` | Writes active leader IDs | Reads associated integer fields for later resolution; complete leader fixups remain untraced |

These token meanings are contextual: `0x28c8` in a flank block is an ID vector, while in a unit block it introduces a component block.

Writer `0x1409ee7f0` emits each assignment byte as an integer. Reader `0x1409ee110` parses with `%c` (format at `0x14114a58c`), subtracts ASCII `'0'`, and appends one byte. No explicit 0..2 enum validation or comparison with the unit's component count appears in this parser or the inspected unit field reader. This is a bounded observation, not proof that validation never occurs elsewhere.

Relevant reconstruction summary:

```c
// Simplified analyst transcription of separate fields, not original source.
on_component_block:
    component = construct_shared_component(0x1b0);
    parse_block(component);       // Normal completion runs saved-ID registration.
    if (component.id == {0,0}) discard(component);
    else append_component_and_set_parent(unit, component);

on_assignment_vector:
    append_parsed_assignment_bytes(unit + 0x118);
```

The component field path does not invoke ordinary insertion `0x140b97bb0`, so it does not automatically regenerate assignments during that field's handling. A complete load audit must establish that final component order/count matches the restored assignment vector, especially if a component fails identity registration. No malformed-save testing or gameplay round-trip was performed.

The unit post-load hook `0x140b96300` registers identity and calls relocation `0x140b98e30`. Other initialization/mode guards and later fixups remain relevant; these calls alone do not prove that normal gameplay arrival effects occur during loading.

## F-03: Removal and observed transfer paths maintain positional assignments

**High confidence for the selected mutation paths; not exhaustive split/merge coverage.** Evidence: [component removal](../artifacts/phase5/functions/140b987f0.c), [transfer and recalculation candidates](../artifacts/p5-hash-and-component-transfer.json), [multi-unit consolidation and creation paths](../artifacts/p5-load-wrapper-file-hash-split.json), [previous insertion algorithm](../artifacts/phase2/functions/140b97bb0.c).

`0x140b987f0(unit,component)` finds the component's list index, shifts the remaining assignment bytes left, decrements vector end, unlinks the component, and clears component parent `+0x28`. For live ordinary or siege combat associations it also removes that component from both combat sides through `0x1403a1900`, then refreshes unit state.

```c
index = find_component_index(unit, component);
if (index >= 0) {
    move_bytes(assignments + index, assignments + index + 1,
               end - (assignments + index + 1));
    --end;
}
unlink_component(unit, component);
component.parent = NULL;
// Existing live combat associations also receive removal callbacks.
```

`0x140bb3970` resolves component and destination IDs, removes the component from its parent, then inserts it into the destination at the requested position. Insertion recomputes the assignment byte using destination state; this path does not directly copy the old assignment byte. It can also invoke arrival reconsideration after insertion.

`0x140bb2050` contains a multi-unit consolidation path: calls at `0x140bb257b` and `0x140bb258a` remove each source component and append it to a destination through the same helpers. Its fleet-specific branch also transfers the embarked-army list and rewrites army carrier pointers. It checks navy type before skipping leader-assignment handling, demonstrating that leader behavior is not uniform across unit types. Full command preconditions and every branch are not classified.

An additional creation path `0x140bad820` allocates and registers a 0x250-byte navy and inserts a shared component with `0x140b97bb0`. Its exact user command identity is unresolved; it must not be labeled a proven general fleet-split operation merely because it creates another fleet. `0x140b97ae0` also removes and reinserts component collections; omitted decompiler arguments in its temporary-list construction mean its complete ordering contract was not reconstructed here.

## F-04: Capacity loss can delete cargo during ordinary fleet updates

**High confidence for the static call/loop; future combat consequences are an inference.** Evidence: [capacity enforcement](../artifacts/phase5/functions/140ba7fc0.c), [caller references](../artifacts/p5-task-capacity-config-callers.json), [existing unit-update wrapper](../artifacts/phase2/functions/140b96b20.c), [capacity calculation](phase2-command-notes.md).

The regular update wrapper `0x140b96b20` tests navy virtual `+0x70`, obtains the navy object, and calls `0x140ba7fc0` at `0x140b96c49`. This occurs **before** its subsequent live-combat exclusion branch for other component cleanup. Exact scheduler cadence remains unresolved.

Capacity enforcement repeatedly compares embarked troop aggregate `0x140bba910` with capacity `0x140b9f380`. When over capacity, it finds an embarked army with components, removes its first component with `0x140b987f0`, invokes that component's deleting destructor, and repeats. If the army becomes empty, it queues its ID through `0x140791320`. Owner/levy bookkeeping can also run before removal.

This is removal of **whole army components**, not proportional loss equal to the capacity deficit. Inference: if a future battle reduces ship counts enough to lower capacity, the existing update path could delete carried troop components even while the fleet survives. This is distinct from the already documented destruction of all embarked armies when the navy itself is removed. It is an additional behavior to assess, not a recommended naval-combat rule.

## F-05: Loading cargo reuses embark behavior; transfer can suppress RNG draws

**High confidence for calls and state writes.** Evidence: [navy load handler](../artifacts/phase5/functions/140ba7dd0.c), [embark helper](../artifacts/phase2/functions/140ba7c00.c), [transfer routine](../artifacts/phase5/functions/140bb3970.c), [shared draw routine](../artifacts/phase4/functions/140c4a7f0.c).

For token `0x27ec`, the navy loader allocates a 0x240-byte army, supplies owner-related context, parses its secondary persistence interface, then calls `0x140ba7c00(navy,army)`. That helper links the carrier/list and caps each carried component's morale at 500. Thus this load path reuses a state-changing embark helper. Whether valid saves already guarantee the cap, and whether other fixups subsequently change morale, remain untested.

Transfer routine `0x140bb3970` saves global byte `0x1417e3b32`, sets it to 1 around removal/insertion/possible arrival processing, and restores the saved value. The shared draw routine returns zero without advancing state or draw count when that byte is set. This establishes a concrete **RNG suppression region**, not just a shared global generator. No interpretation as a client/server mode is implied.

## F-06: Ship-stat scope is resolved; loaded values remain unavailable

**High confidence for scope selection and seven bindings; runtime values unresolved.** Evidence: [loader entry and scope selection](../artifacts/p5-config-scope-hash-dispatch.json), [previous complete key bindings](phase4-ship-stats.md), [bounded local inventory](../artifacts/phase5-static-followup.json).

At `0x14047503e..0x14047505e`, the configuration loader selects the string `NMilitary` at `0x14109b7d8` and constructs the object at stack `RSP+0x40`. The ship-stat loop later supplies that object to numeric reader `0x1404748c0`. Loader entry also supplies `common/defines.lua` at `0x140474d88` to its file/evaluation path and subsequently iterates additional file entries. The complete override discovery and ordering are not resolved.

The seven GALLEYS morale/phase attack/defense bindings remain those in Phase 4. The bounded workspace inventory still finds no copied `.lua`, `.mod`, `.txt`, `.csv`, `.ck2`, `.zip`, or `.7z` game-data candidates outside analysis directories. No original installation was accessed. Therefore nonzero/suitable coefficients and actual overrides cannot be established from the present artifacts.

## F-07: Raw combat-hash consumers remain unresolved after bounded follow-up

**High confidence for the inspected branches; no exhaustive absence claim.** Evidence: [ChecksumTask constructor](../artifacts/p5-hash-and-component-transfer.json), [worker](../artifacts/p5-task-and-assignment-codec.json), [directory-pattern calls](../artifacts/phase5/functions/1403829c0.c), [raw candidate-search record](../artifacts/phase5-static-followup.json), [candidate decompilation](../artifacts/p5-combat-hash-consumer.json), [disambiguating instructions](../artifacts/p5-config-scope-hash-dispatch.json).

The `ChecksumTask` string leads to constructor `0x14080e730`, table `0x1410defc0`, worker `0x14080e8a0`, and `0x1403829c0`. The last routine supplies directory names `common`, `events`, `decisions`, `history`, and additional path/pattern combinations to `0x140c89300`. This supports a content-checking lead; it does not connect the task to combat manager hash `0x1403bd9e0`.

A bounded raw-byte search for LEA displacement `0x240` in the known game-state code region found three candidates inside `0x14078d170`. Ghidra confirms they use **RBP stack locals**, not game-state `+0x240`. They do not identify a consumer of the manager secondary interface. The artifact filename `p5-combat-hash-consumer.json` records the investigated hypothesis, which was rejected. Raw displacement matches alone are not field references.

The Phase 4 conclusion stands: the manager has a concrete raw-memory hash traversal, and command checks separately include RNG seed/count; cross-machine use of the raw pointer-bearing hash is not established. Incoming reference lists to common routines and `NMilitary` are bounded; no exhaustive caller/configuration coverage is claimed.

## Remaining work

1. Trace leader/association post-load fixups and any reconciliation of component count with assignment-byte count; then inspect true split command identity and all fleet transfer preconditions.
2. Resolve loaded ship coefficients and tactic/phase assumptions using an authorized workspace copy of applicable game data and its override order.
3. Find consumers of the combat manager's secondary hash interface, establish stable command-check coverage of battle state, and trace update cadence/RNG restoration scheduling.
4. Include capacity-driven cargo deletion, embark morale caps, ID failure handling, and RNG suppression in the dependency assessment before considering a design.

No safe hook or implementation is proposed. Findings narrow several static compatibility questions while exposing further behavior that a future naval-combat design would have to account for.
