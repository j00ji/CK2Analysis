# Phase 2: offline unit-panel investigation

Follow-up: [command/timing notes](phase2-command-notes.md) now bind the capacity multiplier to `NUMBER_OF_TROOPS_PER_GALLEY` and identify concrete movement/embark command handlers. [Movement notes](phase2-movement-notes.md) resolve both derived destination-permission methods. These supplement the offline UI evidence below.

Date: 2026-10-17. Static analysis only; no target execution or modification.
Target identity is recorded by the source dossier as SHA-256
`cc2d65b51d9099b3d632fe3269fa647aaf7c00fcb00cc0240adbaa8e6bbbb75e`.

This note inspects existing artifacts without opening the analysis database.
The authoritative source for instruction addresses below is
[fleet-functions-initial.json](../artifacts/fleet-functions-initial.json), entry
`0x140bd3060`; readable pseudocode is
[function-140bd3060.c](../artifacts/function-140bd3060.c).

## UI role and object boundaries

`FUN_140bd3060` builds descriptions for widgets including `loadtoshipbutton`,
`select_unit_button`, `embarked_unit`, split buttons, and army statistics.
It initializes and returns `param_2`, appending localization results to its
first and second string-like members. This supports a **tooltip builder**
interpretation, rather than evidence that the function executes unit orders.
Confidence: high for text production, medium-high for the precise UI role.

For this note, `panel = param_1`, `unit = ptr(panel+0x38)`, and
`locationCandidate = ptr(unit+0x80)` are analyst aliases, not recovered types.
The widget container at `panel+0x30` belongs to the UI object. Offsets relative
to `unit` or virtual-returned objects must not be applied to `panel`.

## Embark candidate search

When the load-to-ship widget's state predicate is true, the tooltip code scans
a linked collection rooted at `ptr(locationCandidate+0xcc0)`. It filters
objects by virtual method `+0x70`, compares values read from their `+0x170`
against the current unit's corresponding value (using `FUN_140b96ae0` as a
fallback when zero), then invokes `FUN_140ba7980`.

Instruction evidence:

| Address | Observation |
|---|---|
| `0x140bd42a9` | Loads collection head from `[RBX+0xcc0]` |
| `0x140bd42b9` | Candidate payload is the first pointer in a node |
| `0x140bd42bc` | Next node pointer is at node `+0x10` |
| `0x140bd42c7` | Calls candidate virtual slot `+0x70`; zero skips candidate |
| `0x140bd42ce` | Reads candidate pointer at `+0x170` |
| `0x140bd42de` | Calls `FUN_140b96ae0(candidate)` when that pointer is zero |
| `0x140bd42ea` | Reads current-unit pointer at `+0x170` |
| `0x140bd42f6` | Calls same fallback for current unit |
| `0x140bd42fb` | Compares the resolved pointers; inequality skips candidate |
| `0x140bd4307` | Calls current-unit virtual slot `+0x50`; stores result in RDI |
| `0x140bd4314` | Calls candidate virtual slot `+0x60` |
| `0x140bd4317` | Puts candidate virtual return into RCX |
| `0x140bd431a` | Puts current-unit virtual return (RDI) into RDX |
| `0x140bd431d` | Calls `FUN_140ba7980` with those two register arguments |
| `0x140bd4322` | Tests return byte; zero continues searching |

The last call illustrates a concrete decompiler limitation: saved pseudocode
prints only one argument, but the preceding instructions establish **two**.
The following transcription repairs that local omission; class/method names
remain deliberately unspecified:

```c
for (node = ptr(ptr(unit+0x80)+0xcc0); node; node = ptr(node+0x10)) {
    candidate = ptr(node);
    if (!vcall(candidate, 0x70)) continue;
    a = ptr(candidate+0x170);
    if (!a) a = FUN_140b96ae0(candidate);
    b = ptr(unit+0x170);
    if (!b) b = FUN_140b96ae0(unit);
    if (a != b) continue;
    armyCandidate = vcall(unit, 0x50);
    fleetCandidate = vcall(candidate, 0x60);
    if (FUN_140ba7980(fleetCandidate, armyCandidate)) {
        // Tooltip takes LOADSHIP_UNIT_FAILDESC2 branch.
        break;
    }
}
// Exhaustion takes LOADSHIP_UNIT_FAILDESC branch.
```

Confidence: high for collection traversal, exact offsets, register arguments,
and string-branch associations. Medium for a same-location fleet candidate
scan, supported by nearby location UI and loaded-navy branches. The identity
of `+0x170` as owner/controller is only a **hypothesis**. The collection is
not yet proven to contain exclusively fleets, nor proven to be a sea-zone
collection; the virtual filter implies a potentially broader unit collection.
No enemy/hostility check is identified here.

