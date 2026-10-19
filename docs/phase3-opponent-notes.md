# Phase 3 opponent eligibility notes

Follow-up: the finalizer's longer decompilation retry succeeded in [p3-conclusion-extended.json](../artifacts/p3-conclusion-extended.json). The bounded instruction-only review near the end of this note records the earlier timeout state; [conclusion notes](phase3-conclusion-notes.md) contain the subsequent result and cleanup evidence.

Static local investigation, 2026-10-17. Target SHA-256 `cc2d65b51d9099b3d632fe3269fa647aaf7c00fcb00cc0240adbaa8e6bbbb75e`. No binary modification or target execution. Addresses are preferred virtual addresses; descriptive role labels below are analyst interpretations.

Primary evidence: [initiation export](../artifacts/p3-initiation.json), [opponent predicate pseudocode](../artifacts/phase3/functions/140b99d90.c), [prior arrival boundary](../artifacts/p2-command-combat-boundary.json), and [movement/occupancy notes](phase2-movement-notes.md). `0x140b99d90` has a complete instruction export, successful decompilation, body `0x140b99d90..0x140b9a342`, and no truncated incoming-reference list. Direct Ghidra exports have no REA Evidence IDs.

## Findings and confidence

The `0x140b99d90(unitA, unitB, flag3, flag4)` predicate participates in the normal opponent scan in `0x1403bb5d0`, which calls it with both flags zero at `0x1403bb663`. **High confidence:** this lower-level predicate contains type and terrain rules compatible with navy-versus-navy comparisons at sea, and the final reciprocal restriction helpers contain no explicit navy rejection or derived army-carrier access. **Not yet established:** that a concrete fleet pair's owner/configuration values satisfy every helper, that a normal game caller permits fleets to reach battle creation, or that combat update objects support them. Prior arrival code explicitly excludes fleets before this predicate is called.

The routine does not itself require `unitA->province == unitB->province`. Its normal arrival caller provides locality by enumerating the arriving province's occupancy list. It tests terrain for unit A only. Other callers must be examined before assuming their input locality or flag meanings.

## Conditions in observed order

1. Reject identical unit pointers.
2. Resolve cached owners through unit `+0x168/+0x170`. When owner A's flag byte `+0x1e9` has bit 1 set, reject equal owner pointers. The owner flag's precise meaning is unresolved; do not simplify this into an unconditional equal-owner rejection.
3. Obtain each unit's combat handle through `0x140b99ce0`. If both handles have live control structures, resolve them through `0x1403b96b0` and reject different resulting object pointers. If either lacks that state, continue. The helper reads below establish shared/weak-style lifetime semantics.
4. Unless flag 4 is nonzero, reject either unit whose signed 32-bit `+0xb4` is positive. Its enum meaning remains unresolved.
5. Unless flag 3 is nonzero, reject an army-like unit on either side whose converted object's carrier field `+0x230` is non-null. This routine converts through virtual `+0x48`, whereas other inspected mutating army paths use `+0x50`; do not silently conflate those vtable entries.
6. Reject mixed army-like/navy-like types in either direction, regardless of either flag.
7. Unless flag 3 is nonzero, require unit A's army-like type to be in a land-like province and unit A's navy-like type to be in a sea-like province. The classification is the byte at `*(unitA->province+0xf0)+0x64`, nonzero for land-like.
8. Substitute each unit's followed leader at `+0x1c0` when non-null and located in the same province as that respective unit. Otherwise use the unit itself. Unless flag 4 is nonzero, reject positive `+0xb4` on either selected representative.
9. Evaluate owner relations using `0x14025d050`, taking the first byte output. At least one of three comparisons must produce true: representative A owner versus representative B owner; representative A owner versus original B owner; representative B owner versus original A owner. Calls short-circuit after the first true comparison.
10. Require `0x140b9a350(originalA, originalB.owner)` and the reciprocal `0x140b9a350(originalB, originalA.owner)` both true, then return true. The helper's remaining owner/configuration restrictions are described below.

The interface is logically boolean in AL. Some early decompiler return expressions retain unspecified upper RAX bits, so treating the displayed `ulonglong` return as a full-width integer status would be incorrect.

## Type and terrain matrix

This table addresses the explicit type/terrain gates only, with flag 3 zero. Owner, active combat, state, and final helper filters still apply.

| Unit A | Unit B | A's province | Explicit type/terrain gate |
|---|---|---|---|
| Army | Army | Land | Passes these gates if neither carried |
| Army | Army | Sea | Rejected |
| Navy | Navy | Sea | Passes these gates |
| Navy | Navy | Land/port | Rejected |
| Army | Navy | Either | Rejected |
| Navy | Army | Either | Rejected |

Flag 3 bypasses carriage and A's terrain restrictions, but does not bypass mixed-type restrictions. Flag 4 bypasses the `+0xb4` tests on both originals and co-located representatives; it does not bypass the other restrictions. Actual source parameter names are unknown.

## Selected faithful pseudocode

The following is a condensed transcription of the explicit gates and relation checks, not a recovered source declaration. Helpers and names are descriptive; detailed owner-resolution/reference-counting code is omitted.

