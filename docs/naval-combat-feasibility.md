# Can existing battle machinery accept fleets without a new combat type?

**Status:** partial  
**Static confidence:** high that unchanged land combat cannot admit fleets; medium that a native-code naval battle can reuse substantial internals  
**New Ghidra queries:** 0

## Evidence
| Address / ID | Saved artifact path | Direct observation | Confidence |
|---|---|---|---|
| `0x1403bb5d0` | `artifacts/p3-initiation.json` | Normal encounter initiation returns before its opponent scan for a navy or sea province. | High |
| `0x1403bc270` | `artifacts/phase3/functions/1403bc270.c` | The factory allocates concrete types 1 and 3 only; other inputs leave the combat pointer null before required initialization. | High |
| `0x1403a53c0` | `artifacts/p3-battle-lifecycle.json` | Type-1 reinforcement requires the unit's army predicate and an unembarked army object. | High |
| `0x1403a1b60`, `0x14039c9e0` | `artifacts/phase4/functions/1403a1b60.c`, `artifacts/phase4/functions/14039c9e0.c` | Once admitted, shared side insertion consumes a fleet's assignment bytes and aggregates all eight quantities, including ship quantity at component `+0xc4`. | High |
| `0x140474d40` | `artifacts/p4-stat-initialization-listing.json` | The stat loader builds GALLEYS attack/defense keys for all three combat phases; actual configured values were not available. | High for key loading; unknown effectiveness |
| combat persistence dispatch | `artifacts/p4-flank-stats-sync-manager.json` | Combat save loading recognizes only the two observed concrete classes, so a new class needs an explicit persistence strategy. | High |

## Interpretation

Unmodified CK2 cannot produce fleet-versus-fleet battles through the normal battle path. A single gate bypass is insufficient: creation, reinforcement, save/load, and land-oriented aftermath are separate contracts.

A native-code extension is nevertheless plausible because fleets already share component identity, flank assignments, province occupancy, opponent eligibility, quantity aggregation, damage/morale arithmetic, and combat ownership plumbing. The smallest credible design is a naval-specific concrete encounter that reuses the manager, two sides, three flank records, and eight-category update core while replacing admission, naval phase/tactic policy, retreat/destruction, result events/UI, and persistence dispatch. Treating fleets as ordinary type-1 armies would be brittle.

## Limitations and integrity

This is static evidence for target SHA-256 `cc2d65b51d9099b3d632fe3269fa647aaf7c00fcb00cc0240adbaa8e6bbbb75e`; the hash was not rerun in this pass. No executable was run or modified. Actual GALLEYS coefficients, tactic eligibility, end-to-end save reload, multiplayer synchronization, naval retreat behavior, and UI operation remain untested.

## Next question

Can the existing combat phase/tactic selector produce valid, deterministic choices when a flank contains only GALLEYS?
