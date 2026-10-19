# Fleet research

Status: Phase 2 static investigation completed on 2026-10-17. Fleet identity, partial layouts, ship quantity/capacity, transport linkage, movement commands, arrival, and province occupancy are now traced. The normal arrival combat path explicitly excludes fleets and sea provinces. Selection input, exact update cadence, complete layouts, and combat reuse remain unresolved. No executable modification or game execution was performed.

All findings apply only to SHA-256 `cc2d65b51d9099b3d632fe3269fa647aaf7c00fcb00cc0240adbaa8e6bbbb75e`. `FUN_...` names below are Ghidra labels. Suggested roles are interpretations, not original names. Direct Ghidra exports have no REA Evidence ID; their JSON includes identity, exact addresses, pseudocode, instructions, and coverage limits.

Phase 4 follow-up confirms that an existing fleet-spawn path populates the shared assignment-byte vector at unit `+0x118/+0x120/+0x128`, and flank insertion adds ship quantity to flank `+0x6c`. See [assignment evidence and limits](phase4-assignment-notes.md). The [ship-stat loader](phase4-ship-stats.md) requests seven GALLEYS combat coefficients, but their actual values are unavailable in this executable-only workspace. [Persistence/determinism notes](phase4-persistence-determinism.md) identify further save, identity, RNG, and command-check contracts. These findings do not establish working naval combat.

[Phase 5](phase5-compatibility-followup.md) confirms ship-component identity type0x3f, independent assignment-vector save/load, and removal/transfer maintenance. It also identifies whole-component cargo deletion when fleet capacity falls below embarked troop totals, and cargo loading through the existing morale-capping embark helper. These are additional dependencies for any future naval-combat assessment.

## Phase 2 findings and evidence

Confidence below concerns static behavior in this exact build. **High** means direct reads/writes, branches, or calls corroborate the interpretation; **medium** means the role is inferred but its full contract is not established. None is runtime validation. Addresses are preferred virtual addresses; ASLR must be accounted for in any future runtime work. Pseudocode uses analyst aliases, not recovered source declarations.

Detailed supporting records:

- [UI, type checks, ship quantity, and transport](phase2-ui-notes.md).
- [Movement, arrival, occupancy, and combat exclusions](phase2-movement-notes.md).
- [Province definitions, naval paths, and distance caching](phase2-province-notes.md).
- [Commands, selection, timing, and capacity configuration](phase2-command-notes.md).
- [Raw vtable evidence](../artifacts/phase2-vtables.json). Query JSON files linked below retain both pseudocode and instruction evidence; readable exports are in `artifacts/phase2/functions/`.

### P2-01: Fleet object and partial layout

High confidence: the scripted spawn path `0x1405c54e0` allocates **0x250 bytes** for a navy and calls constructor `0x140ba7310`. Its army branch allocates **0x240 bytes** and calls `0x1401add10`; ship components are allocated with **0x1b0 bytes** and initialized by `0x140a2a420`. The same path contains `pNavy->CanLoad( pArmy )` and calls the transport routines. These are allocation sizes at observed sites, not a complete recovered C++ type system. Evidence: [core functions](../artifacts/p2-core-functions.json), [constructors and linkage](../artifacts/p2-fleet-structure.json).

The fleet's primary vtable is `0x1411430f8`; the army's is `0x141075b70`. Concrete stubs establish type discrimination: virtual `+0x68` returns false for fleet / true for army; `+0x70` returns true for fleet / false for army. Slots `+0x50` and `+0x60` return self or null as army/navy accessors. This distinction is independently used in UI, movement, and combat gates.

