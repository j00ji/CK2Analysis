# What is the smallest hook boundary for naval retreat and cargo policy?

**Status:** resolved
**Static confidence:** high for the boundary; medium for the proposed wrapper sequence until runtime-tested
**New Ghidra queries:** 0

## Evidence
| Address / ID | Saved artifact path | Direct observation | Confidence |
|---|---|---|---|
| `0x1403b7360` | [type-1 completion](../artifacts/phase3/functions/1403b7360.c) | Determines the losing side, computes the land disposition with `0x1403a2a80`, calls result finalizer `0x1403ad020`, and then calls `0x1403a2150(losing_side, disposition)`. | High |
| `0x1403a2150` | [combined loser handling](../artifacts/phase3/functions/1403a2150.c) | Chooses a destination before detaching each unit, performs the detach, and then interleaves removal or retreat-command submission. It is the first single entry receiving both the losing side and terminal disposition. | High |
| `0x1403a2f60` | [neutral side detach](../artifacts/phase3/functions/1403a2f60.c) | Walks the side list, removes each participant, clears matching ordinary or siege combat associations, releases control references, and resets related presentation state without choosing a destination or destroying/moving the unit. | High |
| `0x140b9cdc0` | [movement command layer](../artifacts/phase2/functions/140b9cdc0.c) | Accepts a unit and destination, has explicit navy handling, and submits the movement command. | High |
| `0x140786dc0` | [conclusion notes](phase3-conclusion-notes.md) | Removes navies but recursively removes embarked armies, so it cannot express a different cargo-survival rule by itself. | High |

## Interpretation
The smallest reliable retreat/cargo hook is an entry detour on `0x1403a2150`, with a naval discriminator and an immediate pass-through to the original function for land combat. Hooking only `0x140b9d9d0` is insufficient because type 1 has an alternate selector and the disposition/removal decision remains outside it. Hooking `0x140b9cdc0` is too late because missing destinations and wipe disposition can already route the unit to `0x140786dc0`.

The naval branch should snapshot stable participant identities and intended outcomes before mutation, call `0x1403a2f60(side)` for common detachment, then process the snapshot. Survivors receive a validated adjacent sea destination, retreat state equivalent to `unit+0xb4 = 1`, and the existing navy movement plus follow-up retreat command sequence. Destroyed fleets must apply an explicit cargo rule before calling the generic remover; otherwise embarked armies are recursively destroyed.

This is only the smallest **movement/destruction aftermath** boundary. It does not replace `0x1403ad020`, which has already run. A complete naval result implementation that changes warscore, notifications, prisoners, rewards, or scripts must dispatch earlier at type-1 completion `0x1403b7360` and reproduce its end test while selecting naval versus land finalization. Thus a practical design has two layers: an early naval result dispatcher, and the reusable `0x1403a2f60` detach primitive inside naval loser handling.

## Limitations and integrity
No detour was installed and no runtime calling-convention or reentrancy test was performed. The exact semantics of follow-up command ID `0x32d3` and modes 2/3 remain unnamed, so the safest first implementation is to reproduce the observed stock sequence rather than omit it. `CK2game.exe` was not executed or modified.

## Next question
Can naval-versus-land identity be derived entirely from existing serialized type-1 combat, province, and participant state so the mod needs no new save-field or checksum-visible sidecar state?
