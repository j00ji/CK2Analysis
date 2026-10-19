# Can the prototype automatically fire for hostile fleet encounters?

**Status:** implemented and offline-verified  
**Static confidence:** high for automatic admission and guards; runtime confidence remains unestablished  
**New Ghidra queries:** 0

## Evidence

| Address / ID | Saved artifact path | Direct observation | Confidence |
|---|---|---|---|
| `0x1403bb5d0` | [automatic hook](../native/src/hooks.cpp) | With `[prototype] manual_creation=1`, every readable navy+sea admission scans all co-located units and invokes the existing factory only when `0x140b99d90` accepts an opponent. No keyboard or external event gates the path. | High for source data flow |
| `0x1403bc270` | [automatic hook](../native/src/hooks.cpp) | Factory invocation remains guarded by absent live combat on the province and arriving fleet. The return state is logged before the detour reports type 1. | High for source data flow |
| `0x1403a6300` | [update guard](../native/src/hooks.cpp) | Recognized type-1 combats in sea provinces remain frozen before update/completion. | High statically |
| target guard | [verifier](../native/tests/verify_main.cpp) | The copied executable passed the pinned SHA-256 and four hook-prologue checks after rebuilding. | High |

## Interpretation

The external trigger was test scaffolding and has been removed. Empty or ineligible sea arrivals now fall through to CK2 unchanged; an eligible hostile pair automatically reaches the construction attempt. The existing INI key remains the explicit opt-in so observation-only behavior is still the default.

The rebuilt `ck2_naval.dll` SHA-256 is `afbfc65e0cded09370bd38ac86fe2378997bf242b3333667c0935dc5a4bc7adc`.

## Limitations and integrity

This enables all qualifying fleet encounters globally during a test session, not just the visible player pair. Construction, UI registration, and participant attachment are still runtime hypotheses, and all recognized naval combats remain deliberately frozen. Testing must use a disposable non-Ironman session without saving. No CK2 executable or Steam file was modified by the agent.

## Next question

Does the automatic prototype invoke `0x1403bc270` and register live combat controls when two hostile fleets meet at sea?