| Base | Offset | Observed role | Confidence / qualification |
|---|---|---|---|
| Common unit | `+0x38` | Subunit linked-list head | High; payload at node +0, next at +0x10 |
| Common unit | `+0x68` | Combat-associated state/control pointer | High association; pointer/control-block layout unresolved |
| Common unit | `+0x80` | Current runtime province pointer | High, explicit relocation read/write |
| Common unit | `+0x88` | Previous location saved during arrival | High for write; full lifecycle unknown |
| Common unit | `+0x90/+0x98/+0xa0` | Movement route head/tail/count | High |
| Common unit | `+0xb0` | Movement progress | High |
| Common unit | `+0xb4` | Movement state used in retreat-like branches | Medium; do not equate all nonzero states with retreat |
| Common unit | `+0x170` | Cached owner/controller-associated pointer | High equality checks; precise ownership semantics medium |
| Common unit | `+0x1c0` | Followed/attached unit pointer | High |
| Common unit | `+0x218/+0x21c` | Progress increment / arrival threshold | High for arithmetic |
| Navy | `+0x230/+0x238/+0x240` | Embarked army list head/tail/count | High; load/unload corroborate constructor |
| Army | `+0x230` | Transport navy backpointer | High; different meaning from navy's same offset |
| Subunit | `+0xc4` | Fixed-point quantity supplying ship display/capacity | High for navy components; shared eighth category |
| Runtime province | `+0xe8` | 16-bit province ID | High |
| Runtime province | `+0xf0` | Static map definition pointer | High |
| Runtime province | `+0xcc0/+0xcc8/+0xcd0` | Shared unit list head/tail/count | High; includes embarked armies |
| Runtime province | `+0xd68` | Port-associated object | Medium-high; separate docked-navy list at object +0x10/+0x18/+0x20 |

These are offsets from different object bases. They must not be combined into a single structure. Original class names and complete lifetime/ownership rules are not recovered.

### P2-02: Ship quantity, transport capacity, and embarkation

High confidence: `0x140bc0530` renders `ship_amount` from navy subunit signed 32-bit `+0xc4`, dividing by 1000 and rounding positive fractions upward. `0x140b9f380` iterates subunits and applies the same rounding **per component**, then multiplies by `DAT_1416e26ac`. The configuration registration at `0x140480a89` through `0x140480a9e` passes that global's address alongside `NUMBER_OF_TROOPS_PER_GALLEY` (`0x14109f150`). The configured runtime value has not been established. Evidence: [quantity and aggregation](../artifacts/p2-counts-path-movement.json), [configuration instructions](../artifacts/p2-capacity-config.json).

Faithful simplified logic for nonnegative quantities, omitting overflow details:

```c
capacity = 0;
for (subunit in navy.subunits)
    capacity += ceil(subunit.quantity_at_c4 / 1000.0) * troops_per_galley;
```

`0x140ba7980` checks transport eligibility. It requires matching resolved owner/controller pointers, no active fleet combat state, no queued fleet movement, and no positive fleet state at `+0xb4`. It sums eight troop categories for the incoming army and already embarked armies, then compares the fixed-point total with `capacity * 1000`. Evidence: [CanLoad and assertions](../artifacts/p2-core-functions.json). Additional command and destination checks exist outside this function; it is not the entire embark contract.

`0x140ba7c00(navy, army)` sets the army backpointer and appends its pointer to the navy list. `0x140ba7d10` clears the backpointer and removes the list entry. Thus a navy can carry multiple army objects. Both clamp component `+0x40` to 500. Phase 3 subsequently confirmed this field is normalized morale on a 0..1000 scale through labeled damage channels and direct combat writes. Evidence: [load/unload pseudocode and instructions](../artifacts/p2-fleet-structure.json), [morale corroboration](phase3-damage-notes.md).

Important decompiler corrections: the UI's CanLoad call has two object arguments, and the embarked aggregation in CanLoad supplies four arguments, with its last two flags both 1. Instruction/register evidence in the UI notes takes precedence over incomplete inferred prototypes.

### P2-03: Provinces, sea zones, and naval routes

High confidence: runtime provinces and static definitions are distinct objects. Definition `+0x64 != 0` identifies land in the traced routing/UI branches; zero is the sea-like state. Definition `+0x68` marks coastal land and `+0x69` coastal water in the adjacency-marking routine `0x140821b50`. Flag `+0x6b` is an excluded/special category whose geographic meaning remains unknown.

