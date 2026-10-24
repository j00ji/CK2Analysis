# Phase 47: stock CombatView layout and override feasibility

## Finding

The installed game's `interface/combat.gui` defines a `windowType` named `combat` (408×500) with separate `attacker` and `defender` child windows. Each side repeats named icon widgets (`light_infantry`, `pikemen`, etc.) and count text boxes (`light_infantry_total`, etc.), plus `units_total`. The corresponding blocks begin around lines 62/109/231 and 679/726/848. The seven category columns are positioned 38 px apart, followed by `units_total`; adding an eighth column requires layout adjustment (and likely shifting/resizing total-count display), not just inserting a control. The stock localization already has `GALLEYS`.

A mod can provide an `interface/combat.gui` definition to add/position matching widgets, so an override is a plausible way to create visual space. This inspection did not run the game with an override, so parser/load precedence and exact behavior are not runtime-confirmed. More importantly, the GUI definition alone cannot supply the dynamic battle quantity: `FUN_1403c2200` has no `galleys` category branch, and the helper mapping is compiled. A native hook/custom provider is still needed to read category 7, format the count, and populate a new binding. The available galley model is an army-unit actor (`Ships_avatars.gfx`, `westerngfx_GALLEYS`), not an obvious small combat-row sprite; a dedicated icon may be needed.

Evidence: installed `interface/combat.gui`, `interface/unitpanel.gfx`, `interface/Ships_avatars.gfx`, `localisation/text1.csv`; plus `artifacts/phase2/functions/1403c2200.c` and `docs/phase46-galleys-combatview-row.md`.

Confidence: high for stock layout/names and missing compiled key; medium for override feasibility until launch-tested. No game/interface files modified. New Ghidra queries this turn: 0.
