# Which function populates the tactic vectors, and what becomes element 0?

**Status:** resolved for the static population algorithm  
**Static confidence:** high  
**New Ghidra queries:** 3

## Evidence
| Address / ID | Saved artifact path | Direct observation | Confidence |
|---|---|---|---|
| global `0x1416e23d0` | `artifacts/p10-tactic-manager-xrefs.json` | Seventeen complete references were found; `0x14080ebc0` is the only direct writer. | High |
| `0x14080ebc0` | `artifacts/p10-tactic-manager-writer.json` | Lazily allocates a 0xd70-byte manager through `0x1403becf0`, stores it in `0x1416e23d0`, then calls `0x1403beeb0`. | High |
| `0x1403beeb0` | `artifacts/p10-tactic-vector-populator.json` | Deletes old master entries, resets master `+0x20/+0x28` and subset ends `+0x40/+0x58/+0x70`, parses tactic records, appends each ordinary tactic to master `+0x20`, then appends it to one subset. | High |
| tactic flags `+0x20c/+0x20d` | `artifacts/p10-tactic-vector-populator.json` | `+0x20c == 0` selects vector `+0x38`; otherwise `+0x20d == 0` selects `+0x68`; otherwise it selects `+0x50`. | High |

## Interpretation

No synthetic or named default is inserted first. Element 0 of the master vector is the first successfully parsed ordinary tactic; element 0 of each subset is the first parsed tactic routed to that subset. Special records named `flank_retreat_odds` and `flank_pursue_odds` are handled separately and are not appended as tactics.

The selector's safety is therefore guaranteed only by content: the installed definitions must produce at least one ordinary tactic in every subset used by combat. Loader/file iteration order determines which tactic becomes fallback index 0; this pass did not establish that ordering rule.

For a naval DLL, relying on stock index 0 is unsafe semantically. A robust extension should validate all relevant vector counts and explicitly select or register a naval fallback after `0x1403beeb0` finishes.

## Limitations and integrity

Static analysis only; no game or Steam file was run or modified. All xrefs were returned without truncation, and both functions decompiled with complete instruction exports. Actual installed tactic definitions and file enumeration order were not inspected.

## Next question

Is the tactic file/record iteration feeding `0x1403beeb0` deterministically ordered across identical installs and multiplayer peers?
