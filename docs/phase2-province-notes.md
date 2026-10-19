# Phase 2 province and naval-path working notes

Date: 2026-10-18 UTC. Offline review of previously exported Ghidra evidence and read-only PE bytes. No target execution or modification. Binary SHA-256 rechecked during this pass: `cc2d65b51d9099b3d632fe3269fa647aaf7c00fcb00cc0240adbaa8e6bbbb75e`.

## Pointer-table lead

The known naval-path text formatter `0x140b768f0` has an incoming data reference at `0x14112ac18` in [fleet-functions-initial.json](../artifacts/fleet-functions-initial.json). Reading little-endian eight-byte values directly from the copied PE confirms this pointer and the following neighborhood. Function labels and byte counts come from [ghidra-functions.tsv](../artifacts/ghidra-functions.tsv), not original symbols.

| Pointer VA | Raw pointer value | Analyzed body bytes | Interpretation |
|---|---|---:|---|
| `0x14112abc0` | `0x140ab90e0` | 135 | Candidate beginning of table; not yet established by an object initializer |
| `0x14112abe0` | `0x140b76670` | 113 | Distinctive nearby function, role unresolved |
| `0x14112abf0` | `0x140b76720` | 460 | Priority candidate for actual predicate evaluation |
| `0x14112ac00` | `0x140b766f0` | 35 | Distinctive nearby small method, role unresolved |
| `0x14112ac18` | `0x140b768f0` | 926 | Confirmed formatter by its previously exported pseudocode |
| `0x14112ac20` | `0x140acf0e0` | 1137 | Repeated common method in adjacent table patterns |
| `0x14112ac28` | `0x140acf560` | 147 | Repeated common method in adjacent table patterns |
| `0x14112ac40` | `0x1400ae560` | 3 | Last element in candidate pattern |
| `0x14112ac48` | `0x140832620` | 52 | Candidate beginning of next table; do not assume it belongs to naval path |

Pointer confidence: **high**, raw bytes read directly. Table boundaries/virtual-method role: **medium to low**, inferred from repetition only. Candidate predicate role: **low** until decompiled.

The blocks at `0x14112ab38`, `0x14112abc0`, and `0x14112ac48` repeat common function pointers at matching positions and are spaced `0x88` bytes apart. In the middle block, the known formatter is at candidate offset `+0x58`, and the 460-byte candidate is at `+0x30`. This suggests a related class dispatch layout but does not establish RTTI, class names, or a vtable's true origin. No method should be renamed solely on this pattern.

PE mapping used: `.rdata` preferred VA `0x140ff9000`, raw file offset `0xff8400`; the pointer at `0x14112abf0` is at file offset `0x1129ff0`, and the formatter pointer is at file offset `0x112a018`. The full section metadata is in [pe-overview.json](../artifacts/pe-overview.json). Reads used `struct.unpack_from('<Q', bytes, raw_offset + va - section_va)` and did not load the executable.

## Review of the distance cache

The previously exported [initializer](../artifacts/function-14081eb60.c) assigns dense indices to qualifying objects and allocates the matrix. Its call to [cache reader](../artifacts/function-14081b0f0.c) does not use the returned success/failure result in the decompiled caller. Therefore **this initializer does not demonstrate eager calculation on cache failure**. A later lazy fill or separate precomputation remains possible. This is a useful search constraint, not evidence that the cache is unused.

The [constructor-like function](../artifacts/function-140817c00.c) initializes fields consistent with the previously documented matrix: `param_1[0x766] = 0` covers byte offsets `+0x3b30..+0x3b37`, `param_1[0x768] = 0` sets pointer-sized storage at byte `+0x3b40`, and `*(undefined4 *)(param_1 + 0x769) = 0` sets byte `+0x3b48`. The decompiler's pointer indexing uses eight-byte elements. `+0x3b38` is reset explicitly by the matrix initializer. Avoid treating the typed array indices as byte offsets.

The constructor stores `0x1410e0068` in the object's first pointer and is called by `0x140817ad0` at `0x140817b02` according to [naval-distance-cache.json](../artifacts/naval-distance-cache.json). These are useful future identity/ownership leads. The first field's class identity is not yet recovered.

## Exact follow-up requests

