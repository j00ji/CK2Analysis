# Did CK2 successfully construct and register automatic fleet-versus-fleet combats?

**Status:** resolved; runtime construction succeeded  
**Runtime confidence:** high  
**New Ghidra queries:** 0

## Evidence

| Address / ID | Saved artifact path | Direct observation | Confidence |
|---|---|---|---|
| factory `0x1403bc270` | [runtime log](../logs/ck2_naval.log) | At 14:37:44, `0x140b99d90` accepted an exact fleet candidate; factory return reported `province_live=1 attacker_live=1 defender_live=1 readable=1`. A second combat was constructed at 14:38:45. | High |
| update `0x1403a6300` | [guard hook](../native/src/hooks.cpp), [runtime log](../logs/ck2_naval.log) | Repeated `prototype freeze` entries begin immediately after construction. The hook returns before the stock update, so phase counters, tactic selection, damage, and completion cannot advance. | High |
| center flank | [assignment notes](phase4-assignment-notes.md) | Existing fleet component insertion assigns the first component to index 1 when the center is empty; type-1 side insertion consumes that assignment directly. A one-component fleet therefore appears only in the middle flank. | High for observed static path |
| commanders | [assignment notes](phase4-assignment-notes.md) | Fleet construction initializes three shared leader pointers to sentinel objects. Combat-side insertion installs a leader only when the corresponding pointer passes suitability checks. No commander is therefore expected for ordinary fleets. | High for structure; runtime UI corroborates absence |

## Interpretation

This is the first direct proof that CK2's existing type-1 factory can allocate, attach two fleets, bind the sea province, and expose battle UI. The permanent skirmish is deliberate prototype behavior, not an engine failure. Center-only and commanderless presentation follow the fleets' existing assignment and leader state.

## Limitations and integrity

The test has not exercised phase/tactic changes, ship statistics, casualties, morale, participant removal, completion, retreat, results, or saving. At least two automatic battles were created globally. Testing must remain disposable and unsaved.

## Next question

Can the stock update be enabled while separately blocking naval completion and aftermath, allowing phase, tactic, and damage validation without invoking land cleanup?
