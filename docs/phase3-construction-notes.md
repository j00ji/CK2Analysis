# Phase 3 combat construction and reuse boundaries

Offline review of saved Ghidra exports and local PE pointer inventories, 2026-10-18 UTC. Target SHA-256: `cc2d65b51d9099b3d632fe3269fa647aaf7c00fcb00cc0240adbaa8e6bbbb75e`. No target execution or modification. `FUN_` labels and analyst role names below are not recovered source names.

## Concrete creation entry

Evidence: [p3-initiation.json](../artifacts/p3-initiation.json), function `0x1403bc270`, with successful decompilation and an untruncated instruction listing.

The creation function accepts a manager-like first argument, a runtime province as its second argument, a numeric type as its third, two participating units, and a pointer to an additional 32-bit handle. Its observed dispatch allocates only two types:

| Numeric type | Allocation | First-pointer table | Evidence anchors |
|---|---:|---|---|
| 1 | `0x98` bytes | `0x1410902d8` | allocation size `0x1403bc336`; common constructor call `0x1403bc34a`; table write `0x1403bc356` |
| 3 | `0xa0` bytes | `0x141090000` | allocation size `0x1403bc2ce`; common constructor call `0x1403bc2e2`; table write `0x1403bc2ee`; extra byte `+0x98=0` at `0x1403bc2f1` |

Type 1 is the ordinary army-battle implementation based on creation callers, terrain initialization, and army-only reinforcement below. Type 3 has strong siege evidence: creation's type-3 branch selects `SIEGEUS`, accesses settlement state, and binds a separate unit combat-handle pair. The numeric enum's original name is unknown. Allocation sizes are confirmed at these sites; no global C++ layout or ABI stability is implied.

Both branches call common constructor `0x1403a40e0`, then ownership-wrapper helper `0x1403be470`. After province/modifier setup, `0x1403bc5a1` calls `0x1403bdff0(manager+0x18, &object_pair)`, followed by virtual `+0x30` at `0x1403bc5ac`, then first/second-side attachment functions `0x1403b6910` and `0x1403b6ad0`. Later it traverses province unit list `+0xcc0` and offers other units to virtual `+0x80`. Wrapper/registration helper internals initially remain pending; their placement and parameters are directly observed.

## Type 2 is not a usable constructor branch

The assembly is decisive within this function:

```text
1403bc2b3 XORPS XMM0,XMM0
1403bc2b6 MOVDQU [RBP-0x30],XMM0  ; zero object/control pair
1403bc2c2 SUB R8D,0x1
1403bc2c6 JZ 1403bc336            ; original type 1
1403bc2c8 CMP R8D,0x2
1403bc2cc JNZ 1403bc325           ; anything other than original type 3
...
1403bc32d MOV RSI,[RBP-0x30]      ; null object in unsupported case
1403bc331 JMP 1403bc412
...
1403bc4a6 MOV RCX,RSI
1403bc4a9 CALL 1403b6870
```

`0x1403b6870` unconditionally writes its province argument at object `+0x28`, then invokes the object's virtual `+0x60`. Thus type 2 follows an unsupported null-object path, rather than allocating a latent third implementation. Another optional setter can receive the null object earlier. This is a **high-confidence static invalid-input finding**, not an executed crash observation. It does not identify what numeric value 2 means elsewhere, prove no naval code exists anywhere, or justify calling this function with type 2.

## Base layout and province-dependent setup

Evidence: [p3-construction-relations.json](../artifacts/p3-construction-relations.json), functions `0x1403a40e0`, `0x1403b6870`, `0x1403b6910`, `0x1403b6ad0`, and `0x1403aa310`.

Common constructor `0x1403a40e0` writes base table `0x1410900c8`, clears side pointers at byte `+0x10/+0x18`, initializes two province pointers at `+0x28/+0x30` using `0x140822200(map_manager,0)`, and initializes other fields. The constructor's arrays and typed pointer indices must be converted to byte offsets before use.

