# Is tactic iteration deterministic across identical multiplayer installations?

**Status:** resolved conditionally  
**Static confidence:** high for file ordering; medium-high for the complete identical-input inference  
**New Ghidra queries:** 3

## Evidence
| Address / ID | Saved artifact path | Direct observation | Confidence |
|---|---|---|---|
| `0x1403beeb0` | `artifacts/p10-tactic-vector-populator.json` | Requests `.txt` inputs through `0x1404de3a0`, processes returned files sequentially, and processes records within each parser stream sequentially. | High |
| `0x1404de3a0` | `artifacts/p11-tactic-file-enumerator.json` | Builds two source lists, removes entries shadowed by the other source, then appends the remaining first list followed by the second; it preserves each source list's order and performs no randomization. | High |
| `0x140d677f0` | `artifacts/p11-content-file-list-builder.json` | Clears/reserves the result and delegates enumeration to `0x140d66f60`. | High |
| `0x140d66f60` | `artifacts/p11-content-directory-walker.json` | Recursively walks the null-terminated result of `PHYSFS_enumerateFiles`, appending entries in returned order; no local sorting or RNG occurs. | High |
| PhysicsFS API contract | [official documentation](https://www.icculus.org/physfs/docs/html/physfs_8h.html) | `PHYSFS_enumerateFiles` guarantees a duplicate-free alphabetic ordering using case-sensitive Unicode comparison. | High |

## Interpretation

With identical mounted content, source precedence, filenames, and file contents, tactic file order is deterministic and tactic records retain their textual parser order. OS/filesystem enumeration order is normalized by PhysicsFS before CK2 sees it. Consequently the index-0 fallback and tactic IDs should match across equivalent peers.

This does not make index 0 semantically appropriate for naval combat. Different mod lists, mount precedence, filename casing, or record order can change tactic IDs and which tactic becomes first. A naval extension should select a named/owned fallback rather than depend on incidental stock order.

## Limitations and integrity

Static analysis only; no multiplayer session or installed content was tested. The PhysicsFS guarantee is documentation evidence for the imported API; the exact DLL version was not identified. No game or Steam file was executed or modified.

## Next question

After bypassing admission, can type-1 side/update code process fleet participants without an army-only dereference or mutation?
