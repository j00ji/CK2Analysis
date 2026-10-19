# Interrupt cargo movement at battle start; bound AI avoidance trace

**Status:** cancellation built, runtime test pending; AI avoidance point unresolved  
**New Ghidra queries:** 3

## Ongoing disembark routes

CK2's `0x140ba15e0(unit, force)` is the movement-cancellation routine. With
`force=1` it clears the route unconditionally; the normal UI command calls it
with `force=0`, which preserves the halfway-lock behavior. The naval combat
creation path now walks both participants' embarked-army lists at `+0x230` and
force-cancels only carried armies with a nonempty route. It runs only after the
factory has produced a live province combat, leaving non-combat orders alone.
No army is detached, and the general unload helper is unchanged.

Confidence is high for the cancellation semantics from the saved decompilation
and medium for the runtime timing/interaction with cargo movement. CK2 runtime
testing is required.

## AI route selection

New query [candidate routine](../artifacts/p36-ai-candidate-generator.json)
shows `0x140bab530` processing a candidate list and constructing decisions via
`0x140baeac0` / `0x140bad820`. The first helper checks two candidate-side
eligibility/state callbacks and a policy-dependent relation test; the second
builds a candidate result. This alone does **not** prove it chooses fleet
movement routes. Its caller `0x1402921c0` builds a candidate/request object and
calls this routine, but its role is still generic rather than demonstrably
naval. There is no direct `0x140b9cdc0` call in this body and no
visible comparison of relative fleet strength. The earlier AI report's
candidate-list link remains unconfirmed as the right avoidance boundary.

Do not add a blanket weak-fleet filter at battle admission: that prevents the
battles the user explicitly wants. Safe avoidance requires a verified AI-only
route-selection hook before a fleet commits to entering hostile sea.

## Verification

MSBuild RelWithDebInfo succeeded. Offline verifier accepted the supported
executable and all eight guarded hook signatures. DLL SHA-256:
`15420d7ba1ba8087bb5d4b6607803b66b0213ac43e4b674b3ee2fdf774b9ef8b`.
Runtime cargo interruption and AI behavior remain untested.

## Next question

Can you test whether an already-moving embarked army stops as soon as its fleet
enters naval combat, without leaving the fleet?
