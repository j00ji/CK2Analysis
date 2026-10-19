# Is the guarded manual naval-combat creation prototype ready for runtime testing?

**Status:** resolved for build and offline validation
**Static confidence:** medium-high
**New Ghidra queries:** 0

## Evidence
| Address / ID | Saved artifact path | Direct observation | Confidence |
|---|---|---|---|
| `0x1403bb5d0` | [prototype hook](../native/src/hooks.cpp) | With INI opt-in and an F10 edge, a navy+sea call scans `province+0xcc0`, requires a second unassociated navy accepted by `0x140b99d90`, then invokes `0x1403bc270` with type 1 and modifier `0xffffffff`. | High for source data flow |
| `0x1403bc270` | [existing factory](../artifacts/phase3/functions/1403bc270.c) | Type 1 allocates the existing `0x98`-byte combat, initializes sides, attaches initial participants, registers the object, and binds the province. | High statically; sea runtime untested |
| `0x1403a6300` | [update decompilation](../artifacts/phase3/functions/1403a6300.c), [guard hook](../native/src/hooks.cpp) | The function normally advances combat and calls completion virtual `+0x88`. The prototype returns zero before it only for derived `type 1 + sea` identity, freezing damage and preventing stock land aftermath. | High for guard predicate and return path; runtime untested |
| configuration | [default INI](../native/ck2_naval.ini), [core loader](../native/src/core.cpp) | Mutation defaults off and activates only when `[prototype] manual_creation=1` is present beside the core DLL. | High |
| hook/version guard | [address/signature table](../native/include/ck2naval/addresses.hpp), [verifier](../native/tests/verify_main.cpp) | The fourth 16-byte prologue signature at `0x1403a6300` is now part of runtime and offline validation. The copied executable passed all hash/signature checks; an unrelated DLL was rejected. | High |

## Interpretation
The build is ready for a construction-only runtime test. It cannot create naval combat accidentally under the shipped configuration. When enabled, F10 affects only an eligible navy+sea admission on the game thread. A successfully constructed naval object is immediately recognizable through existing type-1 vtable and sea-location state, so its normal update is frozen before damage or completion.

Current RelWithDebInfo SHA-256 values:

- `d3d9.dll`: `4e7503bb46df3881b07f51ee42bc62597fa707950f3bb043b9db1541c82575cf`
- `ck2_naval.dll`: `365383e19841d0e5ebfe928da5e24dc03806b8b1c1190bb9daa222217183c037`
- `ck2_naval_verify.exe`: `286140805a9ebc36c923936ec12e588230ce360400bf073510168aec3a919305`
- `ck2_naval.ini`: `98c10aac94f483eb12c1e8f14ca17df7ad50cd19110c4317ad77b179f2d73370`

## Limitations and integrity
No manual combat was created at runtime. Sea-terrain construction, initial fleet attachment, province registration, and UI compatibility remain hypotheses until the test. The freeze intentionally prevents combat damage. The user must test without saving; the agent did not access Steam or execute CK2.

## Next question
Will the guarded F10 test construct and register a frozen type-1 combat between two hostile fleets in one sea province?