| Combat byte offset | Observed role | Confidence / limitation |
|---|---|---|
| `+0x10/+0x18` | First and second side pointers | High; allocated by type-1 initializer |
| `+0x20` | 32-bit handle resolved against global registry `0x1418d6ab8` | High storage/lookup; exact class not established here |
| `+0x28` | Battle province | High; creation setter and later province linkage |
| `+0x30` | Second province-like pointer, initially province zero | High initialization, later role unresolved |
| `+0x38` | 32-bit field initialized to `-1` | High value; meaning unnamed |
| `+0x40` | Province-derived object copied from runtime province `+0xf50` for type 1 | High linkage; terrain interpretation supported by modifier name |
| `+0x48` | Resolved `defenderbonus_` modifier | High string lookup/storage |
| `+0x50` | Byte initialized to zero | Meaning unresolved |
| `+0x58..+0x68`, `+0x70..+0x80` | Two initially empty pointer triples, populated through `0x140ba5f50` during unit attachment | High container shape; exact element class not recovered |
| `+0x88` | 32-bit field initialized from `0x14144fe3c` | Meaning unresolved |
| `+0x90` | Crossing/amphibious modifier pointer | High observed assignment; full modifier semantics not decompiled |

`0x1403b6870` stores the province at combat `+0x28`; for type 1 it copies province `+0xf50` into combat `+0x40`, formats `defenderbonus_` plus the object's name at `+0x10`, looks up that modifier, and stores its pointer at combat `+0x48`. These are concrete land-terrain assumptions a naval implementation would have to handle.

Creation also inspects the entering unit's current/previous province pointers at `+0x80/+0x88`, queries adjacency with `0x140959c40`, and maps edge types `1 -> 2`, `2 -> 0`, `4 -> 1` before calling `0x1403b7020` and storing combat `+0x90`. A separate branch resolves the literal `amphibious_landing`. The direction and exact names of individual crossing categories are not inferred here: unit movement history and definition land flags govern that branch, and caller semantics require care.

## Side construction and handles

Evidence: [p3-battle-lifecycle.json](../artifacts/p3-battle-lifecycle.json), `0x1403b7180`; [raw combat table inventory](../artifacts/phase3-combat-vtables.json).

Type-1 table `0x1410902d8` virtual `+0x30` points to `0x1403b7180`. It allocates **two `0x2a0`-byte side objects**, calls `0x1403a1230(side, combat_handle_pair, flag)` with flag 1 then 0, writes primary side table `0x14108ffa0` and secondary table `0x141090160` at side `+0x10`, and stores the sides at combat `+0x10/+0x18`. Both sides acquire a combat-associated pair from `0x1403b9ad0(game_state+0x230, out, combat)` with interlocked control-block increments/decrements. This is shared/weak-pointer-like ownership evidence; exact C++ template names are not recovered.

Attachment `0x1403b6910` calls first-side virtual `+0x30`; `0x1403b6ad0` calls second-side virtual `+0x30` if its unit is nonnull. Each obtains a registry-backed combat pair. For type 3 it writes unit `+0x70/+0x78`; otherwise it writes unit `+0x60/+0x68`, replacing old control references with interlocked release operations. These offsets refer to object fields and must not be confused with identically numbered virtual-table slots.

`0x1403aa310` additionally links non-type-3 combat through province `+0xcd8/+0xce0` when the existing handle is empty/expired; type 3 uses a separate settlement-related call. Its type-1 branch loops three records with stride `0xc8` from side `+0x48`, reads character/trait state, and performs probabilistic operations. Full semantics of those operations are outside this construction pass, but the implementation clearly depends on army-side and character data.

## Dispatch evidence and boundaries

The raw table export reads `0xb0` bytes at each origin. That read length is **not proof of the true vtable length**; tail entries could belong to an adjacent table. The following slots are corroborated by actual call sites:

| Slot | Type-1 target | Type-3 target | Observed role |
|---|---|---|---|
| `+0x30` | `0x1403b7180` | `0x1403b8360` | Side setup, called during creation |
| `+0x60` | `0x1400b2520` | `0x1400eb570` | Confirmed numeric type query, returning 1 and 3 respectively |
| `+0x78` | `0x1403a6300` | `0x1403a6300` | Shared update entry, investigated separately |
| `+0x80` | `0x1403a53c0` | `0x1403b8530` | Offer another province unit to combat |