Definition adjacency is a contiguous range at `+0x198/+0x1a0`, with **24-byte records**, edge type at record +0 and neighbor ID at +4. `0x140822200` resolves runtime provinces. `0x1408cf780` searches naval routes using that topology; intermediate nodes exclude land, isolated water, and the special flag. Final-target handling differs. Edge type 3 is rejected, but its original name is unknown. Evidence: [arrival/path functions](../artifacts/p2-arrival-path.json) and [detailed province notes](phase2-province-notes.md).

`0x140b76720` is the actual naval-path/distance predicate; the previously found `0x140b768f0` formats its description. Predicate calls `0x14081b7a0`, which lazily calculates and symmetrically caches distances. The matrix uses dense definition indices and includes eligible coastal land, so it is not exclusively a sea-zone matrix. Observed sentinel values are -1000 for initialization and -2000 for invalid/failed routes. Costs use Euclidean distances of definition coordinates at `+0xa4/+0xa6`, scaled by 1000. Coordinate units and full search optimality have not been established.

### P2-04: Commands, movement, and arrival

High confidence for these call paths, with exact simulation cadence unresolved:

```text
movement command 0x140ba8980
  -> route construction or supplied route
  -> 0x140ba1800 install/append movement

unit update 0x140b96b20
  -> 0x140b9d1c0 process guarded combat/participation cleanup
  -> 0x140ba2870 advance route
     -> virtual +0x80 destination permission
        navy: 0x140ba7380 / army: 0x140ba6360
     -> 0x140b98e30 relocate
     -> 0x1403bc0c0 combat-manager arrival dispatch
```

`0x140ba2870` adds `+0x218` to `+0xb0` and tests whether progress is **strictly greater than** `+0x21c`. It handles route nodes, carried-army constraints, and possible boarding at a sea destination. The fleet destination virtual method applies sea/path and port-access checks; it is not an opposing-fleet attack predicate. `0x140ba94a0` executes movement cancellation through `0x140ba15e0`. `0x140ba5040` maintains following movement. Evidence: [command/update boundary](../artifacts/p2-command-combat-boundary.json), [movement core](../artifacts/p2-core-functions.json), [route installation/cancellation](../artifacts/p2-counts-path-movement.json).

`0x140b98e30` removes the unit from its old province, writes its current province pointer, and inserts it into the destination. It relocates embarked armies as well. On land arrival with no remaining fleet route, it unloads them and dispatches their arrivals. Conditional script events include `on_entering_port` and `on_unit_entering_province`; not every relocation necessarily emits them. Evidence: [relocation](../artifacts/p2-fleet-structure.json), [province list insertion/removal](../artifacts/p2-arrival-path.json).

### P2-05: Selection/UI and multiple fleets in one sea zone

`0x140bd3060` produces tooltips for loading, selection, splitting, and embarked units. Its load branch traverses `province+0xcc0`, filters candidates by navy virtual `+0x70`, compares owner/controller pointers, and calls CanLoad. Actual load command execution is `0x140ba99a0`; its eligibility companion is `0x140ba9fc0`. This separates UI descriptions from commands that mutate game state. Mouse hit-testing, selection-set ownership, and the entire input-to-command chain are not yet mapped.

**Same-zone occupancy is represented and traversable.** Shared province list insertion `0x140937f10` and removal `0x1409382e0` corroborate the collection. A conceptual fleet enumeration is:

```c
// Analyst reconstruction from observed list access and type stubs.
for (node = province.unit_head; node != NULL; node = node.next)
    if (node.unit->virtual_at_70())
        observe_fleet(node.unit);
```

This is not a recovered hostile-fleet detection routine. The existing collection can hold multiple fleets and also embarked armies. The observed hostile lookahead in following movement only compares units when both pass the army test. No active fleet-versus-fleet engagement detection was established.

### P2-06: Concrete obstacle at the combat boundary

