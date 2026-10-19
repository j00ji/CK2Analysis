# Split-button command identification

Date: 2026-10-18. Narrow continuation of the existing investigation, limited to the split-button callback. Three new Ghidra queries; existing persistent project reopened read-only without reanalysis. No target execution or executable modification.

Target SHA-256: `cc2d65b51d9099b3d632fe3269fa647aaf7c00fcb00cc0240adbaa8e6bbbb75e`. All addresses are preferred virtual addresses. Function names below are Ghidra labels, not recovered source names.

## Result

**High-confidence static identification:** the `splitinhalfbutton` callback is associated with `0x140bd7c50`, which constructs command type `0x28cc` through `0x1403f7aa0` and submits it through `0x140c3d960`. Its concrete command table is `0x1410971c0`; execution slot `+0x30` points to **`0x1403f7bc0`**.

The executor body was not inspected in this continuation. This identifies the underlying command implementation address, not its complete behavior or fleet compatibility. The command may serve other unit-creation callers as well; no exclusive source-level “split command” class name is claimed.

## Evidence chain

| Link | Verified evidence | Confidence |
| --- | --- | --- |
| Button to callback object | Existing `0x140bd4dc0` looks up `splitinhalfbutton`, retaining it as `lVar4`, then binds `panel+0x3c0` through the button interface at `button+0x60`, virtual `+8`. | High |
| Callback construction | Saved xrefs to panel table `0x141145900` identify constructor `0x140bd2290`. It installs callback table `0x1410fc098` at `panel+0x3c0`, panel receiver at `+0x3c8`, and handler `0x140bd7c50` at `+0x400` (callback-relative `+0x40`). Instructions `0x140bd270d` and `0x140bd2714` load and store that handler address. | High for stored binding; generic callback dispatcher not traced |
| Handler to constructor | `0x140bd7c50` allocates `0xb8` bytes and calls `0x1403f7aa0` at `0x140bd7f62`. The call supplies owner identity, province identifier, unit virtual `+0x70` result, and a selected component-ID vector. | High for call/data flow |
| Submission | The same handler passes the resulting command to `0x140c3d960` at `0x140bd7fa0`. | High |
| Concrete command identity | `0x1403f7aa0` calls base initializer `0x1401554f0` with `0x28cc`, installs table `0x1410971c0`, and copies the supplied component-ID vector into command `+0xa0/+0xa8/+0xb0` when nonempty. | High |
| Execution address | Static PE pointer read: cell `0x1410971f0` (table `+0x30`) contains `0x1403f7bc0`. Previously retained command processor `0x140c3d9e0` dispatches commands through virtual `+0x30`. Existing function inventory recognizes `0x1403f7bc0` with 1,083 bytes. | High for dispatch target; body unexamined |

Sources: [existing UI binding export](../artifacts/phase6/functions/140bd4dc0.c), [saved entry xrefs](../artifacts/p6-fixup-ui-entry-xrefs.json), [panel constructor query](../artifacts/p6-split-callback-constructor.json), [handler query](../artifacts/p6-split-button-handler.json), [command constructor query](../artifacts/p6-split-command-constructor.json), [command table bytes](../artifacts/phase6-split-command-table.json), and [existing command processor](../artifacts/phase4/functions/140c3d9e0.c).

The [callback table window](../artifacts/phase6-split-callback-table.json) retains its first five pointer slots; it does not establish the entire table extent or dispatcher behavior.

## Relevant pseudocode and payload

Simplified analyst transcription of the confirmed chain; `selected_ids` denotes the handler's computed vector, not a recovered variable name:

```text
panel callback at +0x3c0:
    receiver = panel
    stored handler = 0x140bd7c50

handler(panel), when panel+0x40 and panel+0x44 are both zero:
    unit = *(panel+0x38)
    selected_ids = component IDs selected by strength-balancing logic
    command = allocate(0xb8)
    construct_1403f7aa0(command, owner_identity, province_id,
                       unit.virtual_70(), 0, selected_ids, unit.byte_157, 0)
    submit_140c3d960(session, command)

constructor:
    base_initialize(command, 0x28cc)
    command.vtable = 0x1410971c0
    copy selected_ids into command vector at +0xa0

command.vtable[+0x30] = 0x1403f7bc0
```

The handler computes component strength by summing eight fields `+0xa8` through `+0xc4`, including the previously established ship quantity field. With more than one component, it builds and adjusts an ID selection using accumulated strengths. This supports a whole-component balancing interpretation; exact balance quality and executor handling of an empty selection are not established here. No claim is made that it halves individual ship quantities.

The constructor stores the unit virtual `+0x70` result at command `+0x98` and the passed unit byte `+0x157` at command `+0x99`. The former is the previously identified navy test; carrying that flag is evidence of a naval discriminator in the payload, **not proof that fleet splitting succeeds or preserves flank assignments**. Constructor fields `+0x94` and `+0x9a` receive zero from this caller; byte `+0x9b` is initialized to one. Their full meanings remain unknown.

Readable exports: [panel constructor](../artifacts/phase6/functions/140bd2290.c), [split handler](../artifacts/phase6/functions/140bd7c50.c), [command constructor](../artifacts/phase6/functions/1403f7aa0.c). Authoritative JSON retains instructions, inferred types, references, and analysis limits. In particular, pointer-looking accumulator types in the handler are decompiler artifacts and are not proposed structure fields.

## Boundary and next question

The saved `p6-fixup-ui-entry-xrefs` result was inspected first; it was not rerun. Only the three function queries linked above were added. No unrelated load, RNG, scheduling, or combat investigation was continued. Pointer-table reads used the copied PE and existing inventory.

**Next unresolved question:** does executor `0x1403f7bc0` accept the naval discriminator and move selected components through the known removal/insertion helpers, and what guards preserve assignments and embarked cargo? Answering that requires a subsequent, separately authorized continuation. Naval-combat feasibility remains unproven.
