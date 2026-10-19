# Why does the current prototype require an external trigger?

**Status:** resolved  
**Confidence:** high  
**New Ghidra queries:** 0

## Evidence

| Address / ID | Saved artifact path | Direct observation | Confidence |
|---|---|---|---|
| `0x1403bb5d0` | [saved decompilation](../artifacts/phase2/functions/1403bb5d0.c) | CK2's normal encounter path returns before its opponent scan for fleets and sea provinces. No native naval-battle request therefore reaches the combat factory. | High |
| prototype gate | [hook](../native/src/hooks.cpp), [trigger](../native/src/trigger.cpp) | The opt-in named event limits mutation to one deliberately armed fleet-arrival test instead of changing every AI and player fleet arrival. | High |

## Interpretation

The trigger is test scaffolding, not part of the intended naval-combat design. It isolates one construction attempt while factory compatibility, participant attachment, UI registration, update behavior, and aftermath are still unproven. Once those invariants are validated, the arrival hook can automatically invoke naval encounter handling whenever CK2's existing opponent predicate accepts two co-located hostile fleets.

## Limitations and integrity

Automatic engagement is not yet safe because a faulty factory or lifecycle path would affect every qualifying fleet in the simulation. No runtime behavior was changed for this explanation.

## Next question

After one successful guarded construction, can the trigger be replaced with automatic hostile-fleet encounter creation?