High confidence: `0x1403bc0c0` contains the diagnostic name `NewUnitArrived` and the source path `combatmanager.cpp`. Its existing-combat branch `0x1403bb1a0` requires an unembarked army. Its initiation branch `0x1403bb5d0` returns early for a navy, an embarked army, a sea province, or existing active combat state. Only after those gates does it traverse province units and call opponent predicate candidate `0x140b99d90`.

A later sea encounter-type assignment exists after the earlier sea rejection. Under an unchanged classification flag that branch is unreachable. It is not evidence that naval battles work, nor proof that removing a guard would be sufficient. See [combat boundary record](combat-research.md) and [exact assembly anchors](phase2-movement-notes.md).

### Remaining questions and next concrete reads

Phase 3 follow-up: the first combat targets below have now been traced in [combat-research.md](combat-research.md). Core attack/defense/casualty arithmetic includes the ship-quantity category, but factory/admission gates prevent unchanged naval use. Unit combat fields are now resolved as object/control pair `+0x60/+0x68`; control +8 is reference liveness, not a number of battles. Existing navy destruction also recursively removes embarked armies. Use the combat report's updated next-read list; the numbered list below preserves the Phase 2 handoff.

1. Trace `0x140b99d90` and `0x1403bc270` to establish opposing-army eligibility and combat creation, then identify combat update, casualties, morale, and conclusion. This is the next Phase 3 entry point.
2. Trace callers of `0x140b96b20` to determine simulation cadence, and complete movement timing/modifier contracts before proposing any hook.
3. Recover selection input and command registration/serialization around the confirmed movement and embark handlers; networking/determinism dependencies are unexamined.
4. Resolve complete fleet/subunit lifetime and ownership, special province flag `+0x6b`, edge type 3, and port access relations.
5. Evaluate combat reuse only after proving its participant-type assumptions. Shared location, movement, capacity, and list infrastructure are concrete; reusable combat calculations and naval-battle feasibility remain unproven.

## Phase 1 record retained below

The following F-01 through F-05 observations preserve the initial investigation. Their open questions and next steps describe that earlier state; the Phase 2 findings above supersede them where new evidence exists.

## Static string leads

These values are confirmed bytes in this copied executable, recorded by the static PE parser in `artifacts/pe-strings.tsv`. Their use and reachability are unknown. Addresses are preferred VAs, not runtime addresses.

| String | VA | Interpretation / confidence |
|---|---|---|
| `naval_battle_background` | `0x1410904a0` | UI/resource vocabulary; high confidence in string presence only |
| `naval_battle_splash_` | `0x141090528` | UI/resource vocabulary; no battle implementation demonstrated |
| `naval_combat` | `0x1411039a0` | Candidate code/configuration seed; semantics unknown |
| `naval_morale` | `0x141103a08` | Candidate code/configuration seed; semantics unknown |
| `sea_zone` | `0x1410e5220` | Province classification lead |
| `spawn_fleet` | `0x141109098` | Candidate scripted fleet creation lead |
| `any_fleet` | `0x14110e128` | Candidate script scope/iterator lead |
| `random_fleet` | `0x14110e138` | Candidate script scope/iterator lead |
| `can_naval_path_to` | `0x1411144c0` | Candidate pathfinding predicate lead |
| `naval_distance` | `0x1411144d8` | Candidate path distance lead |

The original byte inventory establishes these strings; subsequent code evidence is recorded below. The Ghidra regex search `fleet|embark|naval|transport` returned 58 defined-string matches without reaching its 250-result cap. Some are unrelated Windows/media transport messages. See [search and references](../artifacts/fleet-search.json); this is not an exhaustive search of every raw string, type, or indirect reference.

## F-01 — Keyword records, not yet gameplay handlers

Evidence: [seed references](../artifacts/fleet-seed-xrefs-v2.json), [bounded instruction listings](../artifacts/keyword-initialization-listing.json). Confidence: **high** for instructions and arguments; **medium** for interpretation as keyword/registration records; runtime dispatch unresolved.

