# Did the first manual-creation test construct a naval combat?

**Status:** resolved: no construction attempt occurred
**Static confidence:** high for the recorded configuration state
**New Ghidra queries:** 0

## Evidence
| Address / ID | Saved artifact path | Direct observation | Confidence |
|---|---|---|---|
| second runtime session | [runtime log](../logs/ck2_naval.log) | The segment beginning `2026-10-18 11:41:10.605` logged `manual creation prototype configured=0` and `installed 4 guarded hooks; manual prototype=0`. | High |
| admission hooks | [runtime log](../logs/ck2_naval.log) | The session logged 94 existing-arrival calls and 96 new-admission calls, including 21 navy observations in each path, with no unreadable probes or failure lines. | High |
| manual branch | [runtime log](../logs/ck2_naval.log) | No `manual creation requested`, `returned`, `accepted`, or `prototype freeze` line occurred. | High |

## Interpretation
This run did not test naval construction. The copied INI was absent, unreadable, or still contained `manual_creation=0`, so the mutating branch remained disabled exactly as designed. Pressing F10 therefore affected only CK2/Steam behavior and did not reach the DLL prototype.

F10 should be retired regardless: a game or overlay screenshot binding makes it ambiguous and produces an unwanted side effect. A one-shot external trigger utility backed by a named Windows event would be safer: the INI remains the explicit opt-in, while running the utility signals exactly one construction attempt without sharing a game hotkey.

## Limitations and integrity
The log contains two appended sessions; counts above are restricted to the final segment beginning at the last `logger initialized` line. No fleet combat object was created, so factory compatibility remains untested. The agent did not access Steam or execute CK2.

## Next question
Should F10 be replaced with a one-shot external trigger utility before repeating the construction test with `manual_creation=1`?
