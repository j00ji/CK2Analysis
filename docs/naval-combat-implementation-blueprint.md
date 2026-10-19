# CK2 naval-combat DLL implementation blueprint

**Status:** implementation-ready architecture; no DLL implemented yet  
**Static confidence:** medium-high  
**New Ghidra queries:** 0  
**Supported executable:** SHA-256 `cc2d65b51d9099b3d632fe3269fa647aaf7c00fcb00cc0240adbaa8e6bbbb75e`

## Goal and first playable milestone

The first milestone is a deliberately narrow fleet-versus-fleet loop:

1. Hostile navies occupying the same sea province create a type-1 combat.
2. Additional eligible navies join the correct side.
3. Existing three-flank, tactic, GALLEYS-stat, morale, and casualty machinery advances the battle.
4. The losing fleets detach and either retreat to a valid sea province or are destroyed under an explicit cargo policy.
5. Mid-battle saves reconstruct the combat as `type 1 + sea location`.
6. Ordinary land battles and sieges remain bit-for-bit on their original paths.

This milestone may initially retain stock result presentation. Proper naval warscore, events, rewards, and UI are a second completion layer.

## Delivery shape

```text
d3d9.dll                 optional proxy bootstrap; forwards the real D3D9 API
ck2_naval.dll            version guard, hooks, naval rules, logging
ck2_naval.ini            deterministic configuration only
companion mod/           GALLEYS coefficients and naval tactic content
```

The proxy is only a loader. All game-specific code belongs in `ck2_naval.dll`, allowing another injector/ASI loader to replace the proxy without changing combat code. Initialization must run outside `DllMain` loader lock. Installation is manual later; this project must not alter the Steam directory or patch `CK2game.exe` on disk.

At startup the DLL must:

- resolve addresses as `module_base + RVA`, never fixed runtime VAs;
- verify the executable SHA-256 and short instruction signatures at every hook;
- refuse to install gameplay hooks on any mismatch;
- install all required hooks atomically, rolling back if one fails;
- keep land/siege calls on untouched trampolines.

## Derived predicates and invariants

```cpp
IsType1(combat) := combat->virtual(+0x60) == 1
IsSea(province) := province && province->definition(+0xf0)->byte(+0x64) == 0
IsNavy(unit)    := unit && unit->virtual(+0x70) != 0
IsNavalCombat(combat) := IsType1(combat) && IsSea(combat->province(+0x28))
```

`IsNavalCombat` is the persistent identity. Participant navy checks are validation only because lists can be empty during construction or completion. Do not extend the `0x98`-byte combat object and do not maintain a persistent per-combat sidecar map.

Before side insertion, require:

- the unit is a navy in the combat province;
- its ordinary combat association is empty or already this combat;
- component count equals assignment-byte count;
- every assignment byte is in `0..2`;
- the candidate matches exactly one side's existing relation predicate.

## Hook map

| Hook | Naval behavior | Land/siege behavior |
|---|---|---|
| `0x1403bb5d0` new-encounter admission | For a navy in a sea province, scan `province+0xcc0`, find an eligible hostile navy using `0x140b99d90`, require no live province combat, then call `0x1403bc270` with **type 1**, never the unusable type 2. | Tail-call original. |
| `0x1403bb1a0` existing-combat arrival | If the province combat satisfies `IsNavalCombat`, offer the arriving navy to its virtual `+0x80` admission method. | Tail-call original. |
| `0x1403a53c0` type-1 reinforcement | For naval combat, replace only the army/carrier gate; preserve the observed two-side relation tests and the `0x1403b6910` / `0x1403b6ad0` attachment calls. | Tail-call original. |
| `0x1403a2150` loser handling, MVP | Snapshot losing navy identities/outcomes, use `0x1403a2f60` for neutral detach, then apply naval retreat/destruction and cargo rules. | Tail-call original. |
| `0x1403b7360` type-1 completion, later | Dispatch naval combat to a dedicated result finalizer before land `0x1403ad020`; reproduce the proven side-exhaustion test and completion scheduling. | Tail-call original. |

### Reused engine machinery

| Address | Reuse |
|---|---|
| `0x1403bc270` | Allocate/register/initialize an existing type-1 combat at the sea province. |
| `0x1403b7180` | Allocate and bind the two ordinary sides. |
| `0x1403b6910`, `0x1403b6ad0` | Attach units and combat handles. |
| `0x1403a16f0`, `0x1403a1b60` | Populate participant and three-flank structures from shared unit assignments. |
| `0x1403a6300` | Existing steady-state battle update; no MVP detour. |
| `0x1403a2f60` | Neutral side detachment without movement or destruction policy. |
| `0x140b9cdc0` | Install fleet movement toward a validated sea retreat destination. |
| `0x140786dc0` | Final unit removal only after the custom cargo rule has been applied. |

Do not spoof the navy's army virtuals. That would expose unrelated army-only casts and carrier accesses throughout the engine.

## Encounter and reinforcement flow

```text
fleet arrival
  -> active naval combat in province?
       yes -> naval reinforcement admission
       no  -> find hostile navy
               -> create ordinary type-1 object at sea
               -> attach initial fleets
               -> factory offers remaining province fleets through hooked +0x80
  -> existing type-1 update loop
```

The dormant sea/type-2 selection inside `0x1403bb5d0` must not be revived: `0x1403bc270` has no type-2 allocation branch. The custom sea branch deliberately requests type 1.

## Combat content policy

The engine already loads and consumes:

