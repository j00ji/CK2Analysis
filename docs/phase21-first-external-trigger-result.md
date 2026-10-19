# Why did the first external-trigger test show no naval battle UI?

**Status:** resolved; factory was never called  
**Static/runtime confidence:** high  
**New Ghidra queries:** 0

## Evidence

| Address / ID | Saved artifact path | Direct observation | Confidence |
|---|---|---|---|
| runtime attempts | [copied runtime log](../logs/ck2_naval.log) | At `14:12:56` the trigger reached a navy+sea admission but found `units=1 navies=0`; at `14:14:14` it found `units=0`. There is no factory-request, factory-return, or freeze entry. | High |
| `0x1403bb5d0` | [saved decompilation](../artifacts/phase2/functions/1403bb5d0.c) | The stock province loop passes every candidate directly to `0x140b99d90`; it does not first require one concrete fleet vtable. | High |
| prototype scan | [corrected hook](../native/src/hooks.cpp) | The prototype's extra exact-vtable rejection was removed. Exact type and live-control results remain diagnostics, while the stock predicate now decides eligibility for every candidate. | High for source data flow |

## Interpretation

No UI appeared because combat construction was not attempted. The named trigger worked, but the prototype rejected the only candidate before consulting CK2's own eligibility predicate. The corrected build mirrors the stock scan and logs the result of that predicate per candidate.

The rebuilt `ck2_naval.dll` SHA-256 is `d0fa19d15a6df6fd9ee721ae7d6f6b20e88ceda19a3104e444d95ec53ae8f5aa`. The pinned executable passed the offline hash and four-signature verifier.

## Limitations and integrity

The candidate may still be an embarked army rather than the stationary fleet, and the global one-shot request may be consumed by an unrelated navy arrival. Factory construction and UI behavior remain untested. No CK2 executable or Steam file was modified by the agent.

## Next question

Will the corrected all-candidate predicate scan accept the co-located fleet and invoke `0x1403bc270`?
