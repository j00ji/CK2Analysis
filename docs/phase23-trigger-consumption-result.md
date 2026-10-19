# Why did the corrected external-trigger test still create no battle?

**Status:** resolved; trigger consumed before a fleet collision  
**Runtime confidence:** high  
**New Ghidra queries:** 0

## Evidence

| Address / ID | Saved artifact path | Direct observation | Confidence |
|---|---|---|---|
| latest runtime session | [copied runtime log](../logs/ck2_naval.log) | The 14:24 session loaded the corrected log format. At 14:26:37 and 14:26:43, separate requests reached navy+sea admissions, but both scans reported `units=0`, `eligible=0`. | High |
| trigger gate | [hook](../native/src/hooks.cpp), [trigger](../native/src/trigger.cpp) | The auto-reset event is consumed before scanning the province, so an unrelated fleet entering an empty sea zone exhausts the request. | High |
| factory `0x1403bc270` | [hook](../native/src/hooks.cpp) | No factory-request, factory-return, or naval-freeze entry exists in the session. Construction was never attempted. | High |

## Interpretation

This run did not test co-located fleet eligibility or UI behavior. The trigger's scope is wrong: it currently selects the next navy arrival anywhere in the simulation, not the next arrival with an eligible hostile opponent. It should remain armed across empty/ineligible sea arrivals and clear only immediately before one eligible factory attempt.

## Limitations and integrity

Because the intended collision was not reached while armed, the log says nothing new about `0x140b99d90`, factory compatibility, or UI registration. A persistent global arm could select a different hostile fleet pair, so it should remain test-only and be cleared atomically at factory invocation.

## Next question

Should the trigger be changed to remain armed until the first eligible hostile fleet collision?
