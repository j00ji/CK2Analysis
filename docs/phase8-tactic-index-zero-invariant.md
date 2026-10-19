# What guarantees that tactic index 0 is a valid fallback?

**Status:** partial  
**Static confidence:** high that index 0 is an unchecked engine/content invariant; unresolved which loader stage establishes it  
**New Ghidra queries:** 3

## Evidence
| Address / ID | Saved artifact path | Direct observation | Confidence |
|---|---|---|---|
| `0x14039bd90` | `artifacts/p4-constructor-navy-insertion-listing.json` | Flank construction reads the master tactic vector at manager `+0x20`, dereferences its first pointer, and stores it at flank `+0xa8`; there is no empty-vector check. | High |
| `0x14039cf80` / `0x140c41f80` | `artifacts/p3-damage-writers-manager.json`, `artifacts/p7-tactic-weight-choice.json` | Selection passes fallback index 0 to weighted choice and immediately indexes one of the vectors at manager `+0x38/+0x50/+0x68`; no count check protects the dereference. | High |
| `0x14039bf20` | `artifacts/phase4/functions/14039bf20.c` | Loading an invalid saved tactic index falls back to the first entry of the master vector at manager `+0x20`, again without checking emptiness. | High |
| `0x14080eae0`, table `0x1410defa0` | `artifacts/p8-load-combat-tactics-task-constructor.json`, `artifacts/p8-load-combat-tactics-task-vtable.json` | A concrete `LoadCombatTacticsTask` exists. Its first derived callback `0x14080e5b0` is broader initialization and did not expose tactic-vector population. | High for task identity; population unresolved |

## Interpretation

No local runtime guard guarantees the fallback. Three independent consumers assume that content initialization has produced a nonempty master tactic vector and nonempty applicable tactic vectors, with element 0 safe to use. Thus “index 0” is not a distinguished hard-coded naval/default tactic; it is the first loaded entry under an upstream ordering/insertion contract. All-zero eligibility weights remain memory-safe only while that contract holds.

This is evidence of an engine invariant, not yet proof of how stock data satisfies it. A DLL extension should not depend blindly on load order: it should validate vector count and either provide a known naval fallback or bypass the land selector.

## Limitations and integrity

Static analysis only. The copied executable hash was verified by the bounded pointer-table reader; CK2 and the Steam installation were not run or modified. Installed tactic definitions were not inspected. The three-query limit stopped before the remaining task callbacks could be classified.

## Next question

Which `LoadCombatTacticsTask` callback populates manager vectors `+0x20/+0x38/+0x50/+0x68`, and does it explicitly insert a default tactic first?
