# Land combat research

Status: Phase 3 covers opponent eligibility, creation/registration, updates, casualty/morale arithmetic, conclusion, retreat/destruction, and removal. Phase 4 adds participant/flank assignment, ship-stat loader bindings, battle/side/flank persistence, and command/RNG checksum dependencies. Actual loaded coefficients, full modifier/tactic rules, scheduler cadence, exact rewards, complete load fixups, and multiplayer compatibility remain unresolved. Naval-combat feasibility remains unproven.

Target SHA-256: `cc2d65b51d9099b3d632fe3269fa647aaf7c00fcb00cc0240adbaa8e6bbbb75e`. Addresses are preferred virtual addresses. No game execution or executable modification was performed.

## Phase 3 evidence index

- [Opponent eligibility and combat handles](phase3-opponent-notes.md).
- [Creation, registration, side layout, and type restrictions](phase3-construction-notes.md).
- [Damage, morale, targeting, and update pipeline](phase3-damage-notes.md).
- [Conclusion tests and retreat](phase3-conclusion-notes.md).

Phase 4 follow-up: [participant/flank assignment](phase4-assignment-notes.md), [loaded ship-stat investigation](phase4-ship-stats.md), and [serialization/determinism dependencies](phase4-persistence-determinism.md).

The [Phase 5 compatibility follow-up](phase5-compatibility-followup.md) confirms component identity type0x3f, unit assignment serialization, and removal/consolidation paths. It adds two integration dependencies: ordinary fleet updates can delete whole carried army components to enforce capacity, and component-transfer execution temporarily suppresses shared RNG draws. Full load reconciliation, actual ship-stat values, tactics, and raw combat-hash consumers remain unresolved.

All function roles are analyst descriptions unless an embedded diagnostic is quoted. Raw `FUN_...` labels are Ghidra identifiers. Direct Ghidra exports have no REA Evidence IDs; each retained JSON includes target hash, function addresses, pseudocode where available, instruction listings, references, and truncation status. **High confidence** means direct static instructions/calls corroborate a claim; **medium** means the role is inferred or a helper contract remains incomplete. Neither means runtime validation.

## C-01: Opponents are selected through layered checks

Evidence: [eligibility and creation export](../artifacts/p3-initiation.json), [relation helpers](../artifacts/p3-construction-relations.json), [component-owner helper](../artifacts/p3-damage-registry.json). Confidence: high for the branches; formal gameplay names of some relation rules remain unresolved.

`0x140b99d90(unitA, unitB, flag3, flag4)` rejects self-comparison, incompatible existing combat associations, mixed army/navy pairs, and applicable movement/carriage/location states. With both flags zero, an army must be unembarked and unit A's location must fit its type: land for an army, sea for a navy. The function does not itself require equal province pointers; its normal arrival caller supplies candidates from a common province list. Co-located followed units can substitute their owner/controller association for relation checks.

Hostility is not simply an owner inequality or a single war test. `0x14025d050` can produce an eligible relation through several branches; the predicate tries multiple combinations of original/followed owners and applies reciprocal restrictions through `0x140b9a350`. That helper uses `0x140b9a450`, which traverses shared unit components and owner/configuration hierarchy without an explicit army-only cast. See the detailed notes for exact flag bypasses and instruction anchors.

**Important boundary:** the low-level predicate's explicit type/terrain gates can accommodate two fleets at sea. The normal arrival caller excludes fleets before reaching it. This is evidence of some shared engine logic, not evidence that a fleet battle can be created or updated safely.

## C-02: Creation supports two observed concrete encounter types

Evidence: [factory `0x1403bc270`](../artifacts/phase3/functions/1403bc270.c), [constructor and province binding](../artifacts/p3-construction-relations.json), [raw battle table windows](../artifacts/phase3-combat-vtables.json). Confidence: high for allocations, branches, and concrete tables.

| Factory input | Allocation / primary table | Observed interpretation |
|---|---|---|
| 1 | `0x98` bytes / `0x1410902d8` | Land encounter from the normal opposing-unit arrival branch |
| 3 | `0xa0` bytes / `0x141090000` | Siege-associated type, corroborated by settlement and `SIEGEUS`/`SIEGETHEM` paths |
| Other, including 2 | No object allocation on this path | Leaves a null object pointer and proceeds to initialization that requires an object |