```c
if (A == B) return false;
if (ownerA_flag_bit1 && ownerA == ownerB) return false;
if (bothCombatHandlesLive && resolvedCombatA != resolvedCombatB) return false;
if (!flag4 && (A->state_b4 > 0 || B->state_b4 > 0)) return false;
if (!flag3 && ((isArmy(A) && armyConst(A)->carrier) ||
               (isArmy(B) && armyConst(B)->carrier))) return false;
if ((isArmy(A) && isNavy(B)) || (isArmy(B) && isNavy(A))) return false;
if (!flag3 && ((isArmy(A) && !landLike(A->province)) ||
               (isNavy(A) && landLike(A->province)))) return false;
repA = A->leader && A->leader->province == A->province ? A->leader : A;
repB = B->leader && B->leader->province == B->province ? B->leader : B;
if (!flag4 && (repA->state_b4 > 0 || repB->state_b4 > 0)) return false;
if (!(relationFirstOutput(repA->owner, repB->owner) ||
      relationFirstOutput(repA->owner, B->owner) ||
      relationFirstOutput(repB->owner, A->owner))) return false;
return FUN_140b9a350(A, B->owner) && FUN_140b9a350(B, A->owner);
```

## Instruction anchors

| Claim | Addresses |
|---|---|
| Combat handle acquisition | `0x140b99e4f`, `0x140b99eac` call `0x140b99ce0` |
| Handle resolution when both active | `0x140b99f30`, `0x140b99f40` call `0x1403b96b0` |
| Original `+0xb4` state gates | `0x140b99fcc`, `0x140b99fd9`, positive branches to false |
| Army A carrier gate | `0x140b99ff1` virtual `+0x68`; `0x140b99ffe` virtual `+0x48`; `0x140b9a001` compares `+0x230` |
| Army B carrier gate | `0x140b9a015`, `0x140b9a022`, `0x140b9a025` |
| Mixed A-army/B-navy gate | `0x140b9a039` and `0x140b9a046`; reject at `0x140b9a04b` |
| Mixed B-army/A-navy gate | `0x140b9a057` and `0x140b9a064`; reject at `0x140b9a069` |
| A-army terrain | Classification compare `0x140b9a08f`, reject zero `0x140b9a093` |
| A-navy terrain | Classification compare `0x140b9a0b4`, reject nonzero `0x140b9a0b8` |
| Representative A selection | Leader load `0x140b9a0be`, province compare `0x140b9a0d1` |
| Representative B selection | Leader load `0x140b9a0dd`, province compare `0x140b9a0f0` |
| Representative `+0xb4` checks | `0x140b9a102`, `0x140b9a110` |
| Three relation calls | `0x140b9a1a4`, `0x140b9a201`, `0x140b9a25a` |
| Reciprocal final restrictions | `0x140b9a2a2`, `0x140b9a2e4` call `0x140b9a350` |

## Why the lower-level naval checks do not enable naval battles

The previously traced normal arrival function `0x1403bc0c0` calls `0x1403bb1a0` and then, on zero, `0x1403bb5d0`. The former rejects non-armies and carried armies. The latter rejects navy-like units at virtual call `0x1403bb5e8` and zero-return sequence `0x1403bb5ef`; it rejects sea-like destinations at `0x1403bb614/0x1403bb618`. Its occupancy scan and call to this opponent predicate occur afterward.

There is therefore a concrete separation between a general-looking opponent predicate and a restricted normal encounter-initiation path. Reusing the predicate might be worth investigating, but removing a gate would not establish compatible battle allocation, troop categories, morale/casualty logic, retreat, UI, saving, or ownership handling. No patch is proposed.

## Follow-up helper evidence

Evidence: [construction/relations export](../artifacts/p3-construction-relations.json) and [battle lifecycle export](../artifacts/p3-battle-lifecycle.json). The four helper decompilations discussed here completed, with full instruction exports.

### Combat object and control-block pair

`0x140b99ce0(unit, output)` delegates to `0x1403b96b0` using `unit+0x60` as the input pair and returns output. The latter first clears output object and control pointers. From input it reads an object pointer at `+0` and control pointer at `+8`; if the control pointer is non-null, it uses an interlocked compare/exchange loop to increment the 32-bit control count at `+8` only while nonzero. On success it installs the object/control pair through `0x14026d370`.

This strongly establishes a weak-to-strong locking operation rather than a list traversal. Unit `+0x60` is the associated combat object pointer and `+0x68` is its lifetime control-block pointer. A nonzero `*(int *)(unit->field_68+8)` means a live strong-reference count, **not** a count of battles or participating units. The opponent predicate increments control `+0xc` for retained weak-like copies and later locks them before comparing the associated combat pointers. C++ standard-library class names were not recovered; these are semantics inferred from the exact reference-count operations.

### Reciprocal owner restriction `0x140b9a350`

The function calls `0x140b9a450(unit)` and tests the returned object's virtual `+0x30`. If that returns true and the object equals opposing-owner `+0x168`, it resolves an owner hierarchy/configuration object and returns false only when both configuration bytes `+0x394` and `+0x395` are zero. All other paths return true. There is no direct army cast, troop-field access, or navy rejection in this body.

