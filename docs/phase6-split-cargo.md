# Split cargo: preconditions, ownership, and capacity

Date: 2026-10-18. Static continuation from executor `0x1403f7bc0` and [the previous executor findings](phase6-split-executor.md). Target SHA-256: `cc2d65b51d9099b3d632fe3269fa647aaf7c00fcb00cc0240adbaa8e6bbbb75e`. Addresses are preferred virtual addresses. Function descriptions are analyst interpretations, not recovered source names.

## Result

**The normal unit-panel split path disables splitting a fleet whenever it has any embarked armies.** The restriction is cargo count greater than zero, not a calculation of spare capacity after moving ships. Both `splitinhalfbutton` and `newunitbutton` receive the disabled state. This resolves the previous uncertainty about a UI restriction, with high confidence from static control flow and matching tooltip diagnostics.

Consequently, an ordinary split through that enabled-button path has no embarked armies to redistribute. For a command that nevertheless reaches the executor with loaded source components, no direct cargo transfer or capacity precheck is present in the inspected code: selected ship components move, the new fleet starts with an empty cargo list, and cargo remaining with the original fleet is the best-supported inference. That exceptional case is not fully proved because callback targets, alternate callers, and stale/externally supplied commands are not exhaustively traced.

Capacity enforcement is separately confirmed in the existing ordinary navy-update path. It can remove whole embarked army components when over capacity. This is not evidence that a normal player split deletes troops: the UI's blanket loaded-fleet restriction normally prevents that scenario.

## Query ledger and scope

Exactly three new Ghidra invocations were made, reusing `ghidra/CK2.gpr` with `-process CK2game.exe -noanalysis -readOnly`:

| Query | Scope and purpose | Evidence |
| --- | --- | --- |
| 1 | Exact string search `^splitinhalfbutton$`, to locate state-changing references | [Search/xrefs](../artifacts/p6-split-cargo-button-xrefs.json) |
| 2 | Function `0x140bd5c40`, the panel-state routine found by query 1 | [JSON](../artifacts/p6-split-cargo-ui-state.json), [export](../artifacts/phase6/functions/140bd5c40.c) |
| 3 | One bounded function batch: `0x140ba5840`, `0x140132e94`, `0x140132db0`, unresolved direct/indirect helpers from the saved executor chain | [JSON](../artifacts/p6-split-cargo-indirect.json), [flag setter](../artifacts/phase6/functions/140ba5840.c), [listener thunk](../artifacts/phase6/functions/140132e94.c), [dispatcher](../artifacts/phase6/functions/140132db0.c) |

The string's six references were not truncated. All four requested function decompilations completed without reported errors or instruction truncation. These are workspace Ghidra artifacts, not REA Evidence IDs. JSON retains authoritative instructions and decompiler limitations. Request files and logs have matching stems.

A bounded static panel pointer window was also retained as [panel table](../artifacts/phase6-split-cargo-panel-table.json); it was exploratory and is not used to claim a UI update dispatch binding. It reads the copied PE without executing it. Existing analysis was reused; no initialization, reanalysis, subagents, target execution, or executable modification occurred. Work stopped at the query limit.

## 1. Preconditions before submission

### Cargo restriction: high confidence

Saved tooltip function `0x140bd3060` already explains the restriction. Its split-in-half branch tests navy virtual `+0x70`, converts through virtual `+0x60`, and tests navy cargo count `+0x240`. Positive count selects `SPLIT_LOADED_NAVY`. The corresponding army test checks carrier pointer `+0x230` and selects `SPLIT_LOADED_ARMY`. This is corroborating UI text, not by itself proof of enforcement. Evidence: [saved function JSON](../artifacts/fleet-functions-initial.json), [tooltip export](../artifacts/function-140bd3060.c). Navy-count instruction anchors are `0x140bd39e4` for the new-unit branch and `0x140bd3ca3` for split-in-half.

Query 1 finds state-routine references at `0x140bd6c83` and `0x140bd6d4d`, both inside `0x140bd5c40`. Query 2 establishes actual button-state changes:

| Address | Observation |
| --- | --- |
| `0x140bd6bb8` | Calls unit virtual `+0x70` (navy predicate). |
| `0x140bd6bc6` | Converts navy through virtual `+0x60`. |
| `0x140bd6bc9`, `0x140bd6bd3` | Compares cargo count `[navy+0x240]` with zero; positive count sets the restriction condition. |
| `0x140bd6bf0` | Separately tests army carrier `[army+0x230]`. |
| `0x140bd6c0e..0x140bd6c6d` | Combines loaded status with other restrictions and selects the restricted branch if any hold. |
| `0x140bd6c83..0x140bd6cc8` | Looks up `splitinhalfbutton`; invokes virtual `+0x1e8`. For known implementation `0x140cfb180`, writes button `+0x8c = 3` and calls virtual `+0x2a8` with zero. |
| `0x140bd6cf0..0x140bd6d35` | Applies the same restricted state to `newunitbutton`. |
| `0x140bd6d4d..0x140bd6d90` | Unrestricted split branch invokes virtual `+0x1e0`; known implementation clears state 3 to zero. |

The paired state transitions plus the matching refusal tooltip strongly identify state 3 as disabled. The generic widget input dispatcher itself was not traced, and no runtime click test was performed.

