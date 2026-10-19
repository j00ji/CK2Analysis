# Can type-1 completion safely detach or retreat navies, or must naval aftermath be replaced?

**Status:** resolved
**Static confidence:** high for the reuse boundary; medium for every rare fallback branch
**New Ghidra queries:** 3

## Evidence
| Address / ID | Saved artifact path | Direct observation | Confidence |
|---|---|---|---|
| `0x1403a2150` | [existing decompilation](../artifacts/phase3/functions/1403a2150.c) | Iterates the defeated side, clears matching ordinary/type-3 combat handles, removes each unit from the side, then either destroys it or obtains a destination and submits retreat commands. Type-1 combat can select `0x140b9d9d0`; a missing/same destination participates in removal-oriented fallback branches. | High |
| type-1 table `0x1410902d8`, slots `+0x68/+0x70` | [existing raw table](../artifacts/phase3-combat-vtables.json), [selector query](../artifacts/p13-type1-retreat-selector.json) | Slot `+0x68` points to the unanalyzed leaf at `0x1403b75a0`; direct static bytes show it returns a global-mode predicate. Slot `+0x70` is the true stub `0x1400ae550`. Therefore `0x1403a2150` can reach the `0x140b9d9d0` selector for type 1; this is not a unit army/navy test. | High |
| `0x140b9d9d0` | [destination search](../artifacts/p13-retreat-destination-primary.json) | Performs a breadth-first search from `unit+0x80`, calling `0x140b9df00(unit, province, depth, score)` for each candidate and returning an accepted/scored province. | High |
| `0x140b9df00` | [candidate predicate](../artifacts/p13-retreat-destination-predicate.json) | Immediately rejects an ordinary candidate whose static province definition has land byte `+0x64 == 0`; only a special `unit+0x157` case at depth under two can return immediate acceptance through `0x140b95ce0`. The remainder scores land ownership/control and political relations. | High |
| `0x140b9cdc0` | [existing route installer](../artifacts/phase2/functions/140b9cdc0.c) | Explicitly recognizes navies, creates the common movement command for a navy, emits `navy_move`, and contains cargo/disembark handling. A validated naval destination can use this layer. | High |
| `0x140786dc0` | [existing conclusion notes](phase3-conclusion-notes.md) | Generic removal has a navy branch, but a removed navy with embarked units recursively removes the carried armies. | High |

## Interpretation
Neutral detachment is reusable: the combat-handle release, side-list removal, related-state cleanup, and manager cleanup are common unit machinery and do not cast the participant to an army.

Stock type-1 retreat selection is not safe to reuse wholesale for fleets. One reachable selector is explicitly land-oriented and rejects normal sea provinces, even though the later route installer can move a navy. Feeding fleets through unchanged type-1 completion therefore risks no valid destination and subsequent removal fallback rather than a legal sea retreat.

Naval aftermath should replace or interpose on destination selection and terminal disposition, while retaining the common detachment/registry cleanup and, after validating a sea destination, the existing movement-command layer. Destruction can reuse the engine remover only if the mod deliberately accepts its transported-army destruction policy. The ordinary result finalizer `0x1403ad020` also remains land-semantic and should not be assumed suitable for naval warscore, events, prisoners, or UI.

## Limitations and integrity
The alternate selector `0x140b9d430` was not newly decompiled, and rare owner/government removal predicates were not exhaustively named. That does not restore wholesale safety because type 1 demonstrably has a reachable land-only selector. No runtime test was performed. `CK2game.exe` was read only and not executed or modified. Its SHA-256 was checked as `cc2d65b51d9099b3d632fe3269fa647aaf7c00fcb00cc0240adbaa8e6bbbb75e`, matching the new query artifacts.

## Next question
What is the smallest hook boundary that preserves common detachment while substituting a sea-zone retreat destination and an explicit cargo-loss policy?
