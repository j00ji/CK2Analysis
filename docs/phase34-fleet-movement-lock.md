# Can the army halfway movement lock be shared with fleets?

**Status:** fleet predicate extension built; icon awaits runtime check  
**Confidence:** high for threshold and movement fields; medium for UI result  
**New Ghidra queries:** 0

## Finding

The saved implementation at `0x140ba1ff0` gates on the global lock setting,
army type, a nonempty route, and whether `movement_progress * 1000 / next_edge
cost > 500`. Shared fields and edge-cost helper `0x140ba2760` also support
navies. The new detour keeps the original function for non-fleets and computes
the same test for fleets using their next route province.

This predicate is called by movement cancellation and several UI/command
eligibility paths, including `0x140ba15e0`, `0x140ba1800`, `0x140ba8980`, and
`0x140bd5c40`. Returning the same halfway result should produce CK2's normal
lock behavior for fleet cancellation. Whether the little map lock graphic is
driven by one of these callers still needs runtime confirmation.

## Cargo and AI notes from existing evidence

Combat casualty cleanup `0x1403a8bb0` sends zero-strength units to generic
removal `0x140786dc0`; the latter recursively removes a destroyed navy's
embarked armies. Thus a fleet destroyed by reaching zero combat strength takes
its cargo with it. The naval retreat branch handles fleets that remain after
combat and leaves their cargo aboard.

The saved evidence proves `CanLoad` rejects a navy with active combat at
`0x140ba7980`, but it does not establish whether the separate disembark command
can unload an army during fleet combat. AI avoidance of stronger fleets also
remains unresolved; route selection needs a separate trace.

## Build and test

RelWithDebInfo DLL SHA-256:
`73c830ce2a9cf4a25dd8bcc60195266a3013b266851402bf535d95b7d9eb256e`.
The offline verifier accepted the executable hash and all seven hook
signatures. Runtime-test a fleet move past halfway, check for the lock graphic,
and issue cancel once before arrival. Use a disposable unsaved save.

## Next question

Can the candidate-list caller `0x140bab530` be confirmed as the AI fleet route
selector so weak fleets can avoid stronger hostile fleets before moving?