The two failure localization keys have no loaded translations in this
workspace. Their exact user-facing meanings must not be guessed. The
predicate's semantics require inspection of `0x140ba7980`.

## Embarked-state checks in split descriptions

The new-unit and split-in-half tooltip branches both perform these checks:

```c
if (vcall(unit, 0x70) && i32(vcall(unit, 0x60)+0x240) > 0)
    append("SPLIT_LOADED_NAVY");
else if (vcall(unit, 0x68) && ptr(vcall(unit, 0x50)+0x230) != 0)
    append("SPLIT_LOADED_ARMY");
```

The `+0x240` comparisons are at `0x140bd39e4` and `0x140bd3ca3`;
the `+0x230` comparisons are at `0x140bd3a55` and `0x140bd3d14`.
This gives strong contextual evidence that virtual `+0x70/+0x60` are
navy discrimination/access and virtual `+0x68/+0x50` are army
discrimination/access. Exact class layout and vtable implementations remain
unresolved. In particular, `+0x240` is a 32-bit positive-count check associated
with a loaded navy; it is **not yet a confirmed ship count or embarked count**.
`+0x230` is a nonnull pointer associated with an embarked army; its pointed-to
type is not yet proven.

Other tooltip guards associate unit `+0xb4 > 0` with `SPLIT_RETREATING`,
and nonnull `unit+0x68` with a nonzero 32-bit value at pointed object `+8`
with `SPLIT_IN_COMBAT`. These are read-side state correlations, not full
definitions of retreat enums or battle-object structure.

The `select_unit_button` branch only emits `SELECT_UNIT` and
`SELECT_UNIT_DRO`. It does not establish the selection command handler.

The leader tooltip gives another location classification lead. After requiring
virtual slot `+0x70` to return nonzero at `0x140bd4d53`, the function reads
`unit+0x80` (`0x140bd4d5e`), then that object's `+0xf0`
(`0x140bd4d65`), then compares a byte at the second object's `+0x64`
(`0x140bd4d6c`). Zero takes `CANNOT_CHANGE_LEADER_AT_SEA`
(`0x140bd4d72`). This supports an association between that nested map-object
flag and the land/sea distinction, but the byte's complete classification
domain is not yet known. It also establishes why interpreting `unit+0x80` as
a location object is plausible beyond the load-to-ship scan alone.

## Next concrete targets

1. Decompile `0x140ba7980`, explicitly verifying both incoming arguments;
   this directly connects a fleet-like candidate to an army-like object.
2. Decompile `0x140b96ae0` to resolve the comparison domain of `+0x170`.
3. Resolve xrefs to `LOAD_CAPACITY_DESC` (`0x141144f20`), `ship_amount`
   (`0x141144988`), `load_capacity_amount` (`0x141144e00`), and
   `NUM_SHIPS_IN_SUBUNIT` (`0x141144ee8`) for independent count/capacity reads.
   These addresses come from [ghidra-strings.tsv](../artifacts/ghidra-strings.tsv).
4. Inspect `0x140bd4dc0`, `0x140bd55f0`, `0x140bd2990`, and `0x140bd5c40`,
   which have saved direct string xrefs to `button_embarked` or
   `embarked_unit` in [fleet-search.json](../artifacts/fleet-search.json).
   Their exact roles remain unclassified.
5. Resolve concrete vtables before assigning class fields, then corroborate
   location `+0xcc0` with collection writes and movement/arrival code.

The scan establishes a promising local collection access for detecting
co-located units. It does not establish naval hostility, combat initiation,
or feasibility of a safe engine extension.

## Follow-up: transport predicate and allocation evidence

Additional evidence: [p2-core-functions.json](../artifacts/p2-core-functions.json),
entries `0x140ba7980`, `0x140b96ae0`, `0x140bc0530`, `0x140bc0960`,
and `0x1405c54e0`. Readable exports are in
[artifacts/phase2/functions](../artifacts/phase2/functions).

`0x1405c54e0` calls `0x140ba7980` at `0x1405c6268`, and its failure path
loads assertion text `pNavy->CanLoad( pArmy )` at `0x1405c62b5`. It then calls
`0x140ba7c00` at `0x1405c62dc` with the same navy/army objects. This is strong
independent corroboration that `0x140ba7980` implements a navy loading
eligibility predicate and that its two parameters are navy then army.
`CanLoad` is supported by an embedded source assertion, not merely an analyst
name inferred from the tooltip.

The predicate requires:

