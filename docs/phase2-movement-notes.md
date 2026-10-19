# Phase 2 movement and province occupancy notes

Investigation date: 2026-10-17. Static evidence only, copied `CK2game.exe`, SHA-256 `cc2d65b51d9099b3d632fe3269fa647aaf7c00fcb00cc0240adbaa8e6bbbb75e`. No game execution or patching. Addresses below are preferred virtual addresses. Names such as `unit`, `province`, `route`, and `follow` are analyst descriptions, not recovered source declarations.

Evidence: [core function exports](../artifacts/p2-core-functions.json), [movement exports](../artifacts/p2-counts-path-movement.json), readable [movement advance](../artifacts/phase2/functions/140ba2870.c), [follow update](../artifacts/phase2/functions/140ba5040.c), [add movement](../artifacts/phase2/functions/140ba1800.c), [cancel movement](../artifacts/phase2/functions/140ba15e0.c), and [cancel command](../artifacts/phase2/functions/140ba94a0.c). Core exports contain complete instruction lists for `140ba2870` and `140ba5040`. Direct Ghidra exports do not have REA Evidence IDs.

## Observed common movement fields

Offsets are bytes relative to the unit object passed as the first argument. Field access/layout is high confidence; semantic qualifications are listed separately.

| Offset | Observed representation/use | Interpretation and limits |
|---|---|---|
| `+0x48` | Signed 32-bit value must be positive to advance movement | Nonempty/unit-strength gate; not independently a ship-count identification |
| `+0x68` | Pointer; if non-null and pointed `+8` int is nonzero, advance and follow return | Active-state container; do not identify as a battle pointer without tracing |
| `+0x78` | Second pointer with same pointed `+8` test in add/cancel | Additional active-state container, identity unresolved |
| `+0x80` | Current location pointer | Runtime province, strongly established by province lookup and move calls |
| `+0x88` | Saved old `+0x80` before relocation | Previous location pointer |
| `+0x90` | Route head pointer | Doubly linked list of province identifiers |
| `+0x98` | Route tail pointer | Final scheduled location can be looked up from `*tail` |
| `+0xa0` | Signed 32-bit route count | Route exists when positive |
| `+0xa4` | Byte changes node removal into setting node `+0x18` | Deferred-removal/list-iteration flag, exact container contract unverified |
| `+0xb0` | Signed 32-bit movement accumulator | Increased by `+0x218`; reset upon arrival/certain cancellation |
| `+0xb4` | 32-bit state; positive suppresses follow; value 2 reset on arrival | Enum meanings unresolved |
| `+0x170` | Cached pointer, resolved through `+0x168` | Ownership-like value; compared against player pointer in messages |
| `+0x1a0` | 32-bit cleared by add and some cancellation | Meaning unresolved |
| `+0x1a4` | 32-bit copied from `FUN_14077c7b0(global)` | Time/date-like value, not independently established |
| `+0x1a8/+0x1b0` | Begin/end pointers of an 8-byte-element vector, iterated backward by `0x140ba57d0` | Units following this unit |
| `+0x1c0` | Other-unit pointer, followed through its location and route | Followed/attached leader unit candidate |
| `+0x218` | Signed 32-bit increment used during movement advance | Per-update progress increment; physical/time scale unresolved |
| `+0x21c` | Signed 32-bit threshold | Arrival only when accumulator is strictly greater |
| `+0x220` | Byte ORed/set when starting movement while either active-state container is populated | Meaning unresolved |
| `+0x221` | Byte reset when `+0xb4 == 2` on arrival | Meaning unresolved |
| `+0x222` | Byte assigned add-movement argument 4 and cleared by cancel | Movement option, meaning unresolved |

Route nodes allocate `0x20` bytes: 32-bit province ID at `+0`, previous pointer at `+8`, next pointer at `+0x10`, marker byte at `+0x18`. The province ID in the runtime province itself is read as a 16-bit value at `+0xe8`. This does not establish the maximum range of script-facing identifiers.

