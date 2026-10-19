# Combat persistence and determinism dependencies

Static investigation, 2026-10-17. Target SHA-256: `cc2d65b51d9099b3d632fe3269fa647aaf7c00fcb00cc0240adbaa8e6bbbb75e`. Preferred VAs throughout. No game execution, save editing, network session, or executable modification was performed. Pseudocode below is a simplified transcription with analyst names.

Follow-up: [Phase 5](phase5-compatibility-followup.md) resolves ship-component identity type0x3f, parse-wrapper post-load registration, independent unit assignment loading, cargo restoration, and RNG suppression during component transfer. Raw combat-hash consumers remain unresolved after the documented bounded searches.

## P-01: Combat save loading has its own concrete-type dispatch

**High confidence.** Evidence: [manager loader and related functions](../artifacts/p4-flank-stats-sync-manager.json), [manager writer](../artifacts/phase4/functions/1403b9df0.c), [manager table bytes](../artifacts/phase4-manager-table-window.json), [constructor bindings](../artifacts/p4-constructor-navy-insertion-listing.json).

Game-state constructor instructions `0x14077bcfd..0x14077bd12` bind the combat manager at game `+0x230` to primary table `0x141090398` and its secondary interface at manager `+0x10` to table `0x141090390`. Primary table writer `+0x10` is `0x1403b9df0`; field reader `+0x20` is `0x1403b9e50`.

The writer walks the registered combat list at manager `+0x18`, writes each combat's virtual `+0x58` token, then invokes virtual `+8` to serialize its block. The reader recognizes only two tokens in its complete recovered body:

| Save token | Reconstructed object | Sequence |
|---|---|---|
| `0x283c` | 0x98-byte object; table `0x1410902d8` | Base construct, retain/register, initialize sides, parse block |
| `0x283e` | 0xa0-byte object; table `0x141090000` | Base construct, retain/register, virtual initialization, parse block |
| Other | No allocation in this handler | Returns |

These match the previously observed land/type-1 and siege/type-3 classes. No third reconstruction branch appears here. Numeric save tokens are distinct from encounter-type integers; `0x283c` is not a type index. Registration precedes side creation because side initialization looks up the combat's retained object/control pair.

```c
if (token == 0x283c) {
    battle = construct_0x98_object_with_table_1410902d8();
    register_retained_pair(manager, battle);
    FUN_1403b7180(battle);
    parse_block(battle, input);
} else if (token == 0x283e) {
    // Corresponding 0xa0-byte type-3 construction/registration/parsing path.
}
```

This is an additional integration contract beyond changing runtime encounter creation. It does not prove a new naval-specific class/token would be necessary; it proves that an added class would need a defined persistence path.

## P-02: Participants and flanks are persisted separately by identity

**High confidence for paired reader/writer fields; full post-load reconstruction remains incomplete.** Evidence: [battle and side serialization](../artifacts/p4-assignment-save-checksum.json), [flank reader/writer](../artifacts/p4-flank-save-rng-seed.json), [flank table](../artifacts/phase4-flank-serialization-table.json).

Side writer `0x1403a1600` writes each participant under token `0x27f2` using the two 32-bit identity fields at unit `+0x20/+0x24`. Side reader `0x1403a1450` resolves that identity through `0x1400d3090`, adjusts the returned interface pointer by -0x10, and appends the participant if resolution succeeds. It does **not** call the ordinary component-to-flank assignment helper on this path. Parser-mode conditions affect how the ID is accepted; not every parser mode was reconstructed.

Three separate flank blocks use tokens `0x2c8a/0x2c8b/0x2c8c`, mapped to side `+0x48/+0x110/+0x1d8`. The writer emits a flank if it has components or an active leader. Constructor listing `0x14039bd90` binds flank table `0x141090098`; table `+0x10` resolves writer `0x14039c360`, and `+0x20` resolves reader `0x14039bf20`.