- Equal resolved pointers at navy/army `+0x170`; lazy resolution uses
  `FUN_1400d3090(object+0x168)` and fallback global `DAT_1416e2360`.
- Navy `+0x68` null or the pointed object's 32-bit value at `+8` zero.
- Navy 32-bit values at `+0xa0` and `+0xb4` less than 1.
- The sum of eight 32-bit entries at offsets `+0x10,+0x14,...,+0x2c`
  in each of two helper results no greater than
  `FUN_140b9f380(navy) * 1000`.

The two helper calls are `FUN_140ba47e0(army, temporary, 1)` at
`0x140ba7a50`, and `FUN_140bbb130(navy+0x230, temporary, 1)` at
`0x140ba7a6b`. The right-hand helper call and multiplication are at
`0x140ba7a3a` and `0x140ba7a42`. The two summaries strongly suggest the
prospective army and already embarked armies, but their layouts and units
still need direct helper inspection. In particular, the right-hand helper
must be inspected before asserting the per-ship capacity or scaling.

`FUN_140b96ae0` is the same lazy pointer-resolution fallback seen inline
in this predicate. Its saved pseudocode declares `void` despite callers
using a result; inspect its instructions before deciding its return contract.
This proves pointer caching, but does not alone identify the object domain
as owner, character, or realm.

The assertion caller also supplies type-allocation evidence:

| Instruction | Observation |
|---|---|
| `0x1405c5ec7` | Supplies allocation size `0x250` for the subsequent navy object |
| `0x1405c5edb` | Calls navy constructor candidate `0x140ba7310` |
| `0x1405c5ef3` | Calls shared `0x140b98e30(navy, locationCandidate)` |
| `0x1405c6041` | Calls `0x140b97bb0(navy, subunitCandidate, -1)` |
| `0x1405c60d7` | Calls army constructor candidate `0x1401add10` after `0x240` allocation |
| `0x1405c60ef` | Calls shared `0x140b98e30(army, locationCandidate)` |
| `0x1405c6230` | Calls `0x140b97bb0(army, subunitCandidate, -1)` |

The navy's apparent subunit uses allocation size `0x1b0` and constructor
`0x140a2a420`, also used by the army branch. Allocation sizes apply to these
observed concrete allocations, not every possible unit implementation.
Inspect `0x140ba7310` and `0x140ba7c00` next for vtables and load writes.

## Follow-up: ship count display

`0x140bc0530` resolves an object through `FUN_1400d3090(panel+0x58)`,
reads its signed 32-bit `+0xc4` at `0x140bc07eb`, and displays that value
divided by 1000 with upward rounding for a positive fractional remainder
in the widget `ship_amount`. It also updates `ship_name`, `ship_icon`,
`ship_shield`, and `transferbutton`.

Confidence: high for the displayed calculation and offset; medium for
interpreting this as a subunit's ship amount. This `+0xc4` belongs to the
resolved data object, not the UI panel and not yet a confirmed whole-fleet
count field. `0x140bc0960` only initializes a widget property from
`SingleUnitPanel`; it supplies no count calculation.

## Follow-up: capacity and troop aggregation

Evidence: [p2-counts-path-movement.json](../artifacts/p2-counts-path-movement.json),
entries `0x140b9f380`, `0x140ba47e0`, and `0x140bbb130`.

`FUN_140b9f380` traverses the linked collection at unit `+0x38`, reading
each payload's signed 32-bit `+0xc4`. It applies the same positive upward
rounding of `/1000` observed in `ship_amount`, multiplies each member's
rounded count by global signed integer `DAT_1416e26ac`, then sums them.
The routine is therefore a **transport-capacity getter**, not a bare ship
count getter. The global's name and runtime value are unproven in this pass.
For nonnegative ship amounts, the observed relationship is:

```text
capacity = sum_over_subunits(ceil(ship_amount_fixed / 1000) * global_factor)
```

This rounds each subunit independently. It is not equivalent to rounding a
fleet's total after summing fractional subunits. Confidence: high for formula
and linkage to transport eligibility; no claim about a default numeric
capacity per ship until the global's initialization is inspected.

`FUN_140ba47e0` traverses the same unit collection and sums members'
eight 32-bit entries at `+0xa8..+0xc4` into result `+0x10..+0x2c`, and
members' eight entries at `+0xc8..+0xe4` into result `+0x30..+0x4c`.
The first array supplies CanLoad's prospective-army size. This corroborates
`+0xc4` as the eighth category in a common subunit amount representation,
with ship UI selecting that category. Precise labels for the other seven
categories and the second array remain unresolved.