`0x14007d930` is a 123,538-byte analyzed function containing direct references to many unrelated keywords. The following instruction sequences load a static destination in RCX, a numeric value in EDX, and a string pointer in R8 before a call:

| Keyword | String-reference instruction | Destination | Numeric argument | Callee / call instruction |
|---|---|---|---|---|
| `naval_combat` | `0x14008281a` | `0x1414b6ea0` | `0x283d` | `0x140a98220` / `0x14008282d` |
| `spawn_fleet` | `0x14008a0c2` | `0x1415590bc` | `0x2d46` | `0x140a981f0` / `0x14008a0d5` |
| `can_naval_path_to` | `0x140097832` | `0x14167b0b4` | `0x366a` | `0x140a98370` / `0x140097845` |
| `naval_distance` | `0x14009784a` | `0x14167b2b8` | `0x366b` | `0x140a982b0` / `0x14009785d` |

Faithful call-level transcription of one sequence (not decompiled whole-function source):

```c
FUN_140a98220((void *)0x1414b6ea0, 0x283d,
              (char *)0x1411039a0 /* "naval_combat" */);
```

The [helper dossiers](../artifacts/keyword-and-file-helpers.json) strengthen the record-initialization interpretation: each of the four callees is 41 bytes, stores the numeric argument at destination offset 0, and calls `0x140e3b2e0` with destination offset 4, the string pointer, and the literal's length including NUL. Actual decompiler output for `naval_combat`:

```c
undefined4 * FUN_140a98220(undefined4 *param_1,undefined4 param_2,undefined8 param_3)
{
  *param_1 = param_2;
  FUN_140e3b2e0(param_1 + 1,param_3,0xd);
  return param_1;
}
```

The common helper's byte-copy semantics were not independently decompiled in this pass. These numeric arguments are not yet proven runtime opcodes. These callees initialize records; they do not contain combat, spawning, or pathfinding logic. Follow references to the destination records and values to locate actual consumers. The sole direct `naval_combat` string reference does not establish whether its keyword is active or unused.

## F-02 — Naval-distance matrix and cache association

Evidence: [initial function dossiers](../artifacts/fleet-functions-initial.json), [cache function dossiers](../artifacts/naval-distance-cache.json), and readable pseudocode files [initialization](../artifacts/function-14081eb60.c), [constructor-like setup](../artifacts/function-140817c00.c), [cache loading](../artifacts/function-14081b0f0.c). All five functions in those two dossiers decompiled successfully and their instruction exports are not truncated.

`0x14081eb60`, referencing `NavalDists` at `0x1410dfd80`, enumerates an object-pointer array, assigns dense indices to qualifying objects, allocates a square array of four-byte values, and initializes each value to `0xfffffc18` (signed -1000). It later calls `0x14081b0f0` at instruction `0x14081ee9a`. Its direct caller found in the database is `0x140386b30` (call at `0x140386c79`); other recorded incoming data references do not by themselves establish callers.

Observed fields, relative to this function's first argument unless specified:

| Offset | Observation | Confidence / limitation |
|---|---|---|
| `+0x3258` | 32-bit bound for object enumeration | High for access; object collection identity unproven |
| `+0x32c0` | Pointer to an array of 8-byte object pointers | High for access/layout |
| Per-object `+0x1b8` | Signed 32-bit index; negative values can be replaced with sequential indices | High for writes; not a fleet ID claim |
| Per-object `+0x64`, `+0x68` | Bytes used in the inclusion predicate | High for byte accesses; meanings unknown |
| `+0x3b38` | 32-bit selected-object count N, reset then incremented | High |
| `+0x3b40` | Pointer to N×N entries, four bytes each | High; strongly associated with naval-distance cache |
| `+0x3b48` | Four-byte value compared with cache check-file contents | High for comparison; checksum algorithm unresolved |

Assembly anchors include count reset `0x14081eb8d`, object-pointer load `0x14081eba3`, index store `0x14081ebde`, matrix-pointer store `0x14081ec35`, and sentinel store `0x14081ec57` (`MOV dword ptr [RAX + RCX*4],0xfffffc18`).