| Flank token | Persisted/loaded field or operation |
|---|---|
| `0x27ff`, `0x2d58` | Leader-associated IDs for pointers `+0x10`, `+0x18`; load looks up registry type `0x42` |
| `0x2830` | Embedded quantity/stat record at `+0x20`, delegated serialization |
| `0x6b` | Integer at `+0x7c` |
| `0x28c8` | Ordered component-ID vector; load resolves registry type `0x3f` and appends pointers to `+0x80/+0x88/+0x90` |
| `0x2d59` | Indexed association at `+0xa8`, selected from global table `0x1416e23d0`; fallback index 0 for invalid input |
| `0x2d5a`, `0x283a`, `0x2aca` | Fields `+0xb0`, `+0xb4`, `+0xb8` |
| `0x2842`, `0x2c1c`, `0x2f78` | Boolean fields `+0xc0`, `+0xc1`, `+0xc2` |

The component writer uses component ID `+0x14` and excludes a component when it equals the component pointer at `+0xcc0` of a resolved associated object (resolved via component handle `+0x80`). This special case must be understood before claiming every component round-trips unchanged. The reader silently omits unresolved component IDs. The names of several state fields and original token spellings remain unassigned.

Consequences: identity registration and load order matter; participant-list restoration and flank-vector restoration are separate; the flank loader is tied to registry type `0x3f`. The ship-component constructor and common allocation alone do not prove its complete identity-registration and save/load path. That is a concrete next check. No whole-save round-trip has been tested.

Battle writer `0x1403a47c0` and reader `0x1403a4280` additionally pair the following fields:

| Token | Evidence-based meaning |
|---|---|
| `0x2829/0x282a` | Actor IDs from battle vectors `+0x58/+0x70`, resolved as registry type `0x42` |
| `0x27bc` | Encoded location: province ID plus 100000 times a settlement-related index |
| `0x2791` | Additional/fallback province pointer `+0x30` represented by ID |
| `0x7a` | Update counter `+0x38` |
| `0x282d/0x282e` | The two side blocks at `+0x10/+0x18` |
| `0x27ac` | Terrain name, resolved back to a terrain association and defender modifier |
| `0x2875` | Interval field `+0x88` |
| `0x28f0` | Crossing/amphibious modifier classification |

Location loading also binds combat associations back to province or settlement state. Terrain/modifier names and external definitions are dependencies, not self-contained numeric battle state.

## D-01: Shared RNG state is reproducible from seed and draw count

**High confidence for static state transitions and direct callers; no runtime sequence comparison.** Evidence: [draw and hash primitives](../artifacts/p4-assignment-save-checksum.json), [state refill](../artifacts/phase4/functions/140c4a600.c), [rebuild](../artifacts/phase4/functions/140c4a720.c), [seed initialization](../artifacts/phase4/functions/140c4a4f0.c), [restore caller](../artifacts/p4-checksum-callbacks-rng-restore.json), [RNG references](../artifacts/p4-rng-identity-assignment-xrefs.json).

| Address | Observed role |
|---|---|
| `0x1416d5ee0` | 624-entry, 32-bit shared RNG state |
| `0x1416d68a0` | State index modulo 624 |
| `0x1417e3b4c` | Seed supplied to initialization |
| `0x1417e3b48` | Draw count advanced by the normal draw routine |
| `0x1417e3b32` | Flag that makes `0x140c4a7f0` return zero without advancing |

`0x140c4a7f0` refills state when index is zero, tempers the selected state word, advances index modulo 624, increments draw count, and returns a 31-bit result. `0x140c4a600` updates the 624-word state using a 397-position offset and constant `0x9908b0df`. `0x140c4a4f0` initializes from the seed, with a cached initialization path when seed is zero. Exact signed shifts and arithmetic should be checked in instructions before reproducing this generator; no external algorithm equivalence is asserted.

`0x140c4a720` initializes from the stored seed, resets index, then advances the state/index the stored number of draws without incrementing that stored count. `0x1407d40b0` loads seed/count from its argument `+0x80/+0x84`, calls this rebuild routine, and updates a game-state snapshot via `0x1407880a0`.

