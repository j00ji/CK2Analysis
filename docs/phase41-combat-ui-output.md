# Phase 41: CombatView output-buffer and row data

**Question:** What output fields and category-7 values does `FUN_1403c2200` expect?

## Finding

Decompiler signature: `ulonglong* FUN_1403c2200(view, out, rowNode)`. The row key comes from `rowNode` virtual slot `+0x90`; the function returns the same caller-supplied `out` pointer. For the output object it writes:

| Offset | Observed write | Meaning / confidence |
|---|---|---|
| `+0x00..+0x1f` | `local_9d8` string | Primary display string; medium confidence |
| `+0x20..+0x3f` | `local_9b8` string | Secondary/detail string; medium confidence |
| `+0x40` | byte `1` | Flag, semantic name unknown |
| `+0x41` | byte `0` | Flag, semantic name unknown |
| `+0x48..+0x4b7` | 0x470-byte state copied from `local_990` | Opaque state initialized by `FUN_14037f130` |
| `+0x4b8..+0x4bb` | `uint32 0` | Meaning unknown |
| `+0x4bc` | byte `0` | Meaning unknown |

These stores occur at `0x1403c3cec–0x1403c3e55` in [the saved callback output](../artifacts/phase37-combat-ui-total.json). The recognized row keys remain the hard-coded land-category names plus `units_total`; there is no `galleys` key.

`FUN_14039d760` is only a wrapper that initializes a string and calls `FUN_14039d7d0`. The latter calculates damage/morale-style values through `FUN_140a2d950` and appends tooltip text; it does not take a category index argument or return a galley count. The callback's row key and output structure therefore do **not** expose a direct category-7 count parameter.

## Assessment and limits

The output is a caller-owned presentation object, not a simple `{label,count}` record. A detour must preserve string ownership and opaque embedded state. Exact meanings of the flags and `+0x48` payload, and the precise result-summary address for galley counts, remain unresolved; do not synthesize those fields yet. Evidence: [row helper exports](../artifacts/phase41-combat-ui-row-values.json) and [formatter export](../artifacts/phase41-combat-ui-format-helper.json). Static analysis only; no runtime or binary changes.

**New Ghidra queries this turn:** 3 function decompilations (`0x14039d760`, `0x14039e2e0`, `0x14039d7d0`).

**Next question:** Where does the result object store the per-side, per-category GALLEYS value consumed by the CombatView?
