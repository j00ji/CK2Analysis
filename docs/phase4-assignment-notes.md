# Participant and flank compatibility

Static investigation, 2026-10-17. Target SHA-256: `cc2d65b51d9099b3d632fe3269fa647aaf7c00fcb00cc0240adbaa8e6bbbb75e`. Addresses are preferred VAs. Analyst descriptions below are not recovered source names. No target execution or patching.

Follow-up: [Phase 5](phase5-compatibility-followup.md) now traces saved component identities, assignment-vector serialization, removal and selected transfer/consolidation paths. The historical open questions below are refined there; exhaustive split/merge/load compatibility remains unproven.

## A-01: Shared units already carry assignments

**High confidence for observed layout and paths; fleet battle operation remains unproven.** Evidence: [shared constructor and component insertion](../artifacts/p2-fleet-structure.json), [base constructor](../artifacts/phase2/functions/140b95100.c), [insertion pseudocode](../artifacts/phase2/functions/140b97bb0.c), [scripted spawn](../artifacts/phase2/functions/1405c54e0.c), [insertion callers](../artifacts/p4-rng-identity-assignment-xrefs.json).

The navy constructor `0x140ba7310` invokes shared constructor `0x140b95100`. The latter initializes the three pointers at unit `+0x118/+0x120/+0x128` to zero and the three leader-associated pointers at `+0x130/+0x138/+0x140` to the global sentinel at `0x1416e2360`. These fields are within the shared unit, not the navy-specific embarked-army tail.

`0x140b97bb0(unit, component, position)` appends/inserts a component in unit list `+0x38` and a corresponding byte in the vector at `+0x118`. It obtains the three current flank totals via `0x140ba4c30`, including all eight quantity categories. If the center total is zero it chooses assignment 1; otherwise it scores three choices using quantities and leader-related values. It then appends the byte through `0x1409ee960` or inserts through `0x140ba8280`. It also updates component owner/unit links and informs an existing combat when applicable. The detailed scoring formula is not fully assigned gameplay names.

This helper is concretely used for fleets: scripted spawn `0x1405c54e0` calls the navy constructor at `0x1405c6733`, keeps the result in R14, creates a shared component with ship quantities, and calls `0x140b97bb0` at `0x1405c6932`. A separate navy branch starts at constructor call `0x1405c5edb` and reaches insertion at `0x1405c6041`. The full Phase 2 JSON retains the instruction/register chain. The Phase 4 listing around `0x1405c759b` covers an army branch and is **not** used as the navy corroboration.

| Shared unit offset | Observed role |
|---|---|
| `+0x38/+0x40/+0x48` | Component linked-list head/tail/count |
| `+0x118/+0x120/+0x128` | Assignment-byte vector begin/end/capacity pointers |
| `+0x130/+0x138/+0x140` | Three leader-associated pointers initialized to sentinel objects |

This supports fleet-compatible **storage and at least one population path**. It does not establish that every split, merge, reload, or removal preserves correspondence between list order and assignment bytes.

## A-02: Side insertion consumes that representation directly

**High confidence.** Evidence: [side insertion and removal](../artifacts/p4-assignment-save-checksum.json), [assignment helper](../artifacts/phase4/functions/1403a1b60.c), [flank insertion](../artifacts/phase4/functions/14039c9e0.c), [authoritative function export](../artifacts/p4-flank-stats-sync-manager.json).

`0x1403a16f0(side,unit,prepend)` creates a 32-byte participant node, updates side `+0x30/+0x38/+0x40`, then calls `0x1403a1b60`. The latter obtains the battle type through virtual `+0x60`, walks the unit component list, and consumes the assignment bytes. Relevant simplified pseudocode:

```c
// Analyst notation, preserving the observed branches; not recovered source.
assignments = *(uint8_t **)(unit + 0x118);
for (node = *(Node **)(unit + 0x38); node; node = node->next) {
    index = battle_type == 3 ? 1 : *assignments++;
    FUN_14039c9e0(side + 0x48 + index * 0xc8, node->component);
}
// Then consider exactly three leader pointers from unit+0x130 onward.
```

No army/navy test, assignment-vector length check, or explicit `index < 3` check appears in this helper. It depends on valid upstream state. The type-3 branch ignores the assignment bytes and sends every component to the center record.

`0x14039c9e0(flank,component)` appends the component pointer to flank vector `+0x80/+0x88/+0x90`, resets state/counter fields, and adds all eight quantities from component `+0xa8..+0xc4` to flank `+0x50..+0x6c`, clamping negative totals to zero. In particular, **ship quantity at component `+0xc4` contributes to flank `+0x6c`**. Its body contains no separate fleet exclusion.

The leader loop dereferences each of the three unit leader pointers, checks byte `+0x1e9` bit 2, and uses `0x14023d360` before replacing the corresponding flank leader pointers. Sentinel initialization is therefore part of the contract. Leader suitability and tactics remain separate questions from quantity storage.

`0x1403a1cc0(side,unit)` walks the unit components and removes their pointers from the three flank vectors. `0x1403a1de0(side,candidate)` requires a nonempty participant list and checks every participant with the shared opponent predicate `0x140b99d90(existing,candidate,0,0)`. Neither body establishes that the public reinforcement path accepts fleets: `0x1403a53c0` still has its previously documented army-only admission gate.

## Consequence and next checks

The first structural uncertainty is narrowed: fleet components can receive assignment bytes in existing code, and side/flank insertion structurally accepts their shared layout and ship category. This is stronger evidence than merely finding eight-category damage arithmetic. It is still insufficient to establish working fleet combat.

Next inspect assignment maintenance during split/merge/component removal and unit load; confirm the registered identity type for ship components used by flank deserialization; then audit phase/tactic selection, sentinel leaders, and aftermath on those components. [Persistence notes](phase4-persistence-determinism.md) record the additional identity and reconstruction dependencies.