The [save/load listings](../artifacts/p4-rng-save-load-sites.json) independently show seed and count emitted from `0x14077c810` at `0x14077ca09..0x14077ca2c`, under tokens `0x289e/0x28e0`. This emission is conditional on game-state byte `+0x500`; it is not established for every save mode. Reader branches at `0x14077f950` and `0x14077f993` write seed/count globals, with the seed branch first resetting the count. Their token-dispatch chain and full save-load-to-rebuild ordering remain to be traced.

Previously recovered battle paths `0x1403a56a0` and `0x1403aa310` use the shared draw routine. **Inference:** additional draws, different participant/update ordering, or conditional execution can change subsequent game randomness. Seed equality alone is insufficient; draw count and ordering matter.

## D-02: Command checksums explicitly include RNG seed/count

**High confidence for callback binding and comparison.** Evidence: [session command processor and OOS comparator](../artifacts/p4-flank-stats-sync-manager.json), [checksum-vector builder](../artifacts/phase4/functions/14078e5b0.c), [callback installation](../artifacts/phase4/functions/14064e830.c), [callback/rebuild xrefs](../artifacts/p4-checksum-rebuild-callers.json).

`0x14064e830` installs `0x14078e5b0` at session `+0x3a8` and `0x14078dd40` at `+0x3b0`. This directly connects the builder and comparator to calls in session processor `0x140c3d9e0`.

For relevant command/session modes, the processor generates checks before and after command virtual `+0x30` execution. Mode value 7 compares them against command vectors at `+0x50` and `+0x68`; other observed mode branches store generated vectors. Embedded diagnostics include `NO PRE EXECUTION CHECKSUMS WITH COMMAND!`, `NO POST EXECUTION CHECKSUMS WITH COMMAND!`, and OOS messages identifying before/after execution. The exact names of session-mode values and full network transport protocol remain unresolved.

The builder places seed `0x1417e3b4c` and draw count `0x1417e3b48` in the first two 32-bit vector elements, then conditionally produces further state summaries. The comparator checks vector lengths and bytes, emits `Out of sync! Dumping checksums`, and identifies individual mismatching entries. This is direct evidence that shared randomness participates in command synchronization checks, not merely a suggestive string hit.

## D-03: The raw combat hash is a separate mechanism until callers are traced

**High confidence for hashing and interface ownership; cross-machine use unproven.** Evidence: [hash primitive `0x1401ac450`](../artifacts/phase4/functions/1401ac450.c), [combat traversal](../artifacts/phase3/functions/1403bd9e0.c), [table bytes](../artifacts/phase4-manager-table-window.json), [constructor binding](../artifacts/p4-constructor-navy-insertion-listing.json).

`0x1401ac450(data,length,prior)` is a byte hash with add/xor/shift mixing and final avalanche. It uses `prior` when nonzero, otherwise length as the initial accumulator. This confirms the hash interpretation of `0x1403bd9e0`.

The latter is installed at the first slot of manager secondary table `0x141090390`. Its argument is **manager+0x10**, explaining why it walks a list at argument `+8` while the primary manager list is at `+0x18`. This resolves the earlier layout ambiguity without conflating it with the separate list-owner table at `0x1410903c8`.

The traversal chains hashes over actor vector contents/headers, participant list contents/headers, full 0x2a0-byte side objects, and the 0x98-byte type-1 battle. Other virtual implementations can supply different hashing behavior. These memory ranges contain pointers and allocation-dependent vector/list headers. **Do not assume this raw hash is the cross-machine checksum vector described above.** Its invoking interface consumers and any normalization/copying context remain untraced. It may serve a different state/change-check purpose; that is a hypothesis, not a finding.

## Next concrete research steps

1. Trace ship-component identity registration and shared unit assignment save/load, including list/vector order through split and merge.
2. Trace callers of the manager secondary hash interface; distinguish raw-memory checks from stable synchronization summaries and establish coverage of battle state.
3. Trace post-load fixups, RNG rebuild scheduling, and the simulation scheduler above the known combat update caller.
4. Resolve actual ship coefficients and tactic/phase assumptions from an authorized local copy of game data, then reassess the remaining army-specific admission, lifecycle, retreat, and cargo behavior.

No safe hook, executable change, or working naval-combat design follows from this pass. The evidence now defines more of the contracts that any feasibility assessment must satisfy.