The final [damage/registry export](../artifacts/p3-damage-registry.json) includes [helper `0x140b9a450`](../artifacts/phase3/functions/140b9a450.c). It iterates the common unit component list at `+0x38` using node payload `+0` and next `+0x10`. For each component, it follows component `+0x28` and `+0x88`, resolves an associated owner, and tests configuration bit `0x40` at `+0x9d3`. A qualifying different owner/hierarchy case supplies that owner's `+0x168` object. Otherwise it uses the default `DAT_1416e39f8`. The loop returns a candidate when its virtual `+0x30` is false, or returns the last/default candidate at list end. This helper has no army/navy type gate and no derived army `+0x230` access. The shared-component path is structurally compatible with the fleet representation found in Phase 2; exact faction/configuration labels and runtime candidate values remain unknown. This resolves the specific missing callee, not complete battle compatibility.

### Relation output `0x14025d050`

This function sets output 2 and the integer output to zero at entry. It returns first-output false for several early conditions, including equal owner pointers, missing owner-side state, and a missing flag bit on the second owner. It traverses owner `+0x1a8` hierarchy links, applies configuration conditions, and then uses multiple relation paths.

The first output can become true directly when derived configuration classifications differ (`+0x394/+0x395` boolean class or bit `0x40` at `+0x9d2`). Otherwise it can become true from a condition involving `0x140251570`, or sequentially through `0x14025c100`, `0x14025c780`, and `0x14025c920`. A success through `0x14025c100` sets the integer output to 2; success through `0x14025c920` sets it to 1. Other output and return-pointer semantics remain unresolved. A hierarchy-related early path can call `0x14025c780` when separate configuration/global flags permit it.

Given its use in the opponent predicate, first output is strongly associated with hostility/combat eligibility. Its derivation demonstrates it should not be relabeled a simple formal-war boolean without tracing the underlying relation helpers. Exact faction, religion, raiding, revolt, and hierarchy terminology is deliberately not assigned to unknown fields.

## Remaining precise questions

1. Identify configuration/owner object types behind `0x140b9a450` if concrete fleet eligibility scenarios are needed; its structural gate behavior is now inspected.
2. `0x14025c100`, `0x14025c780`, `0x14025c920`, and `0x140251570`: distinguish underlying hostility cases without assuming equality with formal war status. This is a deeper owner-relations investigation, not required to identify the normal arrival guards.
3. Trace writes/clear operations on unit `+0x60/+0x68` through participant admission and battle conclusion, now that the lifetime-control distinction is established.
4. Other direct callers: `0x1403a1de0` (call at `0x1403a1e20`), `0x1403b8530` (`0x1403b86b0`), and `0x140951ec0` (`0x1409521fd`, `0x1409525eb`). Recover their flags and locality assumptions before generalizing.

## Bounded conclusion-function instruction review

Supplementary independent review: [side/conclusion export](../artifacts/p3-side-conclusion.json), function `0x1403ad020`, analyzed range `0x1403ad020..0x1403b20f9`. Its first decompilation timed out; the instruction export is complete. This section records only instruction-level observations and does not substitute guessed pseudocode for the failed decompilation.

The entry returns early when global `+0x62a` is zero or first-argument `+0x50` is already nonzero. It sets that byte to 1 at `0x1403ad093`. Virtual `+0x60` returning type 3 takes a separate late branch; for other types, both sides' `+0x40` counts must be nonzero to enter the larger outcome/presentation path. These are observed gates, not a complete conclusion-state model.

Useful direct-call candidates:

| Callsite | Callee | Actual nearby evidence / inference |
|---|---|---|
| `0x1403adf36`, `0x1403adf61` | `0x1403ac770` | RCX points respectively to `battle_won` and `battle_lost`; outcome-event candidate |
| `0x1403af89e`, `0x1403afe47` | `0x140b9aa40` | RCX is a side-list unit; other four arguments zero; return multiplied by 1000 and used in ratios. Count/contribution candidate, not identified as cleanup |
| `0x1403b1417`, `0x1403b1441` | `0x1403ab680` | Receives side-related records and string buffers including `Enemy`; presentation candidate |
| `0x1403b176e` | `0x1403b6480` | Return fed into UI text-setting `0x140c58b10` then string destruction; formatting candidate |
| `0x1403b20c7` | `0x1403b2100` | Reached from branch checking virtual type 3; separate type-3 conclusion candidate |

The last portion constructs/updates `EndOfCombatDialog` UI elements and `winORLose` / `VICTORY` / `DEFEAT` text, corroborated by addresses in [raw strings](../artifacts/pe-strings.tsv). The virtual `+0x70` call at `0x1403b1ec7` uses RDI previously assigned the result of a UI lookup at `0x1403b1d85`; it must not be labeled battle-state cleanup merely because of its position near the function end. The later virtual deleting-destructor-like call at `0x1403b207e` similarly needs object provenance before interpretation. The bounded tail review did not identify a direct combat-membership clear operation. The parent's longer decompilation retry and separate lifecycle routines are needed for a verified cleanup sequence.