Simplified transcription, using `i32`, `u8`, and `ptr` as explicit memory access notation (not recovered types):

```c
i32(manager + 0x3b38) = 0;
for (i = 0; i < i32(manager + 0x3258); ++i) {
    obj = ptr(ptr(manager + 0x32c0) + 8*i);
    if (i32(obj + 0x1b8) < 0 &&
        (u8(obj + 0x68) != 0 ||
         (u8(obj + 0x64) == 0 && FUN_140959950(obj) == 0))) {
        i32(obj + 0x1b8) = i32(manager + 0x3b38)++;
    }
}
N = i32(manager + 0x3b38);
ptr(manager + 0x3b40) = allocate_4_byte_entries(N*N);
for (i = 0; i < N*N; ++i)
    i32(ptr(manager + 0x3b40) + 4*i) = -1000;
// Later, after preparation of the cache check value:
FUN_14081b0f0(manager);
```

Allocation failure/size handling, logging, and unrelated setup are omitted here; preserve the complete exported pseudocode for exact behavior. `manager` and `obj` are analyst placeholders. The surrounding `default.map` setup and naval-distance names support a map/province-manager interpretation, but the class identity and the interpretation of every included object as a sea zone are **not proven**. These offsets must not be applied to a fleet object.

`0x140817c00` initializes path-related global objects using `default.map`, `navaldist_cache.bin`, and `navaldist_cache_chksum.bin`. The naval cache filename feeds the object at `0x1417ee3b8`; the check filename feeds `0x1417ee2d0`. `0x14081b0f0` uses those same globals, performs PHYSFS existence/close operations, obtains four bytes through `0x140d68080`, compares them against `manager+0x3b48`, and on a match passes the matrix pointer and `N*N*4` to the same helper. It returns 1 on that branch, otherwise 0. This ties the matrix to the named naval-distance cache much more strongly than the string alone.

The [file helper dossier](../artifacts/keyword-and-file-helpers.json) confirms the read operation directly. `0x140d68080` contains:

```c
lVar1 = PHYSFS_read(*(undefined8 *)(param_1 + 0x38),param_2,1,param_3);
if (lVar1 == param_3) return 1;
```

Its failure path obtains `PHYSFS_getLastError`, embeds a `clausewitz\pdx_core\virtualfilesystem.cpp` build-path string, and reaches a decompiler-marked nonreturning routine. Thus the caller's four-byte check and `N*N*4` buffer operation are actual file reads, not merely inferred from argument sizes. This is static code evidence; no cache files were read by running CK2.

Unknown: distance units, meaning of -1000, actual calculation/population on a cache miss, cache write path, inclusion-flag meanings, and runtime accessibility to a hook.

## F-03 — Sea-zone string belongs to a broader named-entry loader

Evidence: [dossier](../artifacts/sea-zone-function.json), [pseudocode](../artifacts/sea-zone-function.c). Function `0x140877040`; direct `sea_zone` string reference at instruction `0x140877802`. Confidence: **high** for the lookup/store pattern, **medium** that this is a modifier/configuration registry loader rather than province state.

The function handles names including `peace`, `coastal`, `coastal_sea`, `out_of_supply`, `land_province`, `sea_zone`, `naval_maintenance`, and difficulty modifiers. Excerpt from the actual decompiler output:

```c
FUN_1400b0300(&local_288,"sea_zone",8);
uVar9 = FUN_14087acd0(param_1,&local_288);
*(undefined8 *)(param_1 + 0xa8) = uVar9;
```

The adjacent `land_province` result is stored at `param_1+0xa0`. Neither offset is established as a province/fleet field. Caller: `0x140387220`, call at `0x140387858`. This is a useful caution against assigning structure meaning from strings alone.

## F-04 — Naval path trigger text formatting

Evidence: [dossier](../artifacts/fleet-functions-initial.json), [pseudocode](../artifacts/function-140b768f0.c). Function `0x140b768f0`. Confidence: **high** that this path builds display text; the predicate implementation remains unknown.

