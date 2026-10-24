# Phase 42: GALLEYS slots in the battle result object

**Question:** Where does the terminal result object store per-side category-7 values?

## Finding

`FUN_1403ad020` allocates a `0x148`-byte result object, then sums the two eight-entry category arrays from each side's three `0xc8`-byte flank records. Category index 7 is `GALLEYS`. In the result object the exact 32-bit slots are:

| Side input | Category array A | Category array B |
|---|---:|---:|
| `param_1[2]` (first side) | `result + 0x4c` | `result + 0x6c` |
| `param_1[3]` (second side) | `result + 0xdc` | `result + 0xfc` |

These are sums across the three flanks. The source GALLEYS fields are at each flank's `+0x4c` and `+0x6c` (side-relative `+0x94` and `+0xb4`, respectively). The two arrays' semantic names are not established; don't assume either is a simple ship count without further mapping. Evidence: [finalizer decompilation](../artifacts/phase3/functions/1403ad020.c).

`FUN_1403a3bf0` also aggregates the side's eight category slots into an intermediate summary at `out+0x10..0x2c` and `out+0x30..0x4c`; its GALLEYS entries are `out+0x2c` and `out+0x4c`. `FUN_14039cbf0` confirms each flank summary reads all eight categories. Exports: [side aggregate](../artifacts/phase42-result-side-aggregate.json), [flank aggregate](../artifacts/phase42-result-flank-summary.json).

## Important distinction

It is **not yet proven** that `FUN_1403c2200` reads this terminal `0x148` result object. Its saved UI path follows a CombatView context to live side/flank objects. The offsets above answer the terminal-result layout question, not the complete UI-consumption path.

**New Ghidra queries this turn:** 2 function decompilations (`0x1403a3bf0`, `0x14039cbf0`). Static only; no runtime or binary changes.

**Next question:** Which of the two category arrays represents the GALLEYS quantity the CombatView should display?
