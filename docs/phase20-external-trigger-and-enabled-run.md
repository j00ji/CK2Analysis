# Did the enabled run reach manual creation, and how should the next attempt be triggered?

**Status:** enabled run resolved; external-trigger build ready for runtime testing  
**Static confidence:** high for trigger delivery and guarded hook behavior; medium for CK2 fleet eligibility  
**New Ghidra queries:** 0

## Evidence

| Address / ID | Saved artifact path | Direct observation | Confidence |
|---|---|---|---|
| enabled runtime run | `Documents/Paradox Interactive/Crusader Kings II/logs/ck2_naval.log` | The DLL logged `manual creation prototype configured=1`, then consumed one manual request and refused it because no second fleet passed the existing hostile/free-fleet predicate. The process remained operational. | High |
| `0x1403bb5d0` | [admission hook](../native/src/hooks.cpp) | A request is now consumed only on a readable navy admission into sea terrain. The scan logs counts for province units, navies, combat-free navies, hostile matches, and unreadable candidates. | High for source data flow |
| named event | [trigger implementation](../native/src/trigger.cpp), [trigger utility](../native/tests/trigger_main.cpp) | An auto-reset `Local\\CK2NavalManualCreate` event replaces the F10 edge. The utility opens the event exposed by an enabled running DLL and signals exactly one request. | High |
| version guard | [verifier](../native/tests/verify_main.cpp) | The copied `CK2game.exe` passed the pinned SHA-256 and four hook-prologue checks after the rebuild. | High |

## Interpretation

The INI change worked. The lack of visible combat was an eligibility refusal, not a failure to load the prototype. The reliable test sequence is event-driven: park one fleet in a sea province, order a fleet owned by a realm currently at war with it into that province, run `ck2_naval_trigger.exe` while the second fleet is en route, then let it arrive. Merely running the trigger after both fleets are stationary does not create an admission callback.

Current RelWithDebInfo SHA-256 values:

- `d3d9.dll`: `4e7503bb46df3881b07f51ee42bc62597fa707950f3bb043b9db1541c82575cf`
- `ck2_naval.dll`: `27fbd2dd6a05940f286a0b069b6239c0505984fd086534bb896aa3247cdb5215`
- `ck2_naval_verify.exe`: `286140805a9ebc36c923936ec12e588230ce360400bf073510168aec3a919305`
- `ck2_naval_trigger.exe`: `ca6b3ffda3ac2c45d9b16f045cc774ac22e5df868189cc5a35bcfa94e4457f07`
- `ck2_naval.ini`: `98c10aac94f483eb12c1e8f14ca17df7ad50cd19110c4317ad77b179f2d73370`

## Limitations and integrity

The external trigger has passed compilation and offline behavior checks but has not yet been exercised inside CK2. Successful type-1 construction, UI registration, and fleet attachment remain runtime hypotheses. The update guard still freezes any recognized naval type-1 combat before damage or land aftermath. No CK2 executable or Steam file was modified by the agent.

## Next question

Does the external-trigger arrival test find one hostile free fleet and return with province, attacker, and defender combat controls live?