The last case is not a usable naval constructor. Exact instructions subtract 1 from the input at `0x1403bc2c2`; the zero branch handles original type 1, and comparison against 2 at `0x1403bc2c8` selects original type 3. Other inputs reach the null branch. Subsequent `0x1403b6870` writes through the object at `+0x28`. This establishes why merely bypassing the sea-arrival rejection would not provide a valid type-2 construction path. It is not a whole-binary proof that every naval-related class is absent.

Creation stores the province, installs terrain/defender and crossing/amphibious modifiers, registers the object, initializes two sides, adds initial participants, offers other province units to reinforcement admission, and binds the combat to the province. Unit admission `0x1403a53c0`, installed at battle virtual `+0x80`, independently requires an unembarked army before evaluating side membership. The exact original class names remain unknown.

## C-03: Object relationships and registration

Evidence: [side initializer and handle lock](../artifacts/p3-battle-lifecycle.json), [side constructor](../artifacts/p3-side-conclusion.json), [registry helpers](../artifacts/p3-damage-registry.json). Confidence: high for offsets and ownership operations; shared/weak-pointer terminology is an inferred match to the implementation.

| Object base | Fields | Observed meaning |
|---|---|---|
| Combat manager | `+0x18/+0x20/+0x28` | Registered combat list head/tail/count |
| Registry node (`0x28` bytes) | `+0/+8`, `+0x10/+0x18` | Combat/control pair, previous/next links |
| Combat (type 1) | `+0x10/+0x18` | Two side pointers |
| Combat | `+0x28` | Runtime province pointer |
| Combat | `+0x38` | Update counter initialized to -1, then advanced in update |
| Combat | `+0x40/+0x48/+0x90` | Terrain-associated pointer, defender modifier, crossing/amphibious modifier |
| Side (`0x2a0` bytes) | `+0x18`, `+0x20/+0x28` | Side flag, combat object/control association |
| Side | `+0x30/+0x38/+0x40` | Participant list head/tail/count |
| Side | `+0x48 + i*0xc8`, `i=0..2` | Three embedded flank records |
| Unit | `+0x60/+0x68` | Combat object pointer / reference-control pointer |
| Unit | `+0x70/+0x78` | Separate siege-associated object/control pair |
| Runtime province | `+0xcd8/+0xce0` | Combat object/control pair |

`0x1403be470` allocates a 24-byte control block with counters at +8/+0xc and object at +0x10. `0x1403bdff0` inserts a retained pair into the manager list. `0x1403b9ad0` looks up a registered combat and returns its retained pair. Registration precedes side initialization, which depends on this lookup.

`0x140b99ce0` and `0x1403b96b0` resolve a unit's combat association by incrementing a live reference counter. Therefore **control pointer +8 is reference liveness/count, not a battle count**. This refines Phase 2's cautious combat-state identification. A virtual slot offset has meaning only for its object's vtable: combat `+0x68/+0x70` methods must not be confused with unit army/navy tests at those offsets.

The raw battle-table export intentionally reads a bounded window. At `0x141090370`, a separate control-block table begins; it must not be called combat slot `+0x98`.

## C-04: Update and conclusion entry points

The type-1 battle table resolves update virtual `+0x78` to `0x1403a6300` and completion test `+0x88` to `0x1403b7360`. Manager driver `0x1403b9b30` calls the update and queues completed combats; game-state function `0x140784760` calls that manager at `0x1407851f2`. Update computes both sides' outgoing effects before routing them to opposing flank records, updates targeting/state, removes exhausted units through `0x1403a8bb0`, and invokes completion. The fixed three-flank structure is corroborated by both array construction and update loops. Exact scheduling cadence above the game-state caller remains unresolved. Evidence: [manager driver](../artifacts/p3-scheduler-category-math.json), [game-state caller](../artifacts/p3-game-update-caller.json).

Completion `0x1403b7360` tests both sides for populated flank component vectors and nonzero aggregate strength. An exhausted side causes `0x1403a2a80` to evaluate further destruction/retreat conditions, calls result routine `0x1403ad020` with a side-selection flag, and then processes the losing side through `0x1403a2150`.

## C-05: Damage, casualties, and morale

Evidence: [damage routing](../artifacts/p3-damage-registry.json), [direct writers](../artifacts/p3-damage-writers-manager.json), [category formulas](../artifacts/p3-formulas-removal.json), [attack/defense producers](../artifacts/p3-scheduler-category-math.json), [attack helper](../artifacts/p3-final-contracts.json), and [detailed arithmetic notes](phase3-damage-notes.md). Confidence: high for arithmetic/field writes; complete modifier and configuration interpretation remains partial.

