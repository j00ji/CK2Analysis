# Phase 50: GALLEYS combat layout override

Created a project-side CK2 mod package at `mod/CK2Naval/`. Its descriptor is `mod/CK2Naval.mod`; its full `interface/combat.gui` override was copied from the installed game into the workspace, then changed only in the attacker/defender troop strips. Both sides now have `galleys_total` count boxes and a scaled `galleys_icon` using stock sprite `GFX_bloodlines_symbol_longship`, with the stock localized `GALLEYS` tooltip. Category columns were compacted to fit all eight entries; `units_total` moved to x=330 with width 68, within the 408-pixel panel.

The `galleys_total` name matches the DLL hook at `FUN_1403c4470` (`RVA 0x3c4470`). The native callback looks up that child and populates it from the live eighth category. The Steam `combat.gui` was not modified. Installation instructions are in `mod/README.md`.

Checks: exactly two count controls and two icons are present; the GUI brace counts balance (365/365); `git diff --check` passes. The DLL was already built and the executable/signature verifier passed in Phase 49. CK2's GUI parser/override precedence and the rendered layout have not been launch-tested, so revert by disabling the mod if the panel loads incorrectly.

Confidence: high for control-name/data-path match and static layout consistency; unverified in-game. New Ghidra queries this turn: 0.
