# Naval commander modifier prototype

**Status:** partial — trait script prepared; engine support unconfirmed  
**Static confidence:** medium for trait syntax, low for the `galleys` modifier key  
**New Ghidra queries:** 1 (batched two-function query)

## Evidence

| Address / ID | Saved artifact | Observation |
|---|---|---|
| `cavalry_leader` | Installed `common/traits/00_traits.txt:1997-2002` | Stock leader traits put unit bonuses inside `command_modifier`; cavalry uses `cavalry = 0.2`. |
| `GALLEYS_*` | Installed `common/defines.lua:1417-1425`; `docs/phase4-ship-stats.md` | Galley combat stats exist natively, but this does not prove commander modifiers support galleys. |
| `1402665f0`, `140266810` | `artifacts/phase51-command-modifier-evaluators.json` | Evaluators access fixed offsets; this query did not establish that `galleys` is a recognized `command_modifier` key. |

## Interpretation

Added an isolated `galley_leader` prototype at `mod/CK2Naval/common/traits/ck2_naval_traits.txt`, with English/French/German/Spanish localization in `mod/CK2Naval/localisation/CK2Naval.csv`. Its `galleys = 0.2` line is an informed experiment, not a verified engine capability. CK2 may ignore/reject an unsupported key, or it may parse it while naval combat does not consume it. The regular ship-only combat DLL path and an actual in-game test are needed to determine which.

## Limitations and integrity

No game executable or Steam installation files were changed. No in-game test was performed. Existing land-unit traits only confirm the enclosing trait syntax, not galley bonus support.

## Next question

Should I add a safe in-game test path for granting `galley_leader` and checking whether its bonus changes naval results?