1. Decompile `0x140b76720`, `0x140b76670`, and `0x140b766f0`; trace the first substantive path/distance call, not generic string or comparison helpers.
2. Find code references to candidate table origin `0x14112abc0` to establish the constructed object's dispatch pointer and structure.
3. Decompile `0x140959950` to interpret the existing matrix inclusion predicate; byte `+0x64` and byte `+0x68` remain unnamed until independent evidence establishes their meaning.
4. Trace reads of the matrix pointer at manager byte `+0x3b40` from concrete predicate callees. The cache initializer alone does not show calculation, distance units, movement, or arrival.
5. If identity is needed, decompile allocator/constructor caller `0x140817ad0` and inspect references to `0x1410e0068`.

These notes do not identify fleet object layout, ship counts, capacity, embarked troops, fleet arrival, or multiple-fleet detection. They narrow the next investigation to executable addresses with local evidence.

## Follow-up: predicate and related-object traversal recovered

The parent analysis batch [p2-core-functions.json](../artifacts/p2-core-functions.json) completed all five requested functions. This upgrades `0x140b76720` from table-based speculation to **high-confidence naval-path/distance trigger evaluation**, based on its shared table with the formatter, scope/target resolution, distance output, and boolean return. In particular:

- It reads an integer from context `+0x14` at `0x140b76741` and resolves the target with `0x1406e7e40(trigger+0x90, context, 0)`.
- At `0x140b76890`, it calls `0x14081b7a0(global 0x1416e32d8, &distance, source_integer, target_integer)`.
- Negative `distance` takes a false-return path at `0x140b7689a`. A zero configured threshold accepts a nonnegative distance. A nonzero threshold calls `0x140ad1fe0` at `0x140b768c7`; the exact comparison operator is still unresolved.
- Invalid scope/target paths reference the build path ending `triggerimplementation.cpp` and diagnostic messages `Invalid scope` / `Invalid target`.
- Ghidra represents some false paths as a 64-bit value with only its low byte cleared. These are low-byte boolean results; do not describe the upper bits as meaningful distances or errors.

Condensed, analyst-named transcription (diagnostics and temporary-string cleanup omitted):

```c
source = i32(context + 0x14);
target = FUN_1406e7e40(trigger + 0x90, context, 0);
if (source == 0 || target == 0) return false;
FUN_14081b7a0(ptr(0x1416e32d8), &distance, source, target);
if (distance < 0) return false;
FUN_140554460(trigger, &threshold, context);
return threshold == 0 || FUN_140ad1fe0(trigger, &distance, &threshold);
```

The small table companions are parsing/setup helpers: `0x140b76670` dispatches on numeric values `0x6b` and `0x29fd` and updates `trigger+0x90` or threshold-related storage; `0x140b766f0` tests an input type against 3 and calls `0x1406da950(trigger+0x90)`. Their exact script grammar has not been recovered. `0x140832620` is deletion/destructor-like code shared by many tables and does not identify naval path behavior.

`0x140959950` establishes more of the map-object relation container. It returns false if the global manager is null or the input object's byte `+0x64` is nonzero. Otherwise it traverses 24-byte records between pointer `+0x198` and pointer `+0x1a0`, reads a signed 32-bit object index at each record `+4`, looks it up in manager `+0x32c0`, and returns false if any related object's byte `+0x64` is zero. If the loop finishes, including an empty container, it returns true. Instructions corroborate the record read (`0x1409599f3`), lookup (`0x1409599ff`), byte test (`0x140959a03`), and 24-byte increment (`0x140959a23`). Confidence: **high** for offsets and control flow, **medium** for adjacency-list interpretation. No container capacity field was observed by this helper.

```c
if (!manager || u8(object + 0x64) != 0) return false;
for (p = ptr(object + 0x198); p < ptr(object + 0x1a0); p += 24) {
    related = ptr(ptr(manager + 0x32c0) + 8*i32(p + 4));
    if (u8(related + 0x64) == 0) return false;
}
return true;
```

This transcription assumes a valid ordered record range and omits the decompiler's defensive per-index branch. The actual export contains bounds checks and a fallback index zero when its per-record index is out of bounds. It does not show bounds checking of the related-object ID against the manager's table size.

Independent UI evidence in [fleet-functions-initial.json](../artifacts/fleet-functions-initial.json) points from the selected object (`[RSI+0x38]`) through `+0x80`, then `+0xf0`, to the definition-like object. Instructions `0x140bd4d5e`, `0x140bd4d65`, and `0x140bd4d6c` establish that chain and the `+0x64` byte check. If zero, `0x140bd4d72` loads `0x1411452c0`, verified as `CANNOT_CHANGE_LEADER_AT_SEA` in [pe-strings.tsv](../artifacts/pe-strings.tsv). If that object identity is corroborated with this helper's records, a nonzero `+0x64` is a land indicator, and this helper resembles an isolated-water/lake predicate. This interpretation remains **tentative**, especially for special province types and empty adjacency lists; it is not an assertion that all non-land objects are navigable sea zones.