## Movement advance and arrival: `0x140ba2870`

High confidence: shared movement-advance function handles army-like and navy-like branches, consumes route nodes and emits `UNITARRIVED`. Direct incoming call is `0x140b96b70` in `0x140b96b20`; its scheduling cadence has not been examined.

The function first updates following via `0x140ba5040` when `unit+0x1c0` is non-null, then returns for active `+0x68` state or nonpositive `+0x48`. For an army-like unit with carrier `army+0x230`, a moving carrier (`carrier+0xa0 > 0`) sends the army to forced cancellation. This supports separation of an embarked army's own route from its carrier's route.

Selected faithful pseudocode, with analyst labels replacing raw variable names:

```c
destination = FUN_140822200(DAT_1416e32d8, *(uint32_t *)unit->route_head);
unit->progress += unit->increment;
if (unit->progress > unit->threshold) {  // signed comparison, strictly >
    remove_or_mark_route_head();
    unit->progress = 0;
    // Special army embark handling described below can divert control here.
    if (!unit->vtable_80(unit, destination)) {
        FUN_140ba15e0(unit, 1);
    } else if (destination != unit->current_province) {
        unit->previous_province = unit->current_province;
        FUN_140b98e30(unit, destination);
        if (!unit->state_68 || unit->state_68->field_8 == 0)
            FUN_1403bc0c0(DAT_1416e3260 + 0x230, unit, unit->current_province);
        // Navy loot-return branch and type-specific callbacks follow.
    }
}
```

Instruction anchors: `0x140ba2948` loads increment `+0x218`, `0x140ba294e` loads threshold `+0x21c`, `0x140ba2954` adds to `+0xb0`, `0x140ba295a` compares and `0x140ba2960` executes `SETG`. Virtual call at `0x140ba3242` uses RCX=unit/RDX=destination. Its false path calls forced cancel at `0x140ba3251`; old location is saved at `0x140ba326b`; relocation is called at `0x140ba3278`; post-arrival dispatch is called at `0x140ba32a4`. Thus neither timing units nor virtual `+0x80`'s exact eligibility predicate should be guessed.

At movement end, `UNITARRIVED` notification is conditional on argument 2, local-owner checks, and whether a special embark arrival already generated a message. The function also invokes `FUN_140132db0(1, LAB_140132e8c, navy)` for the navy-like branch and `FUN_140132db0(0, LAB_140132e70, army)` for the army-like branch. Callback semantics remain unexamined.

### Army arrival at a sea location and carrier selection

The special path requires unit virtual `+0x68` true and destination `*(destination+0xf0)+0x64 == 0`. The latter is a sea-like classification inference: it forces an army to find a carrier, while navy loot is handled in the opposite classification.

The function enumerates the runtime destination's linked collection starting at `province+0xcc0`. Each node holds a unit pointer at `+0` and next-node pointer at `+0x10`. It requires candidate unit virtual `+0x70` true, converts via virtual `+0x60`, then calls `FUN_140ba7980(candidate_navy, army)`. That is concrete same-province fleet discovery for embarkation, not an opposing-fleet combat scan.

Candidates that pass are scored by `FUN_140b9f380(navy)`. The code retains the smallest score. A candidate matching two stored identifiers at army `+0x238/+0x23c` receives an added `1,000,000` before comparison; the purpose of that penalty is unresolved. Do not describe this as preferential selection of the stored fleet.

If a carrier is found: `FUN_140ba7c00(navy, army)` is called at `0x140ba30c7`, old province is saved, `FUN_140b98e30(army, destination)` is called at `0x140ba30e4`, the army route is cleared, and selection may transfer to the carrier. If none exists, movement is forcibly cancelled. Before this search, an already carried army calls `FUN_140ba7d10(carrier, army)` after zeroing its previous-location field; the later callee inspection below corroborates detach/unload.

### Navy arrival at land and loot