Other restrictions in this same predicate are unit `+0xb4 > 0` (retreat-related in prior analysis), a live combat association at `+0x68`, true result from `0x140ba1ff0` (not further classified here), selection count other than one from virtual `+0x200`, and component count `+0x48 < 2`. The component threshold is established by instructions `CMP [RAX+0x48],1` / `SETLE` at `0x140bd6c57..0x140bd6c5b`; it should not be inferred from tooltip wording alone.

### Executor-level boundary: high confidence for absence in this body

The saved [button handler](../artifacts/phase6/functions/140bd7c50.c) checks panel fields `+0x40/+0x44`, constructs a selection, and submits the command. It does not visibly duplicate the cargo-count restriction. The saved [executor](../artifacts/p6-split-executor.json) likewise has no cargo-count recheck or post-removal capacity comparison. Its owner-associated virtual predicate at `0x1403f7c22` is still not identified as a cargo validator.

Thus the new finding is a pre-submission UI restriction, not proof of a universal engine invariant. Behavior for a queued command whose source state changes before execution, alternate callers, or invalid commands remains unresolved. The saved processor's virtual `+0x30` dispatch does not by itself establish a loaded-fleet rejection elsewhere.

## 2. Cargo ownership and indirect helpers

### Confirmed transfer mechanics

The existing executor creates a navy via `0x140ba7310` at `0x1403f7c97`. Its [saved constructor](../artifacts/phase2/functions/140ba7310.c) zeros cargo head/tail/count `+0x230/+0x238/+0x240`. The executor then removes each resolved component from its parent at `0x1403f7dba` (`0x140b987f0`) and appends it to the new unit at `0x1403f7dc9` (`0x140b97bb0`). Those objects are ship components, not carried army objects. The saved mutation helpers maintain component lists and assignment bytes; no cargo-list migration or army carrier-pointer rewrite is identified in this split chain.

### Newly narrowed indirect paths

| Routine | Confirmed behavior | Cargo implication / confidence |
| --- | --- | --- |
| `0x140ba5840` | At `0x140ba5857`, returns if unit byte `+0x158` is zero. Otherwise writes argument byte to `+0x157` at `0x140ba5864`, calls naming refresh `0x140b9b660`, and returns unless a live association at `+0x78` exists and the argument is zero. The remaining path operates on that association and may call `0x1403b6c40`. | High confidence: no direct cargo loop, carrier rewrite, capacity aggregate, or capacity comparison in this helper. Its full flag meaning and deeper association calls are not newly resolved. |
| `0x140132e94` | Tail-dispatches receiver virtual `+0x80` at `0x140132e97`. | High confidence for dispatch; actual listener implementations unresolved. It does not itself implement cargo migration. |
| `0x140132db0` | Calls the supplied callback for unit `+0xd8` and listeners selected by its category argument; call sites `0x140132ddc` and `0x140132e01`. It also cleans dead listener nodes. | High confidence: notification fan-out, not a direct cargo routine. Callback targets remain a boundary. |

The saved [navy finalizer](../artifacts/p6-split-executor-navy-finalize.json), called at executor `0x1403f7fc0`, dispatches virtual `+0x230` and the now-resolved `0x140132e94` thunk. Its virtual `+0x230` slot must not be confused with the navy cargo-list field at the same numeric offset. The executor subsequently calls `0x140132db0(1,0x140132e8c,navy)`; the implementation behind that supplied callback and listener receivers remains untraced.

**Ownership conclusion:** with a normal enabled UI split, cargo is absent because loaded fleets are blocked. If the restriction is bypassed or becomes stale, source cargo remaining on the original fleet is a moderate-confidence inference from the unchanged cargo links and empty new list, conditional on unresolved callbacks/owner-associated routines. No inspected routine proves redistribution to the new fleet. Do not upgrade this to a universal guarantee.

## 3. Capacity timing

| Stage | Evidence and conclusion |
| --- | --- |
| Before ordinary UI split | `0x140bd5c40` rejects any positive cargo count. This is a blanket eligibility check, not a hypothetical remaining-capacity calculation. High confidence. |
| During executor / inspected indirect helpers | No explicit comparison of carried troop aggregate against post-transfer source capacity, and no call to known enforcement `0x140ba7fc0`, was identified. High confidence for these bodies; not an exhaustive transitive-call claim. |
| Ordinary navy update | Existing `0x140b96b20` calls `0x140ba7fc0` at `0x140b96c49`. Enforcement compares troop aggregate `0x140bba910` with capacity `0x140b9f380`, removes a carried army's first component through `0x140b987f0`, destroys it, and repeats while over capacity. High confidence from saved evidence. |

Sources for the last row: [update wrapper](../artifacts/phase2/functions/140b96b20.c), [capacity enforcement](../artifacts/phase5/functions/140ba7fc0.c), and the previously established chain in [executor findings](phase6-split-executor.md).

If a loaded source nevertheless loses enough ship capacity and its cargo stays attached, a subsequent ordinary update can delete whole cargo components. The executor does not directly schedule or demonstrate the timing of that enforcement here. Exact update cadence, same-tick ordering, upstream command races, and callback-driven changes remain unresolved. A normal UI split is not established as a troop-loss scenario.

## Stop status

- Loaded-fleet restriction: answered for the normal panel path, with high-confidence static evidence of disabled buttons.
- Cargo transfer: no direct transfer found; normal UI split carries no cargo. Exceptional executor behavior remains conditional on indirect effects.
- Capacity validation: pre-submission cargo-count exclusion and separate ordinary-update capacity enforcement confirmed; no split-specific numerical capacity check found in the inspected chain.

Three queries used; no further investigation or topic continuation performed.
