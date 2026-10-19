# Can the naval victory screen receive winner/loser data without applying land loser handling?

**Status:** prototype implemented and offline-verified  
**Confidence:** high for guarded call flow; runtime result behavior untested  
**New Ghidra queries:** 0

## Evidence

| Address / ID | Saved artifact path | Direct observation | Confidence |
|---|---|---|---|
| runtime neutral result | [runtime log](../logs/ck2_naval.log), [runtime report](phase29-neutral-completion-runtime.md) | Naval damage persists, losing fleets remain selectable, and neutral completion cleans up promptly, but the displayed victory screen lacks winner/loser identity. | High |
| result finalizer `0x1403ad020` | [saved finalizer](../artifacts/phase3/functions/1403ad020.c), [conclusion notes](phase3-conclusion-notes.md) | Stock completion constructs a `0x148`-byte result with outcome, combat handle, province, side summaries, and winner/loser presentation data. | High statically |
| loser handling `0x1403a2150` | [saved function](../artifacts/phase3/functions/1403a2150.c), [new guard](../native/src/hooks.cpp) | The sixth hook suppresses land retreat/destruction only while the naval completion trampoline synchronously invokes the stock finalizer. All other loser-handling calls pass through. | High for source control flow |
| version guard | [signatures](../native/include/ck2naval/addresses.hpp), [verifier](../native/tests/verify_main.cpp) | The loser-handler prologue is a sixth pinned 16-byte signature. The copied executable passed its SHA-256 and all six signature checks. | High |

## Interpretation

The result-aware prototype calls the original terminal function only after the naval side-exhaustion test succeeds. CK2 can therefore populate its normal result object and UI, while the defeated fleet bypasses the unsafe land destination/removal path. Manager neutral cleanup and same-pair suppression remain active.

The rebuilt `ck2_naval.dll` SHA-256 is `b757a36ced84804fb262dd82ead147be76b6f11461e8ff685aae8f95efe64f24`.

## Limitations and integrity

The stock result finalizer is land-semantic. It may emit `battle_won`/`battle_lost`, owner events, land notification keys, warscore, prestige, piety, or relationship history. It may also depend on commander data absent from fleets. This build is strictly for a disposable unsaved test; a final mod needs a dedicated naval result layer.

## Next question

Does the result-aware runtime show the correct winner and loser while logging the naval loser guard and preserving both damaged fleet objects?