```text
0x1403a6300 battle update
  -> side virtual +0x40 = 0x1403a3f00
  -> 0x14039d7d0 flank outgoing damage and morale damage
  -> 0x140a2d950 component output, with owner/leader modifiers
  -> 0x140848320 / 0x140847de0 per-category attack

routed opposing damage
  -> 0x1403a05e0 flank distributes damage rates
  -> 0x140a2dd60 component morale reduction
  -> 0x140848850 category casualty subtraction
```

`0x14039d7d0` explicitly labels the two channels `DAMAGE` and `MORALE_DAMAGE` in its tooltip path. Outgoing attack, incoming defense, strength totals, and casualty mutation iterate all **eight** component categories. This includes category 7, the ship-amount slot at subunit `+0xc4`. Ordinary attack/defense coefficients use tables indexed by `category*3 + phase`; the code also supports custom subtype data. Loaded ship coefficients have not been observed, so code coverage of the ship slot does not prove effective naval combat.

Core casualty arithmetic in `0x140848850`, simplified while preserving integer-division order for a positive category amount `n`:

```c
d = max(weightedDefense * 1000 / n, 100);
if (defenseScale != 1000) d = defenseScale * d / 1000;
loss = d == 0 ? -1 : ((damageRate * n / 1000) * 1000 / d);
loss = min(loss, n);
categoryAmount = n - loss;
```

The saved code contains width/overflow handling and modifier calculations omitted here. The zero-divisor result is recorded as observed; its reachability under valid configuration is unproven. This is not a proposed naval damage formula.

`0x140a2dd60` subtracts morale damage from subunit `+0x40`, clamping to **0..1000**. Its delta depends on incoming morale rate, all-category strength, mitigation modifiers, `MORALELOSS_FACTOR`, and a stat-weighted normalizer. This confirms Phase 2's load/unload clamp to 500 is a morale cap. `0x1403a0a10` calculates strength-weighted flank morale; `0x1403a0c50` compares it with a script-evaluated threshold for ordinary combat, while its type-3 path tests zero. Do not substitute the separately named configuration threshold without tracing the script evaluator.

[Configuration binding instructions](../artifacts/p3-config-and-stub-listing.json) establish:

| Name | Destination | Observed use |
|---|---|---|
| `ATTACK_TO_DAMAGE_MULT` | `0x1416e2b4c` | Scales outgoing category attack |
| `MORALELOSS_FACTOR` | `0x1416e2b18` | Scales direct morale loss |
| `DEATH_MORALE_DAMAGE` | `0x1416e2638` | Additional morale damage derived from casualties |
| `MORALE_COLLAPSE_THRESHOLD` | `0x1416e2670` | Used in traced unit retreat decision; exact relation to flank script threshold unresolved |
| `MIN_COMBAT_DAYS` | `0x1416e2644` | Early destruction/overrun decision threshold |
| `OVERRUN_RATIO` | `0x1416e261c` | Later relative-strength destruction threshold |

These bindings do not establish defaults or running-game values.

## C-06: Conclusion, retreat, destruction, and deregistration

Evidence: [conclusion trigger](../artifacts/p3-battle-lifecycle.json), [retreat/disposition](../artifacts/p3-side-conclusion.json), [successful extended finalizer](../artifacts/p3-conclusion-extended.json), [removal routines](../artifacts/p3-damage-writers-manager.json), [side/province detach](../artifacts/p3-final-contracts.json), and [detailed conclusion notes](phase3-conclusion-notes.md). Confidence: high for the call chain, winner selection, writes, and recursive removal; exact aftermath balances remain partial.

The terminal test passes outcome flag 0 when side `combat+0x10` loses and 1 when side `combat+0x18` loses. `0x1403ad020` selects winner/loser accordingly, creates a `0x148`-byte result object, aggregates flank/category summaries, processes `battle_won` / `battle_lost`, dispatches conditional owner events, and constructs notifications/results UI. It has a processed guard at combat `+0x50`; type 3 dispatches a separate finalizer. War/history integration, commander/owner state, scripts, and rewards make this substantially more than displaying a result.

