# Did neutral naval completion clean up promptly at runtime?

**Status:** resolved; repeated terminal cleanup succeeded  
**Runtime confidence:** high  
**New Ghidra queries:** 0

## Evidence

| Address / ID | Saved artifact path | Direct observation | Confidence |
|---|---|---|---|
| naval completion | [runtime log](../logs/ck2_naval.log) | Multiple combats reached terminal state with exactly one living side, nonzero surviving strength, zero losing strength, and `remembered=1`. Both first-side and second-side losses occurred. | High |
| deferred cleanup `0x1403bd500` | [runtime log](../logs/ck2_naval.log), [saved function](../artifacts/phase3/functions/1403bd500.c) | Terminal entries at 15:46:59.605, 15:47:03.018, and 15:47:49.342 are followed by province admission scans at .606, .020, and .344 respectively: approximately 1–2 ms later. | High |
| re-engagement suppression | [hook](../native/src/hooks.cpp), [runtime log](../logs/ck2_naval.log) | Post-cleanup scans frequently see free exact navies but report `eligible=0`; every completed combat was found in the process-local record. No same-pair identity is logged, so exact pair-level attribution remains inferred. | Medium-high |

## Interpretation

The internal cleanup is not meaningfully delayed. A small visible pause is consistent with combat update cadence and the next UI refresh. The neutral path does not call stock land result finalizer `0x1403ad020`, so any apparent “victory window” is likely the battle panel showing its terminal state briefly rather than a fully generated result object.

## Limitations and integrity

The log proves terminal detection and immediate manager follow-up, but not what the user-facing window represented. It also shows many automatic battles across the world, so nearby creation timestamps are not necessarily repeat fights by the same pair. Fleet selectability, cargo preservation, and exact ship losses are not present in this log.

## Next question

After the battle panel closed, did both fleet objects remain selectable with the surviving ship counts and carried troops intact?
