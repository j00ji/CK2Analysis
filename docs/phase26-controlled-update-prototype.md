# Can naval combat updates run while unsafe land completion remains blocked?

**Status:** implemented and offline-verified  
**Static confidence:** high for hook placement and isolation; runtime behavior untested  
**New Ghidra queries:** 0

## Evidence

| Address / ID | Saved artifact path | Direct observation | Confidence |
|---|---|---|---|
| update `0x1403a6300` | [hook](../native/src/hooks.cpp), [saved lifecycle evidence](../artifacts/p3-battle-lifecycle.json) | The naval detour now calls the original type-1 update and logs its return, enabling stock phase, tactic, morale, and damage processing. | High for source control flow |
| completion `0x1403b7360` | [hook](../native/src/hooks.cpp), [saved lifecycle evidence](../artifacts/p3-battle-lifecycle.json) | For `type 1 + sea`, the new detour returns zero before the function can create results, select winner/loser, or call losing-side retreat/removal. Land completions call the original. | High for guarded branch; runtime untested |
| version guard | [signatures](../native/include/ck2naval/addresses.hpp), [verifier](../native/tests/verify_main.cpp) | The completion prologue is now the fifth pinned 16-byte signature. The supported copied executable passed its SHA-256 and all five signature checks. | High |

## Interpretation

The prototype has moved from construction-only to controlled simulation. It should advance combat phases and allow galley-category arithmetic while refusing the first unsafe naval completion. This is intentionally not yet a finished battle: depleted participants may remain associated because cleanup is blocked.

The rebuilt `ck2_naval.dll` SHA-256 is `1f37c6c5f2ea1318436b655bea2bba24a331da175a09b7128b342caff0293e9c`.

Multi-flank fleet presentation is a later representation task. Existing fleets often contain one ship component whose assignment byte is center. Transported armies are distinct carried unit objects and must not simply be attached to the naval battle, which could create double associations and unsafe army casualties. Future cog/galley/galleass distinctions should be designed after the single existing GALLEYS category completes a safe lifecycle.

## Limitations and integrity

Update-side participant exhaustion/removal occurs before completion and remains runtime-unvalidated. Actual loaded galley coefficients may produce zero or extreme effects. Tactics may remain phase-incompatible. Use only a disposable non-Ironman game, do not save, and exit immediately on fleet disappearance, cargo changes, or instability.

## Next question

Does the controlled-update runtime advance phases and tactics, change galley strength or morale, and reach the naval completion guard without corrupting fleet or cargo state?
