# Can the existing tactic selector safely handle a GALLEYS-only flank?

**Status:** partial  
**Static confidence:** high for control-flow safety with normally loaded nonempty tactic lists; low for gameplay suitability  
**New Ghidra queries:** 3

## Evidence
| Address / ID | Saved artifact path | Direct observation | Confidence |
|---|---|---|---|
| `0x14039cf80` | `artifacts/p3-damage-writers-manager.json` | The selector's nonempty test sums all eight flank quantities, so category 7/GALLEYS alone reaches tactic selection. It calculates candidate weights, draws from shared RNG, selects a tactic, and can copy tactic `+0x210` into flank phase/state. | High |
| `0x140c41f80` | `artifacts/p7-tactic-weight-choice.json` | Weighted choice ignores nonpositive weights. If their sum is zero, or count is zero, it returns caller-supplied fallback index 0. | High |
| call `0x14039d340` | `artifacts/p3-damage-writers-manager.json` | The selector passes fallback 0, then immediately indexes the chosen tactic vector without independently checking that its count is nonzero. | High |
| `0x1404dcad0` | `artifacts/p7-combat-tactics-loader.json` | `common/combat_tactics` is a registered content directory. This query reached the directory registry, not the task that populates the three runtime tactic vectors. | High; loader population unresolved |

## Interpretation

A GALLEYS-only flank does not itself cause an empty-flank exit, divide by zero, or invalid weighted-choice result. If every land tactic is ineligible or has zero weight, the helper deterministically returns tactic index 0; the selector already consumed shared RNG before that fallback. The selected tactic can drive the ordinary phase/state field, whose value indexes the existing GALLEYS phase coefficients.

This is memory/control-flow compatibility, not satisfactory naval tactics. Correct operation still requires all three applicable tactic vectors to be nonempty, a safe index-0 fallback, meaningful GALLEYS coefficients, and synchronized hook execution on every multiplayer peer. A land tactic may select inappropriate phases or modifiers even though the code remains stable.

## Limitations and integrity

Static analysis only; CK2 and the Steam installation were neither run nor modified. The workspace lacks the installed `common/combat_tactics` definitions and loaded runtime vectors. Query 3 identified only the content-directory registry. No runtime or multiplayer test was performed.

## Next question

Which function populates the three tactic vectors consumed by `0x14039cf80`, and what guaranteed index-0 fallbacks do their installed definitions provide?
