# Is the guarded DLL/proxy and observation-only hook scaffold ready?

**Status:** resolved for static build and file verification
**Static confidence:** high
**New Ghidra queries:** 0

## Evidence
| Address / ID | Saved artifact path | Direct observation | Confidence |
|---|---|---|---|
| native build project | [CMake project](../native/CMakeLists.txt), [native README](../native/README.md) | VS 2022 x64 configured and built `d3d9.dll`, `ck2_naval.dll`, and `ck2_naval_verify.exe` with project warnings treated as errors. | High |
| target SHA-256 and RVAs | [version guard](../native/src/version_guard.cpp), [address table](../native/include/ck2naval/addresses.hpp) | Runtime activation requires exact SHA-256 `cc2d65b...bbbb75e` and 16-byte signatures at `0x1403bb1a0`, `0x1403bb5d0`, and `0x1403a53c0`. | High |
| standalone verifier | [verifier source](../native/tests/verify_main.cpp) | Running it against the copied `CK2game.exe` returned `PASS: supported CK2 file hash and observation signatures verified`; running it against the proxy returned the expected unsupported-hash failure. | High |
| proxy bootstrap | [proxy source](../native/src/proxy.cpp), [export definition](../native/src/proxy.def) | Static import/export inspection shows an x64 DLL exporting `Direct3DCreate9` and importing only `KERNEL32.dll`; it resolves the system D3D9 DLL by absolute system-directory path and loads the core beside itself. | High for static structure |
| observation hooks | [hook source](../native/src/hooks.cpp), [read-only probes](../native/src/probe.cpp) | Detours call the original function and return its result unchanged; probes only classify fleet vtable, sea definition, and type-1 combat state for bounded logging. | High for source behavior; runtime untested |
| hook backend | `third_party/minhook` | Official MinHook v1.3.4 is pinned at commit `c3fcafdc10146beb5919319d0683e44e3c30d537`. | High |

## Interpretation
The observation scaffold is ready for a deliberate runtime smoke test. It is fail-closed for unsupported executables, installs all three hooks as one transaction, and contains no naval encounter mutation. The proxy and combat DLL are separate so another loader can replace the proxy later.

Built RelWithDebInfo SHA-256 values:

- `d3d9.dll`: `4e7503bb46df3881b07f51ee42bc62597fa707950f3bb043b9db1541c82575cf`
- `ck2_naval.dll`: `98e8883e56fe3fab8f7484ae2a27c08787caaf5c89f36bfd905250360d47f058`
- `ck2_naval_verify.exe`: `1c1d4e2a5d98f78dcb9239f72ac55044ec8ff875e3527268b59d88159bd00585`

## Limitations and integrity
No DLL was injected and CK2 was not executed. Therefore loader compatibility, thread timing, MinHook installation in the live process, calling conventions, and logging behavior remain runtime hypotheses. Nothing was copied to or changed in the Steam installation. The locally vendored dependency retains its license.

## Next question
Should the user perform the first observation-only runtime smoke test with the two built DLLs and return `ck2_naval.log` for validation?