For the non-army-like branch (converted through virtual `+0x60`), destination classification `+0x64 != 0` and navy `+0x248 > 0` lead into checks of location-held entities and owner relationships. If the checks pass, code emits `LOOT_SHIP_RETURNED`, calculates an amount/capacity ratio through `FUN_140ba8230`, calls reward-related routines, subtracts the entire `navy+0x248` amount via `FUN_140ba81c0`, and looks up/dispatches `on_navy_returns_with_loot`.

This is strong evidence that navy `+0x248` is carried loot, not troop capacity or ship count. `FUN_140ba8230` in this context is a loot-capacity candidate. The notification distinguishes ratios below/above 500 in a scale multiplied by 1000. No enemy-fleet comparison is visible in this arrival branch.

## Follow-route update: `0x140ba5040`

High confidence for route behavior. It returns while active `+0x68` state, positive `+0xb4`, or null followed unit. If following army-like units would lead into a sea-like destination, it calls `FUN_140ba4ed0(followed, follower)` (detach-follow candidate).

When both units are in the same province and the followed unit is moving, it compares route counts and route IDs. If routes differ, it copies/replaces the follower route with `FUN_140ba1800(follower, followed+0x90, 1, 0)`. Otherwise it compares current/final destinations and can find a fresh route using `FUN_1408cfdb0` and `FUN_1408cebc0`, then feeds that list to `FUN_140ba1800`. Before constructing a route it compares `FUN_14093b650` results for relevant provinces; those results' meaning is unresolved.

Crucial bounded negative finding: an obstacle/hostile-lookahead branch enumerates units in the follower's next province using `+0xcc0`, but checks virtual `+0x68` on **both** candidate and follower before calling the ownership relation routine `FUN_14025d050`. Assembly at `0x140ba5379` and `0x140ba538a` calls that virtual; each false result jumps to `0x140ba5445`, skipping the relation comparison. The relation call is at `0x140ba542c`. Assuming the independently corroborated army-like meaning of virtual `+0x68`, this particular lookahead is army-only. It establishes neither absence of all fleet-hostility logic elsewhere nor the exact relation flag's meaning.

## Add/cancel and command dispatch

`0x140ba1800` is corroborated as add-movement by `" AddMovement: "` caller logging in `unit.cpp`. Argument 2 is a route list. Argument 3 controls replacing rather than simply extending the route, with special handling through `FUN_140ba1ff0`: under one condition it preserves the first existing step and may compute a connecting route. It appends nonduplicate consecutive province IDs to the route and calls `FUN_140ba57d0(unit)` afterward. An embarked army whose carrier is moving returns without accepting this route. The subsequently inspected `0x140ba57d0` iterates the vector at `unit+0x1a8/+0x1b0` backward, calling follow-update `0x140ba5040` for each element; it does not itself recalculate speed.

`0x140ba15e0` is corroborated as cancel-movement by logging in both `unit.cpp` and `unitcommands.cpp`. Argument 2=true forces clearing accumulator and entire route. When argument 2=false, `FUN_140ba1ff0` true, and route nonempty, it preserves the first pending province then adds the current province, creating an outward-and-return path. Cancel clears byte `+0x222` and, for army-like units, the 8-byte identifier pair at `+0x238`. It can call arrival dispatcher `FUN_1403bc0c0(global+0x230, unit, province)` when fully idle and then calls `FUN_140ba57d0(unit)`.

The subsequently inspected [lock predicate](../artifacts/phase2/functions/140ba1ff0.c) requires global `+0x575` enabled, unit virtual `+0x68` true, and a positive route count. It obtains a denominator using `FUN_140ba2760(unit, out, nextProvince)` and returns true only if nonzero and `progress * 1000 / denominator > 500` (with a wider multiply fallback). This supports an army-only halfway movement lock; the navy-like type fails the type predicate. The denominator's calculation is still to be read.

`0x140ba94a0` resolves command `+0x88` through `FUN_1400d3090`, subtracts `0x10` to recover the unit object, caches it at command `+0x80`, optionally logs `" CancelMovement: "` with source `unitcommands.cpp` line `0xea`, and calls `FUN_140ba15e0(unit, 0)`. This identifies one concrete command execution body; UI selection-to-command creation and its vtable dispatch remain separate work.