## Follow-up: actual matrix consumer and coastal classification

Evidence: [p2-counts-path-movement.json](../artifacts/p2-counts-path-movement.json), all three functions below decompiled successfully. This resolves the earlier cache-miss question: **the naval-distance matrix is filled lazily by `0x14081b7a0`**, called by the naval trigger.

`0x14081b7a0(manager, out, source_id, target_id)` sorts the two input IDs, looks up their definition objects in manager `+0x32c0`, and obtains dense indices from definition `+0x1b8`. It returns `-2000` when either dense index is negative. Otherwise it reads the four-byte entry in manager `+0x3b40`, using `index2*N+index1` with N at manager `+0x3b38`.

If the entry is nonpositive and not `-2000`, it resolves two endpoint objects through `0x140822200` using each definition's 16-bit `+0x50` ID, and calls `0x1408cf780` to obtain a linked path. Failure leaves the calculated value at `-2000`; success traverses nodes containing a 32-bit ID at `+0` and next pointer at `+0x10`. Each visited node references another definition via the same manager table. Edge calculations use signed 16-bit coordinate-like values at `+0xa4` and `+0xa6` and call `0x140e57a68` on the sum of squared differences.

The function accumulates the returned edge metric, writes cumulative values for source-to-intermediate entries in **both directions**, writes the final source/target entries in both directions, and sets manager byte `+0x3d40` to 1. The flag is a candidate cache-dirty indicator; its consumer has not yet been checked. Path nodes are freed with size `0x20` after calculation. The return value is the caller's output pointer; the result lives in its 32-bit pointed value.

Interpretation and confidence:

| Observation | Interpretation | Confidence / limit |
|---|---|---|
| Initializer writes `-1000`; consumer recalculates nonpositive entries except `-2000` | `-1000` is an uncomputed marker in this workflow | High; zero is also recalculated |
| Negative dense index immediately returns `-2000`; route failure caches `-2000` | Invalid-endpoint or no-route marker | High; does not distinguish the two cases |
| Positive entries are used without recomputation | Positive distance cache | High |
| Metric reads signed shorts at `+0xa4/+0xa6` | Map position/coordinate pair | Medium until their writers are inspected |
| Squared differences feed `0x140e57a68` | Likely square root for Euclidean distance | Hypothesis pending helper inspection |
| Scale constants `1000.0` and `0.5` | Integer fixed-point rounding/scaling | High for values/code, physical distance units unknown |

The two float constants were read directly from PE bytes: `0x141164eec` (file offset `0x11642ec`) contains `00 00 7a 44` = `1000.0`; `0x141164be0` (file offset `0x1163fe0`) contains `00 00 00 3f` = `0.5`. The decompiler shows two scaling/rounding stages; preserve the complete export rather than simplifying them into a precise geometric formula before the math helper is checked. This supports, but does not independently prove, the formatter's `/1000` unit relationship.

`0x140821b50` provides an independent writer for candidate coastal flags. It loops manager definitions; for each definition with `+0x64 == 0`, helper `0x140959950 == false`, and `+0x6b == 0`, it traverses the same 24-byte related-object records. Related definitions with `+0x64 != 0` receive `+0x68 = 1`. If at least one was found, the original non-land definition receives `+0x69 = 1`. This coheres with **coastal land at `+0x68` and coastal sea at `+0x69`**, conditional on the independent UI evidence for the land flag. `+0x6b` remains unnamed. Definition adjacency interpretation is now stronger but the record-creation routine has not been inspected.

Combining this writer with `0x14081eb60`, the matrix includes definitions marked coastal (`+0x68`), plus non-land definitions that are not isolated according to `0x140959950`. This explains why it is wrong to describe the matrix as containing sea zones alone. Each field is relative to the map definition object, not to a fleet or a runtime province object.

The third function, `0x14062b800`, parses graphical-map data and reports `Province ... has illegal capital location` from a build path ending `eu3graphicalmap.cpp`. It uses rectangle-like data at definition `+0x188` and graphical map positions; it is not a distance-calculation routine. Prioritize `0x1408cf780` for the actual route restrictions, `0x140822200` for runtime province/definition identity, and `0x140e57a68` to confirm the metric operation.

## Follow-up: province identity and naval route restrictions

