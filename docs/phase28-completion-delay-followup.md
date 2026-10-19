# Is the reported short naval-victory delay expected?

**Status:** plausible but unresolved because the copied log is stale  
**Confidence:** high for scheduling explanation; no confidence on measured delay  
**New Ghidra queries:** 0

## Evidence

| Address / ID | Saved artifact path | Direct observation | Confidence |
|---|---|---|---|
| copied log | [runtime log](../logs/ck2_naval.log) | Last modified at 15:35:06 and contains only the prior completion-blocking build. It has no `prototype naval completion` entry from the neutral-cleanup build. | High |
| completion/cleanup | [manager cleanup](../artifacts/phase3/functions/1403bd500.c), [neutral hook](../native/src/hooks.cpp) | Naval exhaustion is detected during the type-1 update; returning complete lets the manager drain its deferred cleanup queue, detach associations, and then permits UI state to refresh. | High statically |

## Interpretation

A small one-update/UI-refresh delay is structurally plausible. A stock victory-result popup is not produced by the neutral hook because it bypasses land finalizer `0x1403ad020`; only battle disappearance and ordinary UI refresh are expected. The refreshed timestamps are required to distinguish update cadence from a bug.

## Limitations and integrity

No new runtime evidence was available and no code was changed. The meaning of “victory window” is ambiguous between a result popup and the battle panel closing.

## Next question

Can the latest log be recopied and the observed window identified as either a result popup or the battle panel closing?
