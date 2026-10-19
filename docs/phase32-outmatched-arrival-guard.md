# Why was the strength admission filter reverted?

**Status:** reverted; AI route avoidance remains unresolved  
**Confidence:** high for regression cause; low for current AI route hooks  
**New Ghidra queries:** 0

## Finding

The attempted strength rule refused combat at encounter admission. The user
clarified the goal: AI fleets should choose routes that avoid stronger enemy
fleets, while normal battles remain enabled when fleets do meet.

That rule blocked every automatic arrival below the threshold, including
player orders, instead of teaching the AI to navigate around dangerous fleets.
The filter and its INI setting have been removed, restoring the earlier
encounter-admission behavior.

## Addresses and limitations

- opponent/admission predicate: `0x140b99d90`
- automatic encounter hook: `0x1403bb5d0`
- unit contribution: `0x140b9aa40`
- side aggregation: `0x140bba2a0`

Saved artifacts expose surviving GALLEYS strength in component `+0xc4`
(`0x140b9aa40`, `0x140bba2a0`). The evidence inspected so far does not show
where the naval AI evaluates candidate routes or how it distinguishes its own
orders from player orders. Route avoidance needs to be attached to that decision
point; changing admission alone is too late.

## Next question

Can a saved movement artifact identify the AI route-choice point and AI-owned
fleet orders early enough to avoid stronger hostile fleets?
