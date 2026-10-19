# Why did the updated naval battle not end, and can it now terminate safely?

**Status:** cause confirmed; neutral-completion prototype implemented and offline-verified  
**Confidence:** high for the observed cause and static cleanup path; runtime completion untested  
**New Ghidra queries:** 0

## Evidence

| Address / ID | Saved artifact path | Direct observation | Confidence |
|---|---|---|---|
| latest runtime session | [runtime log](../logs/ck2_naval.log) | The 15:31 session constructed a live naval combat, ran type-1 updates, and reached the completion detour repeatedly. Each call was forced to return zero, so no terminal test or manager cleanup could occur. | High |
| completion `0x1403b7360` | [saved function](../artifacts/phase3/functions/1403b7360.c), [new hook](../native/src/hooks.cpp) | The new naval branch mirrors the proven three-flank/nonzero-eight-category continuation test through side aggregate `0x1403a3bf0`. Ongoing battles return zero; an exhausted side returns one without invoking land results or loser handling. | High statically |
| manager cleanup `0x1403bd500` | [saved function](../artifacts/phase3/functions/1403bd500.c), [cleanup notes](phase3-conclusion-notes.md) | A completed combat is neutrally detached through `0x1403aa9c0`, removed from the manager, and cleared from the province and unit associations. | High statically |
| re-engagement guard | [hook](../native/src/hooks.cpp) | Creation records the two initial fleets and combat. After neutral completion, that exact pair is suppressed while both remain in the original province; separation clears the suppression. | High for source data flow |

## Interpretation

The missing ending was expected from the previous guard, not evidence that the engine failed to recognize exhaustion. The new build permits a real terminal decision and clean deregistration while deliberately omitting results, retreat, destruction, warscore, events, and rewards. Ship and morale losses already applied by the update remain.

The rebuilt `ck2_naval.dll` SHA-256 is `4f6db9ae75321eeb9da79a6c1ec92c813d8d9be26017b8cc85fa3f7e23c1feac`.

## Limitations and integrity

This is neutral cleanup, not final naval aftermath. Empty or badly damaged fleets may remain in place, cargo-capacity side effects remain possible, and suppression is process-local test state rather than serialized gameplay state. Continue using an unsaved disposable session.

## Next question

Does the terminal runtime log `prototype naval completion`, remove the battle UI, preserve both fleet objects, and avoid immediate re-creation until they separate?
