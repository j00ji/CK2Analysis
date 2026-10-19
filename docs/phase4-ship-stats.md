# Ship combat statistics: loader bindings and limits

Static investigation, 2026-10-17. Target SHA-256: `cc2d65b51d9099b3d632fe3269fa647aaf7c00fcb00cc0240adbaa8e6bbbb75e`. No game process or external game configuration was inspected. Naval-combat feasibility remains unproven.

Follow-up: [Phase 5](phase5-compatibility-followup.md) binds these reads to the `NMilitary` scope and identifies the loader's `common/defines.lua` path. Actual coefficients and override order remain unresolved; the workspace still contains no copied game configuration.

## S-01: The loader includes GALLEYS and all three combat phases

**High confidence for bindings, loop bounds, and table addresses. Actual loaded values are unknown.** Evidence: [table references](../artifacts/p4-stats-sync-xrefs.json), [loader instructions](../artifacts/p4-stat-initialization-listing.json), [key construction and loop setup](../artifacts/p4-stat-key-loops.json), [category/phase name functions](../artifacts/p4-stat-names-rng-checksum.json), [numeric reader](../artifacts/phase3/functions/1404748c0.c).

The large loader `0x140474d40` constructs keys in the region `0x140483990..0x140483de9`. This pass used bounded instruction listings instead of attempting to decompile the entire large function.

- `0x140a30070(category)` returns eight names, in order: LIGHT_INFANTRY, HEAVY_INFANTRY, PIKEMEN, LIGHT_CAVALRY, KNIGHTS, ARCHERS, SPECIAL_TROOPS, GALLEYS.
- `0x1403be560(phase)` returns PHASE_SKIRMISH, PHASE_MELEE, PHASE_PURSUE for indices 0, 1, 2.
- The outer category loop increments at `0x140483dd7` and compares against 8 at `0x140483de5`. The inner phase loop increments at `0x140483db5` and compares against 3 at `0x140483dbc`.
- Key construction concatenates category, underscore, phase, and `_ATTACK`/`_DEFENSE`. Morale uses category plus `_MORALE`.
- Calls at `0x140483a49`, `0x140483c9b`, and `0x140483db0` pass the constructed key and respective destination to numeric reader `0x1404748c0`.

The resulting ship bindings are:

| Key | Destination VA | Index |
|---|---|---|
| `GALLEYS_MORALE` | `0x1417eae1c` | Morale base `0x1417eae00` + 7*4 |
| `GALLEYS_PHASE_SKIRMISH_ATTACK` | `0x1417eadd4` | Attack base `0x1417ead80` + (7*3+0)*4 |
| `GALLEYS_PHASE_MELEE_ATTACK` | `0x1417eadd8` | Attack category 7, phase 1 |
| `GALLEYS_PHASE_PURSUE_ATTACK` | `0x1417eaddc` | Attack category 7, phase 2 |
| `GALLEYS_PHASE_SKIRMISH_DEFENSE` | `0x1417ead44` | Defense base `0x1417eacf0` + (7*3+0)*4 |
| `GALLEYS_PHASE_MELEE_DEFENSE` | `0x1417ead48` | Defense category 7, phase 1 |
| `GALLEYS_PHASE_PURSUE_DEFENSE` | `0x1417ead4c` | Defense category 7, phase 2 |

These full keys are reconstructed from executable concatenation, not necessarily present as whole strings. Indexed accesses explain why exact xrefs to the individual seventh-category destinations were empty; that absence does not establish unused data.

Relevant faithful summary:

```c
for (category = 0; category < 8; ++category) {
    read_numeric(category_name(category) + "_MORALE", &morale[category]);
    // Maintenance and graphical-factor loading also occurs here.
    for (phase = 0; phase < 3; ++phase) {
        read_numeric(category_name(category) + "_" + phase_name(phase) + "_ATTACK",
                     &attack[category][phase]);
        read_numeric(category_name(category) + "_" + phase_name(phase) + "_DEFENSE",
                     &defense[category][phase]);
    }
}
```

The numeric helper writes the destination only when the queried value has numeric type code 3, applying the fixed-point conversion previously examined in Phase 3. Its nonnumeric branch leaves the destination unchanged. This body does not prove a nonzero fallback or validate suitable ship coefficients.

## S-02: Consumers use the same tables

**High confidence for storage/reads.** Evidence: [category descriptor constructor](../artifacts/phase4/functions/140a2fb10.c), [Phase 3 damage investigation](phase3-damage-notes.md).

`0x140a2fb10` builds eight 0x40-byte category descriptors with the same names. Each descriptor stores three attack values at `+0x24/+0x28/+0x2c`, three defense values at `+0x30/+0x34/+0x38`, and morale at `+0x3c`, copied from the arrays above. Direct battle arithmetic consumers previously recovered include `0x140847de0` for attack, `0x140847fd0`/`0x1408484d0` for defense-related calculations, and `0x140848170` for morale weighting. This corroborates the loader-to-consumer connection; a descriptor is not evidence of a naval battle class.

## What is still missing

The coefficient destinations lie in the zero-filled virtual tail of `.data`, beyond the section's file-backed raw bytes. The [static storage inventory](../artifacts/phase4-stat-storage.json), reproducible with `python scripts/summarize_phase4_evidence.py`, records this mapping and verifies the underscore separator bytes. The executable cannot supply their post-configuration runtime values by reading those addresses as file offsets. Initial image zero-fill must not be reported as a loaded or default gameplay value.

The inspected workspace contains the copied executable and analysis files, but no game defines, tactic scripts, or mod configuration. No Steam files were read. Therefore this pass establishes **that the ship statistics are requested and where they are consumed**, not what values the game actually loads, whether every key exists in a specific installation/mod set, or whether those values produce meaningful damage and morale.

Next use an authorized workspace copy of the applicable defines and overrides to resolve these seven keys, preserving source and load order. Inspect phase/tactic selectors and modifier application before assessing behavior. A static loading path plus shared eight-category arithmetic still does not demonstrate naval-combat feasibility.
