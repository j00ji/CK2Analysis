# Can naval identity be derived from serialized type-1 state without a sidecar?

**Status:** resolved
**Static confidence:** high
**New Ghidra queries:** 0

## Evidence
| Address / ID | Saved artifact path | Direct observation | Confidence |
|---|---|---|---|
| combat virtual `+0x60`; type-1 table `0x1410902d8` | [construction notes](phase3-construction-notes.md) | Type-1 combat returns numeric type 1 and uses the existing `0x98`-byte object. | High |
| manager writer/reader; token `0x283c` | [persistence report](phase4-persistence-determinism.md), [manager writer](../artifacts/phase4/functions/1403b9df0.c) | The existing save path writes and reconstructs type-1 combat using token `0x283c`; no third concrete combat class is required if naval combat deliberately reuses type 1. | High |
| battle reader `0x1403a4280`, token `0x27bc` | [saved reader](../artifacts/p4-assignment-save-checksum.json) | Restores the encoded location to combat `+0x28`, resolves the runtime province, and binds the combat to that province. The recovered branch has no land-only rejection. | High |
| runtime province `+0xf0` / definition `+0x64` | [province notes](phase2-province-notes.md) | Definition byte `+0x64 != 0` identifies land in the traced routing/UI branches; zero is sea-like. | High |
| side reader `0x1403a1450` | [saved reader](../artifacts/p4-assignment-save-checksum.json) | Restores participants from serialized unit identities under token `0x27f2` and independently restores the three flank blocks. | High |
| component type `0x3f` and unit type `0x3e` | [compatibility follow-up](phase5-compatibility-followup.md) | Fleet units and ship components have the identity registrations required by the existing participant and flank loaders. | High |
| encounter admission `0x1403bb5d0` | [movement notes](phase2-movement-notes.md) | Stock normal encounter creation rejects both navies and sea-like provinces, so an ordinary type-1 combat at sea is unused by vanilla creation paths. | High for inspected stock path |

## Interpretation
Naval combat can be identified without new serialized state by the derived predicate:

```text
combat.virtual_type() == 1
and combat.location != null
and combat.location.definition.land_byte_0x64 == 0
```

The participant invariant—every participant is a navy by unit virtual `+0x70`—should be validated when participants are available, but should not define identity. During load construction, teardown, or terminal side exhaustion, participant lists can be incomplete or empty; location remains the stable discriminator. Vanilla's inspected creation path does not create type-1 combat at sea, making the pair `type 1 + sea location` an available namespace for this mod.

The predicate is reconstructed from existing fields after load: token `0x283c` chooses the type-1 class and token `0x27bc` restores/binds its province. Participant IDs, ship-component IDs, assignment bytes, and flank component vectors already have persistence paths. A persistent DLL sidecar flag is therefore unnecessary and would create avoidable save/checksum/reconstruction problems.

Creation code may need a transient local discriminator before combat `+0x28` is assigned, but it can derive that from the requested province and must not persist it. Custom naval simulation and aftermath must still be deterministic on every peer; avoiding a sidecar removes one state problem but does not automatically guarantee multiplayer synchronization.

## Limitations and integrity
No save was round-tripped at runtime. Other mods that create type-1 land-unit combats in sea provinces could collide with this namespace. The type-1 reader also restores terrain/modifier fields, so a valid sea-combat terrain choice remains an implementation requirement even though it is not needed for identity. Raw combat-hash consumers remain incompletely classified. `CK2game.exe` was not executed or modified.

## Next question
Should the completed findings now be converted into the concrete DLL hook architecture, implementation order, and runtime validation matrix?