`FUN_140bbb130` traverses the collection supplied in argument 1 and sums
`FUN_140ba47e0` results for each member. It accepts **four** arguments,
although the original CanLoad pseudocode prints only three. In the CanLoad
instruction listing, `0x140ba7a55` sets R9B to 1 and `0x140ba7a5f` copies
that value into R8D before the call at `0x140ba7a6b`. Therefore the actual
call is:

```c
FUN_140bbb130(navy+0x230, temporary, 1, 1);
```

Its fourth argument equal to 1 bypasses the per-member `+0xb4 < 1` filter,
so this capacity check includes the entire supplied collection even when a
member's retreat-correlated state is positive. Its third argument equal
to 1 passes through to `FUN_140ba47e0`, bypassing that routine's optional
scaling using member `+0x138`.

## Follow-up: resolved types and embarked-list writes

Evidence: [p2-fleet-structure.json](../artifacts/p2-fleet-structure.json),
entries `0x140ba7310`, `0x1401add10`, `0x140ba7c00`, `0x140ba7d10`.
These supersede the earlier uncertainty about the loaded-navy `+0x240`
and loaded-army `+0x230` checks.

`0x140ba7310` invokes common initialization `0x140b95100`, sets the primary
vtable to `0x1411430f8`, initializes list-like fields at `+0x230/+0x238`
and 32-bit `+0x240` to zero. The army constructor `0x1401add10` uses
the same common initialization, sets primary vtable `0x141075b70`, and
zeros pointers at `+0x230/+0x238`.

Raw PE read-only inspection resolves these tables as follows. The executable
was read as bytes, not loaded as executable code. VA-to-file mapping used
the verified `.rdata` base `0x140ff9000`, raw offset 16745472, and `.text`
base `0x140001000`, raw offset 1024 from
[pe-overview.json](../artifacts/pe-overview.json).
Exact pointer-cell VAs, file offsets, raw bytes, decoded pointers, and target
stub bytes are preserved in [phase2-vtables.json](../artifacts/phase2-vtables.json)
with the executable SHA-256.

| Vtable byte slot | Navy `0x1411430f8` | Army `0x141075b70` |
|---|---|---|
| `+0x50` | `0x1400ae560`, return null | `0x1400b1220`, return this |
| `+0x60` | `0x1400b1220`, return this | `0x1400ae560`, return null |
| `+0x68` | `0x1400ae540`, return false | `0x1400ae550`, return true |
| `+0x70` | `0x1400ae550`, return true | `0x1400ae540`, return false |
| `+0x80` | `0x140ba7380` | `0x140ba6360` |

Decoded stub byte evidence: `0x1400ae560 = 33 C0 C3`
(`xor eax,eax; ret`), `0x1400b1220 = 48 8B C1 C3`
(`mov rax,rcx; ret`), `0x1400ae540 = 32 C0 C3`
(`xor al,al; ret`), `0x1400ae550 = B0 01 C3`
(`mov al,1; ret`). Thus the earlier type/accessor interpretation is now
confirmed for these concrete constructed army/navy classes. Slot `+0x80`
functions are targets for movement/arrival investigation, not established
as such solely by their vtable positions.

`FUN_140ba7c00(navy, army)` writes the actual transport linkage:

- At `0x140ba7c7e`, writes navy pointer to army `+0x230`.
- Allocates a `0x20`-byte node: army pointer at `+0`, previous node at `+8`,
  next node at `+0x10`, zero byte at `+0x18`.
- Reads old navy tail `+0x238` at `0x140ba7cac`, stores new tail there
  at `0x140ba7cd7`, increments navy 32-bit `+0x240` at `0x140ba7ce1`.
- If old count was zero, stores the new node in navy head `+0x230`
  at `0x140ba7cf1`; otherwise links it through old tail `+0x10`.

Therefore navy `+0x230/+0x238/+0x240` are confirmed embarked-army list
head/tail/count, while army `+0x230` is a transport-navy backpointer.
These offsets have different roles in the two concrete derived classes.
This is also direct evidence that one navy can contain multiple army
objects; the list is not just a troop total.

`FUN_140ba7d10(navy, army)` clears army `+0x230` at `0x140ba7d2d`,
finds the navy list node with that army payload, and calls list-removal
helper `0x1400d4c30` at `0x140ba7d88`. Both load/unload clamp each army
member's signed 32-bit `+0x40` to 500 when greater than 500. The field's
identity as morale has not been independently verified here, so only the
clamp is confirmed.

Loading also clears an attachment vector at army `+0x1a8/+0x1b0`, resetting
each linked unit's `+0x1c0` when it pointed back to this army. This is
consistent with the separate attach/detach tooltip paths.