It selects `NAVAL_PATH_TRIGGER` or `NOT_NAVAL_PATH_TRIGGER` when a resolved integer is zero. Otherwise it formats that integer divided by 1000 and supplies `COMPARISON` and `VALUE` replacements to `NAVAL_PATH_DISTANCE_TRIGGER`. It returns the output string argument. A condensed transcription:

```c
if (value == 0)
    key = negate ? "NOT_NAVAL_PATH_TRIGGER" : "NAVAL_PATH_TRIGGER";
else {
    displayed_value = value / 1000;
    // format "NAVAL_PATH_DISTANCE_TRIGGER" with COMPARISON and VALUE
}
return output_string;
```

`value` and `negate` are analyst placeholders for observed variables/arguments. The division establishes a **display conversion**, not proof that the cached matrix uses the same units. Incoming data references include `0x14112ac18`; inspect the containing dispatch table to find an adjacent predicate method rather than treating this formatter as pathfinding.

## F-05 — Embarked-unit UI dispatch lead

Evidence: [dossier](../artifacts/fleet-functions-initial.json), [pseudocode](../artifacts/function-140bd3060.c). Function `0x140bd3060`, called at `0x140a9ffb6` inside `0x140a9d8d0`, whose string references include `EMBARK_UNITS` and `EMBARK_UNITS_DRO`. Confidence: **high** for UI resource lookups; **medium** for dispatch-role interpretation.

The function resolves widgets named `newunitbutton`, `splitinhalfbutton`, `disbandbutton`, `loadtoshipbutton`, `select_unit_button`, and `embarked_unit`, then branches based on widget/event state and other names. Actual excerpt:

```c
FUN_1400b0300(&local_648,"embarked_unit",0xd);
lVar9 = (**(code **)(**(longlong **)(param_1 + 0x30) + 0xe8))
            (*(longlong **)(param_1 + 0x30),&local_648);
cVar4 = (**(code **)(*(longlong *)(lVar9 + 0x28) + 0x130))
            ((longlong *)(lVar9 + 0x28),param_3);
```

This gives a concrete UI entry path for subsequent tracing. The `param_1+0x30` and vtable offsets shown are UI-side accesses; they do not establish embarked troop storage or ship capacity. Those indirect callees remain unresolved in this pass.

## Questions still open

- Fleet allocation, ownership, IDs, collections, and lifetime.
- Ship count, transport capacity, and embarked army fields.
- Province/sea-zone classification and adjacency/path data.
- Movement order handling, daily movement, and arrival callbacks.
- Fleet selection and command dispatch.
- Per-zone fleet collections and any opposing-fleet detection.
- Whether naval combat strings reference active gameplay, unused UI, shared engine support, or configuration alone.

## Next concrete research steps

1. Follow readers/writers of the manager's `+0x3b40` matrix, resolve `FUN_140959950`, and determine the per-object inclusion flags and distance units. Start from callers of `0x14081eb60` and consumers of the cache globals.
2. Trace consumers of keyword destination records `0x1415590bc` (`spawn_fleet`) and `0x14167b0b4` (`can_naval_path_to`), then distinguish parser registration, trigger display, and actual evaluation.
3. Inspect the dispatch table containing `0x14112ac18` and the `0x140a9d8d0` → `0x140bd3060` UI path; follow concrete command handlers into unit objects.
4. Establish fleet allocation/identity and movement/arrival before interpreting ship count, capacity, per-zone collections, or combat reuse. Verify field candidates through multiple independent reads/writes.
5. Begin the land combat checklist only after those unit/province relationships are grounded. The present findings do not justify a naval battle feasibility conclusion.

Additional surviving build-path strings offer future references to trace: `province.cpp` at `0x1410edde0`, `subunit.cpp` at `0x1410fb940`, `unit.cpp` at `0x141142de0`, and `unitcommands.cpp` at `0x141143270`. They are embedded diagnostics, not available source files or proof of the boundaries of those components.