## Province membership and embarked propagation

Additional evidence: [fleet structure exports](../artifacts/p2-fleet-structure.json), [arrival exports](../artifacts/p2-arrival-path.json), [relocation](../artifacts/phase2/functions/140b98e30.c), [province insertion](../artifacts/phase2/functions/140937f10.c), [province removal](../artifacts/phase2/functions/1409382e0.c), [embark](../artifacts/phase2/functions/140ba7c00.c), and [disembark](../artifacts/phase2/functions/140ba7d10.c).

`0x140b98e30(unit, newProvince)` searches old province `+0xcc0` for the unit, calls `0x1409382e0` to remove existing membership, stores the new location in unit `+0x80`, and calls `0x140937f10` for non-null destination. The latter deduplicates and appends a `0x20` node to the common province list with head `+0xcc0`, tail `+0xcc8`, and 32-bit count `+0xcd0`. Removal delegates to list helper `0x1400d4c30` after locating the matching node. This is high-confidence common occupancy storage for armies and navies.

For a navy-like unit in a land-like destination with a non-null `province+0xd68` object, insertion also deduplicates/appends to that object's list at head `+0x10`, tail `+0x18`, count `+0x20`. Removal handles this list too. Together with the `on_entering_port` event in relocation, this is strong evidence for a separate docked-fleet list maintained by a port object, not a replacement for common province occupancy.

Relocation's navy branch iterates carried units from `navy+0x230`. Its high-confidence sequence is:

```c
for (army in navy->carried_units) {
    if (destination_static_field_64 == 0 || navy->route_count > 0) {
        FUN_140b98e30(army, destination);
    } else {
        FUN_140ba7d10(navy, army);
        FUN_140b98e30(army, destination);
        FUN_1403bc0c0(global + 0x230, army, navy->current_province);
    }
}
```

Thus embarked armies retain their own synchronized location and are inserted into the same province occupancy list. Any future occupancy scanner must distinguish carried armies from independently moving armies. At a final land-like destination, the code detaches each carried army, relocates it, and notifies the combat manager. At sea-like destinations or intermediate route steps, it only relocates them and leaves carriage intact.

`0x140ba7c00` sets army `+0x230` to the navy, appends the army pointer to navy list head `+0x230` / tail `+0x238` / count `+0x240`, and clears army followers' `+0x1c0` pointers. `0x140ba7d10` clears army `+0x230` and removes it from that list. Both iterate army component list `+0x38` and clamp each component's 32-bit `+0x40` to at most 500; its semantic identity is not established by these functions alone.

Relocation additionally clears the army identifier pair `+0x238`, dispatches guarded `on_entering_port` and `on_unit_entering_province` script events, and increments unit `+0x1e4`. That counter's consumers are unknown.

## Concrete combat-manager entry boundary

[Arrival dispatcher `0x1403bc0c0`](../artifacts/phase2/functions/1403bc0c0.c) contains source-path `combatmanager.cpp` and diagnostic `NewUnitArrived: Unit.ProvID=`, with additional `Unit.Combat.ProvID=` text. If the unit's `+0x68` state is absent/empty it calls `FUN_1403bb1a0(manager, province, unit, argument4, -2)` and, when that returns zero, `FUN_1403bb5d0(manager, province, unit)`. Otherwise it logs the unit, requested, and combat province IDs. This materially strengthens interpreting `+0x68` as combat membership/state; the underlying pointer/control-block shape remains unresolved. Do not call it a direct combat object pointer.

The caller's decompilation displays only three arguments at several call sites, whereas this callee has a fourth apparent argument. Preserve that mismatch and inspect register setup before giving argument 4 a meaning. This entry function has no explicit unit-type gate; any army/fleet filtering may be in its callees.

The follow-up [command/combat-boundary export](../artifacts/p2-command-combat-boundary.json) resolves that specific filtering question:

