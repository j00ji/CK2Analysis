# Phase 2: commands, movement timing, and capacity configuration

Date: 2026-10-17. Static local analysis of SHA-256 `cc2d65b51d9099b3d632fe3269fa647aaf7c00fcb00cc0240adbaa8e6bbbb75e`. No target execution or modification. All addresses are preferred VAs. Role names are analyst descriptions; source function names were not recovered.

## Capacity factor

Evidence: [bounded configuration listing](../artifacts/p2-capacity-config.json), [capacity function](../artifacts/phase2/functions/140b9f380.c), [string/global references](../artifacts/p2-config-vtables-xrefs.json).

At `0x140480a89`, `R8` receives `0x1416e26ac`; at `0x140480a90`, `RDX` receives `0x14109f150`, the string `NUMBER_OF_TROOPS_PER_GALLEY`. Instruction `0x140480a9e` calls `0x140474ab0` with these arguments and a local destination in RCX. This binds the capacity multiplier used by `0x140b9f380` to that named configuration item with high static confidence. It does not establish the value loaded in a running game or any mod's setting.

The observed capacity formula is the sum, across components, of each positive rounded-up `component+0xc4 / 1000` multiplied by that factor. Rounding the aggregate only once would not reproduce the observed implementation.

Follow-up [configuration helper export](../artifacts/p2-command-config-confirm.json), `0x140474ab0`, confirms a conditional numeric read followed by integer conversion and a write through its third argument. Thus the named binding above is a numeric configuration destination, not merely a descriptive string association.

## Movement request, command execution, and embarkation

Evidence: [selection/timing export](../artifacts/p2-selection-timing.json), [command execution export](../artifacts/p2-command-combat-boundary.json). Confidence: high for calls and state changes; medium for uninspected queue/selection manager roles.

`0x140b9cdc0(unit, destination, flag)` is a concrete movement-request function. It compares the destination with unit `+0x80`, checks destination permission through virtual `+0x80`, allocates a 0xd0-byte command, invokes constructor `0x140ba87a0`, and passes it to `0x140c3d960` with a manager obtained through virtual `+0xe0`. The latter's full enqueue/network behavior is not established. The flag controls route-request behavior; do not assign a particular mouse/modifier key without input evidence.

Its successful local-owner path uses `navy_move` versus `army_move`; rejection uses `illegal_move`. These are feedback resource selections, not proof of a mouse-selection handler. When the navy cannot enter a qualifying land destination but has embarked armies, it can generate movement commands for those armies individually. A same-location request with an existing route constructs a cancellation command through `0x140ba9440`; another branch creates an unload-like command for a carried army in land.

`0x140ba8980(command)` resolves a unit handle from command `+0x88`, adjusts the returned pointer by -0x10, and either computes a route or consumes the command's supplied route at `+0xa0`. Both branches call `0x140ba1800` to apply movement. Destination province ID is read from command `+0x90`; flags occur at `+0x94` and `+0xc8`. These offsets are relative to the command, not the unit. The route-construction helper is `0x1408cebc0`; its dispatch contract is not fully inspected.

`0x140ba94a0` resolves the command's unit and calls cancellation `0x140ba15e0`; its diagnostic includes `unitcommands.cpp` and `CancelMovement`. The earlier tooltip function `0x140bd3060` is not this executor.

`0x140ba99a0` resolves army and navy handles at command `+0x88` and `+0x98`, checks `0x140ba7980(navy, army)`, then calls load `0x140ba7c00`. It additionally performs UI/selection-related callbacks, participation cleanup, and army movement cancellation when applicable. Companion predicate `0x140ba9fc0` requires valid handles, an unembarked army, successful CanLoad, a zero army flag at `+0x221`, and either positive `+0xb4` state or a nonempty `+0x48` component count. This demonstrates why CanLoad alone does not encode every command precondition.

Follow-up [constructor export](../artifacts/p2-command-config-confirm.json), `0x140ba87a0`, sets command vtable `0x141144510`, stores the unit ID pair from unit `+0x20/+0x24` into command `+0x88/+0x8c`, stores destination at `+0x90`, and initializes the route fields at `+0xa0/+0xa8/+0xb0`. The shared base initializer receives numeric value `0x27f1`; its exact registry meaning is not yet established.

A [bounded raw pointer read](../artifacts/phase2-command-vtable.json) independently confirms vtable slot `+0x30` at cell `0x141144540` points to executor `0x140ba8980`. File offset 18102592 contains bytes `80 89 ba 40 01 00 00 00`. This connects the constructed command's concrete type to the observed route executor. The complete vtable extent and dispatch/queue implementation remain unexamined.

The exported `0x140bc1e80` changes unit-panel state and populates widgets; it is not established as a fleet-total count getter. UI input hit-testing and ownership of the complete selection set remain unresolved.

## Movement update and cost

Evidence: [unit update](../artifacts/phase2/functions/140b96b20.c), [cost helper](../artifacts/phase2/functions/140ba2760.c), [guarded cleanup](../artifacts/phase2/functions/140b9d1c0.c). Confidence: high for fields and branches; update cadence and modifier semantics unresolved.

`0x140b96b20` calls `0x140b9d1c0` before and after `0x140ba2870`, then updates additional unit state. If a previously nonempty route becomes empty and other state permits, it dispatches `0x1403bc0c0(manager, unit, province)`. It also calls navy-specific `0x140ba7fc0` after the navy type test. A function name such as DailyUpdate would be premature: its scheduler/callers have not been inspected.

`0x140b9d1c0` is **not a movement-speed refresh**. It is gated by byte `unit+0x220`, clears that flag, and processes participation/control objects at `+0x78` and `+0x68`, including removal/cleanup helpers. Its exact gameplay trigger remains unproven. There are no writes to `+0x218/+0x21c` in this export.

`0x140ba2760(unit, out_cost, destination)` supplies the edge cost used by the army movement-lock predicate. Simplified faithful pseudocode:

```c
if (destination_is_sea && current_is_land && unit_is_army)
    *out_cost = DAT_1416e2b1c;
else if (destination_is_land && current_is_sea && unit_is_army)
    *out_cost = DAT_1416e2bb0;
else {
    i = FUN_140959c40(current_definition, destination_id);
    *out_cost = i < 0 ? 1000 : current_definition.adjacency[i].int_at_0c;
}
return out_cost;
```

This adds a confirmed cost field at adjacency record `+0x0c` to the previously established 24-byte record. The two transition globals' configuration names and units remain unresolved. The full speed formula and writers of unit `+0x218/+0x21c` remain open.

`0x140ba1ff0` applies an army-only movement-lock check: when enabled and a route exists, progress times 1000 divided by this edge cost must be greater than 500. Fleet movement therefore cannot enter that particular preservation branch through this predicate. This does not imply fleets have no other cancellation restrictions.

## Next reads

Trace command constructor/vtable registration and `0x140c3d960` before claiming a complete input or network command chain. Trace update callers and progress-field writers before labeling tick frequency or speed units. Carry the confirmed arrival guards into Phase 3; do not infer a patch site from a single branch.
