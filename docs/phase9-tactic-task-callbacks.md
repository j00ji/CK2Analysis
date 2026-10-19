# Which LoadCombatTacticsTask callback populates the tactic vectors?

**Status:** partial  
**Static confidence:** high for callback classification; unresolved for the inner insertion routine and element-0 ordering  
**New Ghidra queries:** 3

## Evidence
| Address / ID | Saved artifact path | Direct observation | Confidence |
|---|---|---|---|
| table `0x1410defa0` | `artifacts/p8-load-combat-tactics-task-vtable.json` | The concrete task has derived callbacks at `+0x18/+0x20/+0x28/+0x38`. | High |
| `0x14080e820` (`+0x20`) | `artifacts/p9-tactic-task-slot20.json` | Resets the base table/string and optionally frees the 0x38-byte object; this is destruction, not tactic insertion. | High |
| `0x14080e8a0` (`+0x28`) | `artifacts/p9-tactic-task-slot28.json` | Runs completion/status bookkeeping and sets a referenced completion byte to 1; it does not access tactic manager `0x1416e23d0`. | High |
| `0x14080ea90` (`+0x38`) | `artifacts/p9-tactic-task-slot38.json` | Lazily constructs global 0xd0-byte loader/parser object `0x1416e3290`, then calls finalizer `0x1407c9c10`; no direct tactic-vector access appears. | High |
| `0x14080e5b0` (`+0x18`) | `artifacts/p8-load-combat-tactics-executor.json` | The main callback coordinates several global managers and calls `0x1407c88b0` twice on `0x1416e3290`; vector population, if performed by this task, is indirect through its callees. | High for calls; inner effects unresolved |

## Interpretation

There is no separate callback that visibly inserts a default tactic first. The main `+0x18` callback is the only remaining population path; the other slots are destructor, completion, and finalization operations. Therefore the nonempty/index-0 guarantee must be established inside one of `0x14080e5b0`'s manager calls or by previously loaded content, not by the task shell.

For a naval DLL, this narrows the integration seam: validate or add a naval fallback only after the main load work and before/at task completion. Exact hooking remains premature until the inner loader call that mutates `0x1416e23d0` is identified.

## Limitations and integrity

Static Ghidra analysis only; no game or Steam file was run or modified. All queried functions decompiled with complete instruction exports. The three-query limit prevented following the main callback's inner callees, so default-first insertion remains unproven.

## Next question

Which callee of `0x14080e5b0` writes tactic manager `0x1416e23d0`, and how does it distribute loaded tactics into vectors `+0x20/+0x38/+0x50/+0x68`?