- `0x1403bb1a0` returns zero unless arriving unit virtual `+0x68` is true and its converted army `+0x230` carrier pointer is null. Assembly: type call `0x1403bb1ca`, false branch `0x1403bb1cf`, carrier compare `0x1403bb1de`, reject branch `0x1403bb1e6`. It then retrieves an existing province combat-like object through `0x140938780`, calls that object's virtual `+0x80(unit)`, and returns its virtual `+0x60` value on success. Additional branches inspect location-held entities and existing combat pointers; their full interpretation belongs to subsequent combat research.
- `0x1403bb5d0` immediately returns zero for a navy-like unit (virtual `+0x70` true), a carried army, a sea-like province (`staticProvince+0x64 == 0`), or active unit combat state. Exact fleet rejection: call `0x1403bb5e8`, test/branch `0x1403bb5eb/0x1403bb5ed`, zero-return sequence beginning `0x1403bb5ef`. Sea rejection compares at `0x1403bb614` and branches at `0x1403bb618`. Only after these gates does it traverse `province+0xcc0`, calling `0x140b99d90(arrivingUnit, candidateUnit, 0, 0)` at `0x1403bb663`.
- When that scan finds a qualifying unit, or a later `0x1403bb720` check produces a nonzero encounter type, it can call `0x1403bc270` if province `+0xce0` state is absent/empty. The latter is a combat-creation candidate requiring inspection.

This proves explicit fleet and sea exclusions in the traced normal arrival initiation path. A later branch in `0x1403bb5d0` assigns encounter type 2 when the same province flag is sea-like, but the earlier gate already rejects that state. Under an unchanged classification field it cannot be reached. Preserve this as apparently dormant code, not working naval combat; an intervening callee's effects have not been exhaustively proven.

The same export resolves the derived destination eligibility functions. Army-like `0x140ba6360` accepts land-like locations when runtime `+0xdaa == 0`; for sea-like locations it searches `province+0xcc0` for a navy-like candidate passing `0x140ba7980`. Navy-like `0x140ba7380` uses the current province ID or, when leaving land, static province `+0x52`, and calls `0x140823160` for sea movement. A special destination static `+0x6b` branch applies an owner-side capability check and compares `0x140935d10` against `DAT_1416e2ad0`; exact geographic/mechanic meaning is unproven. Land entry requires a non-null `province+0xd68` port-like object and passes ownership/relationship checks against location-held entities. The relation call's first output must be false to accept that port. These are destination access rules, not enemy-fleet attack checks.

## Follow-up cost and update evidence

The final Phase 2 batch subsequently inspected `0x140ba2760` and `0x140b96b20`; see [command/timing notes](phase2-command-notes.md). The denominator helper uses army land/sea transition globals or adjacency-record signed cost at `+0x0c`, with fallback 1000. The update wrapper calls movement and combat arrival but does not by itself establish daily cadence. `0x140b9d1c0`, called around movement, performs guarded participation cleanup rather than setting movement speed. Derived virtual `+0x80` predicates are covered in the combat-boundary section above. The historical read list below is therefore partly resolved; writers of `+0x218/+0x21c`, scheduler callers, and notification semantics remain open.

## Next decisive reads (original list, with follow-up above)

1. `0x140ba2760` and writers of `+0x218/+0x21c`: establish movement cost and speed calculation.
2. `0x140b99d90` and `0x1403bc270`: trace opposing-army eligibility and combat creation, preserving the now-confirmed fleet/sea exclusions.
3. `0x140b96b20`: establish movement update caller and cadence.
4. `0x140132db0` and callbacks `0x140132e8c` / `0x140132e70`: establish post-arrival notification behavior.
5. Unit vtable `+0x80` for both derived types: recover destination eligibility and exact sea/land predicate.
6. `0x140ba4ed0`: confirm following detachment; follow caller relationships into selection/attachment commands.

These results identify useful common movement and occupancy infrastructure. They do not establish feasibility of reusing land-combat objects for fleets or specify a safe hook location.