Evidence: [p2-arrival-path.json](../artifacts/p2-arrival-path.json). All three requested functions decompiled successfully.

`0x140822200(manager, id)` resolves a province pointer from the manager's pointer vector beginning at `+0x3260` and ending at `+0x3268`. A high out-of-range index logs `Province ... referenced but does nor exist` (sic), with `map.cpp` in the diagnostic source path, then returns the vector's first pointer. The signed comparison does **not** establish safe handling of negative IDs; callers must supply valid IDs. This vector is distinct from definition pointers at `+0x32c0`.

`0x1408cf780` consumes the resolved runtime province pointers and constructs a naval route. It accesses runtime province ID `+0xe8` (16-bit) for a visited bitmap and runtime province `+0xf0` to obtain the map definition. It then traverses the same definition relation records at `+0x198..+0x1a0`, resolves neighbor IDs from record `+4` via `0x140822200`, and inspects the resulting definitions. This confirms **province adjacency** much more strongly than the initial isolated-object helper alone, and links the runtime/definition distinction to the UI chain.

For each potential neighbor:

1. Record 32-bit type at `+0` must not equal 3. Its enum name remains unknown.
2. The neighbor may be the final target. Otherwise its definition must have `+0x64 == 0`, `0x140959950(definition) == false`, and byte `+0x6b == 0`.
3. The runtime province's visited byte must still be zero.

Thus destination provinces can bypass the intermediate-node land/isolation/extra-flag restrictions; they still obey edge type and visited checks. This fits routes between coastal land endpoints through navigable non-land intermediates. It does not implement or check hostile-fleet occupancy: the inspected function uses topology, definition flags, coordinates, and visited/search state. That bounded observation does not establish that the rest of movement lacks hostile detection.

The search creates 24-byte work records holding a runtime province pointer at `+0`, combined priority at `+8`, accumulated path cost at `+0xc`, and parent-work-record pointer at `+0x10`. It computes edge cost from Euclidean distance between definition `+0xa4/+0xa6`, scaled by 1000 and rounded with 0.5. The priority additionally includes an integer square-root estimate to the target scaled by 1000. This is **A*-like search (medium confidence)**; the priority-container helpers were not examined, so exact ordering and optimality are not claimed. The route is reconstructed through `0x1408cead0`; the output is a separate linked list. Its first element is removed before success is returned, apparently dropping the origin. Exact reconstruction behavior awaits that helper if required.

`0x140e57a68` confirms the square-root metric: the decompiler emits `return SQRT(param_1)` for ordinary nonnegative input. Its instruction at `0x140e57b24` is `SQRTSD` and the directly inspected bytes are `f2 0f 51 54 24 60`. Other branches handle NaN and negative-input errors. The earlier math-operation hypothesis is resolved; coordinate physical units and coordinate writers remain unknown.

Current map-side structure observations (all byte offsets):

| Object | Offset | Evidence-backed role |
|---|---|---|
| Map manager | `+0x3258` | Definition count / visited-bitmap allocation bound |
| Map manager | `+0x3260/+0x3268` | Runtime province pointer-vector begin/end |
| Map manager | `+0x32c0` | Map-definition pointer array |
| Runtime province | `+0xe8` | 16-bit ID used by route visited map |
| Runtime province | `+0xf0` | Definition pointer |
| Map definition | `+0x50` | 16-bit ID passed to runtime province lookup |
| Map definition | `+0x64` | Land/non-land byte, supported by route/UI/coastal-marking code |
| Map definition | `+0x68/+0x69` | Coastal-land/coastal-nonland flags, inferred from adjacency-marking writer |
| Map definition | `+0x6b` | Additional route/coastal-classification exclusion flag, unnamed |
| Map definition | `+0xa4/+0xa6` | Signed 16-bit map coordinate pair used in route cost |
| Map definition | `+0x198/+0x1a0` | Begin/end of 24-byte adjacency records |
| Adjacency record | `+0/+4` | 32-bit edge type / neighbor province ID |
| Map definition | `+0x1b8` | Dense naval-distance matrix index |

No runtime structure size, complete C++ class layout, or writer for the coordinate/land bytes is established by this table. Static data flow identifies the roles; runtime values have not been observed.

Sentinel scope: the observed initializer writes `-1000`, and this consumer writes or returns `-2000` for the stated failure paths. Other code or loaded cache data could contain additional values. The consumer specifically recalculates every nonpositive value except `-2000`; these two values are not claimed to exhaust a global engine enum. No runtime cache samples were read.
