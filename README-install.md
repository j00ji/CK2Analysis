# CK2-specific Codex skill

Extract the ZIP **into** `G:\Projects\CK2Analysis`, preserving the `.agents/skills/ck2-naval-research/` directory.

PowerShell example (replace the ZIP path):

```powershell
Expand-Archive -LiteralPath 'C:\Path\To\ck2-naval-research-skill.zip' -DestinationPath 'G:\Projects\CK2Analysis'
```

The archive does not contain an `AGENTS.md`, game binary, Ghidra database, or analysis artifacts. If you want the workflow to apply by default, **merge** `AGENTS.snippet.md` into your existing project-root `AGENTS.md` (do not overwrite it).

In a fresh Codex chat: `Use the ck2-naval-research skill. Investigate one high-priority unresolved naval-combat feasibility question and stop.`

This is a behavioral workflow, not a guaranteed credit/token cap.