No entries beyond `+0x90` are assigned combat-method names. The later ownership-wrapper evidence below establishes that `0x141090370` (raw export's type-1 `+0x98`) is actually a separate control-block table. Requested function `0x1403b7350` in the lifecycle export returned `No analyzed function contains this address`; the raw pointer remains evidence, not an analyzed function dossier.

The type-query stubs were checked directly against the copied PE: at VA `0x1400b2520` / file `0xb1920`, bytes `b8 01 00 00 00 c3` encode `MOV EAX,1; RET`; at VA `0x1400eb570` / file `0xea970`, bytes `b8 03 00 00 00 c3` encode `MOV EAX,3; RET`. This confirms the numeric labels independently of caller comparisons and Ghidra's missing function inventory entry for the second stub.

## Fleet reuse barriers

`0x1403a53c0` first calls unit virtual `+0x68`, then virtual `+0x50`, and requires the returned army object's `+0x230` to be zero. The existing [phase2-vtables.json](../artifacts/phase2-vtables.json) proves navy `+0x68` returns false and army `+0x68` returns true, while `+0x50` returns null for a navy and self for an army. Therefore **type-1 reinforcement explicitly excludes fleets**, independently of the earlier arrival/initiation gates. After the army gate it asks both side virtual `+0x50` methods for relationship tests and joins only when exactly one side matches.

Potential reuse consists of concrete lifecycle infrastructure: manager registration, combat handles, side attachment, province association, and a shared virtual update entry. That does not make the land implementation fleet-compatible. Creation currently allocates type 1/3 only; type-1 initialization expects terrain/modifier data and army sides; reinforcement requires an army; unit/combat ownership links must be maintained; and existing side logic uses three flank-like records plus character traits. Replacing a single arrival gate would not address those constraints.

No naval implementation, binary patch, hook address contract, save/load design, or feasibility conclusion is proposed. Remaining evidence needs are the small registry helpers, side constructor structure, and the separate casualty/morale/conclusion paths handled by the parent investigation.

## Follow-up: side constructor confirms fixed three-record layout

[p3-side-conclusion.json](../artifacts/p3-side-conclusion.json) successfully decompiled `0x1403a1230`. It stores the 1/0 side flag at byte `+0x18`, the combat object/control pair at `+0x20/+0x28`, initializes a pointer pair at `+0x30/+0x38`, a count at `+0x40`, and a byte at `+0x44`. It explicitly invokes the array constructor for **three records of size 200 (`0xc8`) starting at side `+0x48`**, using `0x14039bd90` and destructor `0x14039beb0`. This exactly fills the observed `0x2a0` side allocation.

It then assigns record ordinal values 0, 1, 2 to each record's `+0x78` and `+0x7c`, and sets each record's `+0xa0` to a combat-associated pointer obtained by helper `0x1403b96b0`. The original flank class name and the precise meanings of the two ordinal fields remain unknown. Fixed three-record construction is high-confidence evidence; describing them as battle flanks is supported by the surrounding land-combat workflow, not RTTI.

This strengthens the reuse barrier: existing type-1 side allocation and initialization encode three combat records structurally. A fleet adaptation must supply compatible side/record behavior or provide another implementation; the construction evidence does not establish that existing ship components satisfy these assumptions.

## Follow-up: ownership and manager registration confirmed

[p3-damage-registry.json](../artifacts/p3-damage-registry.json) successfully decompiled all three small helpers:

- `0x1403be470(out_pair, combat)` allocates a **24-byte control block**, writes counters 1 at `+8` and `+0xc`, the combat pointer at `+0x10`, and table `0x141090370` at `+0`. It passes the object/control block to `0x14026d370` to populate the output pair. This also demonstrates the raw combat-table boundary: `0x141090370` is a separate ownership table, not combat virtual slot `+0x98`.
- `0x1403bdff0(list, pair)` allocates a **40-byte linked-list node**, retains the pair's control block with an interlocked increment at counter `+8`, and inserts the node at the front. Node `+0/+8` holds the combat/control pair; node `+0x10` is the previous link and node `+0x18` the next link; byte `+0x20` is initialized to zero. The list header stores head at `+0`, tail at `+8`, and count at `+0x10`. Because creation passes manager `+0x18`, the manager head/tail/count are `+0x18/+0x20/+0x28`.
- `0x1403b9ad0(manager, out_pair, combat)` scans manager head `+0x18`, following node `+0x18`, for a node whose first pointer matches the requested combat. It returns a retained object/control pair if found, or two zero pointers if absent.

This establishes a coherent creation contract: register the combat before its side initializer attempts manager lookup. Side and unit references use the same object/control relationships. The interlocked counter offsets match shared/weak ownership conventions, but the exact standard-library class/type names remain inferred. Registration and lookup are structurally reusable concepts; their synchronization, save/load handling, and removal paths must still be understood before designing an engine extension.

The previously unanalyzed `0x1403b7350` table target is now resolved by [bounded instruction listing](../artifacts/p3-config-and-stub-listing.json): `MOV EAX,0x283c` at `0x1403b7350`, then `RET` at `0x1403b7355`. Thus type-1 virtual `+0x58` returns numeric ID `0x283c`. This does not require creating a Ghidra function or establish the enum's original name; it corrects the earlier coverage gap while preserving the failed-function-query record.
