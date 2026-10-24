# Can type-1 reinforcement admit additional fleets?

**Status:** structurally promising; fleet path not runtime-validated  
**Static confidence:** high for stock path and shared insertion; medium for safe naval adaptation  
**New Ghidra queries:** 0 (saved artifacts reused)

## Evidence

| Address | Artifact | Observation |
|---|---|---|
| `0x1403a53c0` | `artifacts/phase3/functions/1403a53c0.c`; `docs/phase3-construction-notes.md` | Stock gate requires unit virtual `+0x68` true, virtual `+0x50` self, and returned army `+0x230` null. Fleet vtable returns false/null, so all fleets are excluded. |
| `0x1403a1de0` | `artifacts/phase4/functions/1403a1de0.c` | Side classifier accepts a candidate only when the side is nonempty and every existing participant passes `0x140b99d90(existing,candidate)`. |
| `0x1403b6ad0`, `0x1403b6910` | `artifacts/phase3/functions/1403b6ad0.c`, `1403b6910.c` | The post-classification paths attach the candidate to opposite side subobjects (`combat+0x18` or `combat+0x10`) and register its combat association; type-3 handling is special, other types share the generic path. |
| `0x1403a16f0`, `0x1403a1b60`, `0x14039c9e0` | `docs/phase4-assignment-notes.md` and linked saved decompilations | Side insertion consumes the fleet's existing assignment vector and adds all eight component categories, including ships. |
| Existing hook | `native/src/hooks.cpp:730-737` | Current `ObserveType1Reinforcement` only forwards to the original army-gated function, explaining why fleets do not join. |

## Interpretation

A guarded hook can likely preserve CK2's side selection: for an active type-1 sea combat, classify a free fleet against both sides using the existing side predicate; if exactly one side matches, invoke the corresponding stock add path. This reuses CK2's combat-association and side insertion work rather than manually editing participant lists. Reject ambiguous/no-side matches and already-associated fleets. Additional joiners also need the creation-time cargo-route interruption policy.

## Limitations and integrity

This is static evidence, not proof the stock add paths tolerate navy instances in every indirect helper or multiplayer/save flow. No code change or runtime test this turn. Executable and Steam installation untouched.

## Next question

Should I implement the guarded naval reinforcement hook and build it for a controlled runtime test?
