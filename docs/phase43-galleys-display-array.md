# Phase 43: GALLEYS display array

## Finding

Use category-array A for the current/remaining GALLEYS quantity: category index 7 is the eighth 32-bit entry, so the per-side slots in the terminal result object are first side `result+0x4c`, second side `result+0xdc`.

The semantic cross-check is `FUN_140848850`: it iterates the eight current amounts at its argument `+0x10..+0x2c`, subtracts combat losses in place, and adds those losses to the parallel output vector. In the underlying subunit this current vector is `+0xa8..+0xc4`; category 7 is `+0xc4`, identified by the existing ship UI trace as ship amount. The flank and side aggregators preserve the two vectors as A/B. Thus A is current ship count; B is a separate/accumulated value, not the remaining count.

This identifies which result slots correspond to the displayed count, but the saved UI trace has not proven that `FUN_1403c2200` consumes this terminal result object rather than live side/flank state. For live UI rendering, read the corresponding category-7 field from its live source; do not assume the terminal-result offset is the direct widget binding.

Evidence: `artifacts/phase3/functions/140848850.c`, `artifacts/phase3/functions/1403ad020.c`, `artifacts/phase42-result-side-aggregate.json`, `artifacts/phase42-result-flank-summary.json`, and `docs/phase2-ui-notes.md`.

Confidence: high that A is remaining/current GALLEYS; medium that this terminal result slot is the CombatView's direct source. Static analysis only. New Ghidra queries this turn: 1.
