# Phase 37: battle unit-category presentation

**Question:** Why does the stock battle UI omit a distinct ship category?

## Finding

On the analyzed executable (SHA-256 `cc2d65b51d9099b3d632fe3269fa647aaf7c00fcb00cc0240adbaa8e6bbbb75e`), `FUN_1403c2200` reads a category key from a UI data object and explicitly maps `light_infantry`, `pikemen`, `archers`, `heavy_infantry`, `light_cavalry`, `special_troops`, `heavy_cavalry`, and `units_total`. There is no `galleys` mapping in that branch. The corresponding code is in [saved Ghidra output](../artifacts/phase37-combat-ui-total.json), around `0x1403c33a6–0x1403c353f`.

The UI's generic battle-summary keys have references at `0x14039e690` (`COMBATVIEW_TOTALTROOPS_FLANK`) and `0x1403c2200` (`COMBATVIEW_TOTALTROOPS`); xrefs are in [phase37-combat-ui-xrefs.json](../artifacts/phase37-combat-ui-xrefs.json). Separately, combat arithmetic and result aggregation already include all eight categories, including category 7 (`GALLEYS`), per [combat-research.md](combat-research.md) and [phase3-conclusion-notes.md](phase3-conclusion-notes.md).

## Assessment and limits

The hard-coded UI category mapping is a strong explanation for why a galley row would not receive a ship-specific label through this path (**high confidence** that the mapping omits `galleys`; **medium confidence** this is the observed missing-ship-UI cause). Static analysis does not establish whether a galley row is created at all, which icon/widget assets are selected, or whether an interface data file can extend the category list. The native prototype currently hooks combat creation/update/aftermath, not this UI function. No game binary or Steam installation was changed.

**New Ghidra lookups:** 3 total (two string xrefs and one function decompilation). The generated function export contains decompiler limitations; conclusions above are restricted to the visible category-key dispatch.

**Next question:** Does the result UI construct a galley row from category data, or must the UI model itself be extended?
