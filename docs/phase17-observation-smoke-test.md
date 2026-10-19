# Did the observation-only runtime smoke test pass?

**Status:** resolved
**Static confidence:** high for recorded runtime events
**New Ghidra queries:** 0

## Evidence
| Address / ID | Saved artifact path | Direct observation | Confidence |
|---|---|---|---|
| proxy/core startup | [runtime log](../logs/ck2_naval.log) | Logger initialized; the exact executable/version guard passed; all three observation hooks installed; no failure, rejection, mismatch, or access-violation line was emitted. | High |
| `0x1403bb1a0` existing-combat arrival | [runtime log](../logs/ck2_naval.log) | 576 calls were logged, all readable. Of these, 115 were navy+sea and all returned zero. | High |
| `0x1403bb5d0` new-encounter admission | [runtime log](../logs/ck2_naval.log) | 576 calls were logged, all readable. The same 115 navy+sea observations all returned zero. | High |
| `0x1403a53c0` type-1 reinforcement | [runtime log](../logs/ck2_naval.log) | 30 calls were logged, all readable: 25 ordinary land/type-1 admissions had low-byte result 1, four had result 0, and one navy offered to a land/type-1 combat had low-byte result 0. | High for low-byte behavior |
| observation continuity | [runtime log](../logs/ck2_naval.log) | Final recorded call counters reached 4,340 existing-arrival and 4,249 new-admission calls on the game thread, demonstrating sustained detour/trampoline operation rather than startup-only success. | High |

## Interpretation
The smoke test passed. The proxy loaded the core, runtime hashing and signature checks accepted the analyzed build, MinHook detours remained active, pointer probes were readable, and original land behavior continued through the trampolines. Most importantly, live navy arrivals in live sea provinces reached both stock admission functions and were rejected with result zero, directly corroborating the static gates.

The original reinforcement logger printed the full `RAX`; one navy rejection preserved unspecified pointer-like upper bits while its meaningful low byte was zero. Source now logs `result_al` and `raw_rax` separately while still returning the complete register unchanged. The rebuilt core SHA-256 is `98e8883e56fe3fab8f7484ae2a27c08787caaf5c89f36bfd905250360d47f058`; its offline verifier passes, but this corrected build has not yet been runtime-tested.

## Limitations and integrity
The test observed stock behavior only. It did not create naval combat, mutate side membership, save during combat, or test multiplayer. The user performed installation and game execution; the agent did not access the Steam directory or launch CK2.

## Next question
Should implementation proceed to a guarded manual naval-combat creation prototype before enabling automatic fleet encounters?