`0x1403a2a80` selects destruction under early-duration or overrun-ratio conditions, subject to type-3 exceptions. `0x1403a2150` detaches the losing units and either arranges retreat (including unit `+0xb4=1` and a command path) or calls removal `0x140786dc0`. That routine unlinks engine collections and reaches a deleting-destructor-style virtual call.

**Cargo consequence:** when `0x140786dc0` removes a navy with embarked armies, it iterates navy `+0x230` and recursively removes those armies; the recursive call is at `0x140787ced`. Reusing this destruction path for a defeated fleet would therefore bring existing cargo-destruction semantics. No behavior was tested or changed.

Phase 5 additionally traces `0x140b96b20` calling navy capacity enforcement `0x140ba7fc0` before its later combat-state exclusion branch. Overcapacity causes whole embarked components to be removed and destroyed until cargo fits. Thus losing ship capacity could affect cargo even when the navy survives; this is a static dependency, not a tested combat outcome.

After update returns completion, manager `0x1403b9b30` drains its deferred vector through `0x1403bd500`. Cleanup detaches both sides, clears matching unit/province combat associations, removes the registry node, releases references, and re-evaluates eligible remaining province units for new encounters. This establishes the lifecycle through deregistration, while exact scheduler cadence and all referenced destructor bodies remain unexamined.

## Analysis limitations and next reads

The first 90-second decompilation of `0x1403ad020` timed out; its complete instruction export was retained. A focused retry with a 240-second limit succeeded. Address `0x1403b7350` had no analyzed function boundary; a bounded listing recovered its small constant-return stub. Neither limitation was hidden by inventing pseudocode. Decompiler warnings and reference caps remain in the raw exports and verification report.

The requested insertion, stat-loader, and persistence/determinism follow-up is recorded in the Phase 4 notes. Next resolve actual coefficients from an authorized workspace copy of game data; trace ship-component identity registration and assignment maintenance through load/split/merge; inspect tactic/phase assumptions, post-load fixups, and callers of the raw combat-hash interface. Follow scheduler callers above `0x140784760` for exact cadence. No implementation or hook proposal is justified before those contracts are understood.

## Reuse assessment at this stage

| Existing mechanism | Evidence-based assessment |
|---|---|
| Province occupancy and relocation | Shared infrastructure is established |
| Same-type opponent eligibility | Explicit low-level gates accommodate fleets at sea, but remaining configuration contracts need care |
| Combat lifetime/registry | Object/control pairs and registration are concrete reusable concepts; integration contracts remain |
| Arrival and reinforcement admission | Explicit army/land restrictions prevent unchanged fleet use |
| Factory dispatch | No valid allocation branch for apparent sea encounter type 2 in the traced factory |
| Side construction/update | Fleet spawn populates shared assignment bytes; flank insertion includes ships; full lifecycle/tactic compatibility unproven |
| Damage and morale | Eight-category arithmetic and seven ship-stat loader bindings established; actual values and suitability unknown |
| Aftermath and cargo | Navy destruction removes cargo; ordinary capacity enforcement can also delete whole carried components; land events/rewards remain dependencies |
| Save/load and multiplayer | Two-class save dispatch, identity-based side/flank restoration, and command checks containing RNG seed/count established; complete round-trip and synchronization coverage unproven |

No patch or hook location is proposed. A replacement factory branch alone would not resolve participant admission, side representation, damage categories, retreat behavior, or lifecycle dependencies.

## Phase 2 boundary evidence retained below

## Confirmed arrival boundary

Evidence: [arrival dispatcher export](../artifacts/p2-arrival-path.json), [filter functions and callers](../artifacts/p2-command-combat-boundary.json), [movement notes with assembly anchors](phase2-movement-notes.md). Confidence: **high** for calls and gating; **medium** for uninspected combat object roles.

Movement `0x140ba2870`, relocation `0x140b98e30`, and the unit update wrapper `0x140b96b20` reach `0x1403bc0c0`. The latter contains `combatmanager.cpp` and the diagnostic `NewUnitArrived: Unit.ProvID=`, followed by requested-province and combat-province IDs. The first three arguments are manager, unit, province. A fourth apparent argument is forwarded in decompiled output; several callers show only three. Its meaning and calling contract remain unresolved.

Faithful simplified dispatcher, with analyst names:

