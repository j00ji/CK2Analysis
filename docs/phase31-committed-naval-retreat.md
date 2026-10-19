# Can the losing fleet be forced out without using CK2's land retreat selector?

**Status:** prototype implemented and offline-verified  
**Confidence:** medium-high for the engine contracts; runtime behavior untested  
**New Ghidra queries:** 0

The RelWithDebInfo build passed the executable hash and all six hook-signature
checks. `ck2_naval.dll` SHA-256:
`66135cfa4d85f1e84bb0a5caf2e2ead06bc05d47ec7857a81923bf8a9599b92f`.

## Finding

The refreshed runtime log shows that naval completion and the stock result
finalizer are firing. The stationary loser is caused by the deliberate
`0x1403a2150` guard, and the completed-pair suppression can consequently make a
co-located rematch look like a battle that failed to start. Other skipped
encounters with `free_exact_navies > 0` and `eligible=0` are genuine rejections
by the stock opponent predicate `0x140b99d90`.

In the latest log session there are 12 successful creations, 12 completions,
and 12 guarded loser-handler calls. There are also 51 scans with at least one
free exact fleet but `eligible=0`, plus 9 admissions refused because a live
combat already occupied the province.

The guarded naval branch now snapshots exact fleets from the losing side,
detaches the side through `0x1403a2f60`, and submits movement to each fleet's
recorded previous province through the navy-aware request function
`0x140b9cdc0`. It sets unit state `+0xb4` to 2 before submission. Arrival logic
at `0x140ba2870` clears that state, so the forced retreat is committed while in
transit without leaving a permanent lock after a successful arrival.

## Limitations

The previous province is a practical engine-owned destination but is not yet a
full adjacent-sea retreat selector. A fleet with no distinct recorded previous
province is detached but left in place and logged as `missing_previous`. This
prototype also sets the observed post-command state directly instead of
reproducing command `0x32d3`; multiplayer synchronization is therefore outside
scope. Use only a disposable, unsaved single-player test.

## Next question

Does runtime confirm that the losing fleet receives a route, cannot cancel it,
leaves the battle province, and becomes controllable again on arrival?