- `GALLEYS_MORALE`;
- `GALLEYS_PHASE_{SKIRMISH,MELEE,PURSUE}_{ATTACK,DEFENSE}`;
- all eight category quantities in flank aggregation and damage;
- existing tactic vectors for a GALLEYS-only flank.

Before enabling automatic encounters, the companion mod must provide verified nonzero GALLEYS values. The MVP can use stock tactic selection only after validating that the master and each applicable subset vector are nonempty. It must not assume index 0 is a distinguished naval tactic. A later naval selector or authored tactic set can improve semantics without changing combat storage.

## Naval aftermath policy

For each losing fleet, snapshot its stable unit ID before detachment.

### Retreat survivor

1. Select a reachable adjacent sea province; never call the land retreat selector.
2. Call `0x1403a2f60` once for the losing side.
3. Re-resolve the fleet by stable identity.
4. Set the observed retreat state equivalent to `unit+0xb4 = 1`.
5. Reproduce the stock `0x140b9cdc0` plus command `0x32d3` mode sequence.
6. Preserve embarked armies on the surviving carrier.

### Destroyed fleet

Cargo policy must be explicit and deterministic. The recommended MVP is:

- no cargo: call `0x140786dc0`;
- cargo aboard: destroy the fleet and cargo together, matching existing remover semantics, but log the decision;
- do not attempt automatic shore evacuation until destination legality and ownership rules are separately implemented.

Later configuration may add transported-army survival, but it must resolve/rehome cargo before calling `0x140786dc0`.

## Persistence and deterministic state

No new save field is required:

- save token `0x283c` reconstructs the type-1 class;
- battle token `0x27bc` restores `combat+0x28` and binds the province;
- `type 1 + sea province` reconstructs naval identity;
- participant IDs, component IDs, assignment bytes, and flank vectors already serialize.

Gameplay decisions must depend only on serialized game state, synchronized commands/configuration, and the engine RNG. Never use wall-clock time, pointer values, unordered container iteration, or unsynchronized DLL-local random state. Log engine IDs and RNG draw counts rather than pointers when comparing peers.

## Implementation order

1. **Scaffold and guard:** x64 DLL, proxy/bootstrap boundary, logging, RVA table, hash/signature validation, hook transaction, clean refusal on mismatch.
2. **Passive probe:** install observation-only detours; confirm predicates and call frequency while every call passes through unchanged.
3. **Manual creation prototype:** expose a debug-only command that creates one type-1 sea combat between two selected hostile fleets.
4. **Admission:** implement `0x1403a53c0`, then existing-combat arrival `0x1403bb1a0`.
5. **Automatic encounters:** implement the naval branch of `0x1403bb5d0` only after manual creation/update is stable.
6. **MVP aftermath:** detour `0x1403a2150`, reuse neutral detach, implement retreat destination and cargo policy.
7. **Save/load:** validate mid-battle round trips and derived naval identity before adding new presentation.
8. **Naval result layer:** detour `0x1403b7360` to replace land-specific rewards, events, warscore, and UI where required.
9. **Determinism/regression:** multiplayer/OOS testing and extensive land, siege, movement, cargo, split, and merge regression.

## Runtime validation matrix

| ID | Scenario | Required pass condition |
|---|---|---|
| V0 | Unsupported executable | DLL logs mismatch and installs no gameplay hooks. |
| V1 | Ordinary land battle and siege | Creation, reinforcement, update, conclusion, and UI match an unmodded control run. |
| V2 | Two hostile unloaded fleets meet at sea | Exactly one type-1 sea combat is registered; each fleet appears once on the correct side. |
| V3 | First combat ticks | All populated flanks have valid component vectors/tactics; ship strength or morale changes without crash. |
| V4 | Friendly and hostile reinforcements arrive | Eligible fleets join exactly one side; neutral/ineligible fleets remain outside. |
| V5 | Surviving loser retreats | Combat handles clear, fleet receives a sea route, cargo remains linked, province combat later clears. |
| V6 | Empty-cargo fleet is destroyed | Fleet is removed once; no stale side, province, or manager association remains. |
| V7 | Loaded fleet is destroyed | The configured cargo rule occurs exactly once and is visible in deterministic logs. |
| V8 | Save/reload mid-battle | Object reloads as type 1 at sea, participants/flanks restore, and updates resume. |
| V9 | Save/reload after conclusion | No ghost combat, stale handle, duplicate fleet, or stuck retreat flag. |
| V10 | Split/merge/embark commands during combat | Existing restrictions remain enforced; assignment vector and component count stay aligned. |
| V11 | Identical multiplayer peers | Same battle creation, tactic sequence, casualties, retreat, RNG draw count, and no OOS. |
| V12 | Different DLL/config/content | Session is rejected or clearly reported unsupported before divergent simulation. |

Each test records combat ID, province ID, participant IDs, component counts, assignment bytes, flank GALLEYS totals, tactic/phase, morale/strength totals, RNG draw count, and association state before/after the action.

## Definition of done

Naval battles are implemented only when V0-V12 pass on the supported executable and the result is repeatable after restart. A battle merely appearing or dealing one tick of damage is a prototype, not completion.

## Limitations and integrity

This blueprint is based on static analysis. No DLL has been built, injected, or runtime-tested, and no Steam files were accessed or changed. Exact C++ calling conventions, prologue sizes, thread affinity, sea-terrain configuration, loaded GALLEYS values, and result/UI semantics still require implementation-time validation. The proxy mechanism itself must be smoke-tested independently from combat hooks.

## Next question

Should implementation begin with the guarded x64 DLL/proxy scaffold and observation-only hook layer in this workspace?