```c
if (unit.state_at_68 == NULL || unit.state_at_68->int_at_8 == 0) {
    result = FUN_1403bb1a0(manager, province, unit, unresolved_arg4, -2);
    if (result == 0)
        FUN_1403bb5d0(manager, province, unit);
} else {
    log_arrival_while_already_in_combat();
}
```

The diagnostic strengthens the association of unit `+0x68` with combat, but its control-pointer layout must not be mistaken for a direct battle-object pointer.

| Function | Confirmed behavior | Remaining interpretation |
|---|---|---|
| `0x1403bb1a0` | Requires army virtual `+0x68` true and army carrier `+0x230` null; accesses province combat-associated state through `0x140938780`, then virtual participant operations | Existing-combat admission role strongly supported; full branches unclassified |
| `0x1403bb5d0` | Rejects navy virtual `+0x70` true, carried armies, sea-like provinces, and active combat state; then scans province unit list `+0xcc0` | Normal new-encounter initiation candidate |
| `0x140b99d90` | Called for arriving unit and province-list candidates after those gates | Opponent eligibility predicate candidate; body not yet examined |
| `0x1403bb720` | Supplies a further encounter classification in the initiation path | Special encounter rules unknown |
| `0x1403bc270` | Called after an eligible encounter and absent/empty province `+0xce0` state | Combat-creation candidate; allocation, ownership, and participant types unexamined |

Exact early exclusion anchors in `0x1403bb5d0`: navy type call at `0x1403bb5e8`, conditional branch at `0x1403bb5ed`, zero return sequence beginning `0x1403bb5ef`; sea flag compare at `0x1403bb614` and rejecting branch at `0x1403bb618`. These precede the province occupancy scan and its call to `0x140b99d90` at `0x1403bb663`.

A later branch assigns encounter type 2 for a sea-like province, despite the earlier sea rejection. With the classification unchanged, that branch cannot be reached. Intervening callees have not been exhaustively audited for effects. This is an apparently dormant path, not confirmed naval battle support or evidence that changing one guard would suffice.

## Implication for reuse

Province occupancy, relocation, movement commands, and transported-army propagation are shared infrastructure. The traced admission and initiation gates are explicitly army/land-specific. This establishes an obstacle to using them unchanged, not a feasibility verdict. Combat objects might contain further assumptions about army components, flanks, leaders, sieges, retreat, serialization, or multiplayer synchronization; these have not yet been audited. No hook location is recommended.

## Original diagnostic seeds

Two concrete source-path seeds survive in [Ghidra's defined-string inventory](../artifacts/ghidra-strings.tsv):

| VA | Observed string | Confidence |
|---|---|---|
| `0x141090240` | `D:\jenkins\workspace\ck2-steam\ck2\source\combatmanager.cpp` | High for string presence; behavior unknown |
| `0x141073e50` | `D:\jenkins\workspace\ck2-steam\ck2\source\battleresult.cpp` | High for string presence; behavior unknown |

These are diagnostic build-path strings, not locally available source files. The combat-manager seed now has the behavioral evidence above. The battle-result seed remains to be traced.

## Investigation checklist

| Question | Evidence needed | Status |
|---|---|---|
| Battle initiation | Movement/arrival callers reaching hostility checks and battle allocation | Partially answered: guards, selection, concrete factory branches traced |
| Opposing army selection | Province/unit collection traversal and diplomacy/war predicate calls | Partially answered: structural gates, followed-owner substitution and relation chain; some hierarchy semantics unresolved |
| Combat creation/update | Allocation, participant insertion, registry ownership, tick callers | Partially answered: allocation, ownership, side construction, shared component/flank insertion and update driver; full mutation/load invariants and cadence unresolved |
| Casualties and morale | State writes, arithmetic, modifiers, phase/tactic inputs | Partially answered: direct eight-category losses and morale writes; full modifier/tactic rules and loaded stats unresolved |
| Conclusion | Winner/retreat/disband handling and battle deregistration | Partially answered: winner mapping, result/events, retreat/destruction, registry cleanup; rewards/destination rules unresolved |
| Reusability for fleets | Demonstrated dependencies on army/flank/regiment/siege-specific types | Explicit barriers and shared arithmetic established; feasibility remains unproven |

The initial targets `0x140b99d90` and `0x1403bc270` are now traced. Use the next-read list above for further investigation. Preserve address-linked pseudocode and distinguish recovered observations from proposed interpretations. Do not implement or patch anything based on this checklist.
