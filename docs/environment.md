# Environment and analysis workflow

Investigation date: 2026-10-17, America/Sao_Paulo (UTC-03). Tool logs use local wall-clock time; generated PE metadata uses UTC.

## Verified installation

| Component | Observation |
|---|---|
| Workspace copy | `G:\Projects\CK2Analysis\CK2game.exe`, 24,756,992 bytes |
| REA | `rea --version`: 6.4.0; launcher `C:\Users\Usuario\AppData\Roaming\npm\rea.ps1` |
| npm package | `C:\Users\Usuario\AppData\Roaming\npm\node_modules\rea-agents` |
| Node | v24.20.0, `C:\Program Files\nodejs\node.exe` |
| Ghidra | `G:\Program Files\ghidra_12.1.4_PUBLIC`; `application.properties` reports 12.1.4 |
| Headless launcher | `G:\Program Files\ghidra_12.1.4_PUBLIC\support\analyzeHeadless.bat` |
| Native decompiler | `Ghidra\Features\Decompiler\os\win_x86_64\decompile.exe`, verified by REA provider diagnostics |
| Java | Temurin 21.0.9+10-LTS, 64-bit full JDK |
| JAVA_HOME | `C:\Users\Usuario\AppData\Local\Programs\Eclipse Adoptium\jdk-21.0.9.10-hotspot` |
| Python | `C:\Users\Usuario\AppData\Local\Programs\Python\Python312\python.exe` |

The REA skill and its connection/native guides were read before command selection. `logs/rea-help.txt` and command-specific help files preserve the installed CLI contract. This release **does** expose `analyze`, `inspect`, `search`, `function`, and `xrefs`; commands were selected from actual help.

## MCP diagnosis

No REA MCP tools are advertised in this Codex session. `rea doctor --client codex --json` reports `registration:codex` as `config_drift`. The inspected `C:\Users\Usuario\.codex\config.toml` has no REA server entry.

The read-only setup plan is saved at `logs/rea-setup-plan.json`. It proposes adding REA to `C:\Users\Usuario\.codex\config.toml`, preserving unrelated entries, and backing up to `C:\Users\Usuario\.codex\config.toml.rea.backup`. The proposed launcher is Node plus the package's public `scripts/rea.mjs mcp`, with the detected Ghidra and Java environment. No skill replacement is listed in the plan. This plan was **not applied**: current research can use CLI/headless tools without a global configuration change or client restart. A future MCP connection would need registration and a restarted/reconnected client; doctor alone does not prove a live connection.

## Windows native availability

The initial REA doctor recognized Ghidra and Java but failed its native authority check while opening `C:\Users\Usuario` with Win32 error 5 (access denied). Setting process-local `TEMP` and `TMP` to `G:\Projects\CK2Analysis\runtime\tmp` changed the provider result to `available`. See `logs/rea-doctor-initial.json` and `logs/rea-providers-local-temp.json`. No machine-wide environment or permissions were changed.

The root `overview.json` predates this investigation and reports missing Ghidra configuration and an obsolete Java 17 path. Those are not the current environment values.

## Persistence and commands

Installed REA source `dist/ghidra/GhidraLauncher.js` explicitly passes `-readOnly -deleteProject`; the provider's capability notes also describe ephemeral projects. Consequently, REA's native CLI cannot by itself satisfy the requested persistent Ghidra database. The supported Ghidra headless importer is used separately with the copied executable and **without** `-deleteProject` or `-readOnly` for the initial import. Later queries use `-process CK2game.exe -noanalysis -readOnly`. These writes affect the analysis database only.

`scripts/Initialize-Analysis.ps1` pins the target hash, creates `ghidra/CK2.gpr`, runs default automatic analysis (four CPU threads, 4 GiB maximum Java heap), and exports inventories using `CK2Inventory.java`. There is no per-file analysis timeout in that invocation. It refuses an existing project to prevent accidental replacement.

`scripts/Query-Analysis.ps1` and `CK2Query.java` provide bounded string searches, incoming references, and function decompilation from the saved database. Exports include the target hash and coverage limits. Query text is passed in a UTF-8 JSON request file to avoid Windows batch argument splitting. Functions time out individually after 90 seconds and report decompilation errors in the output. These exports are **direct Ghidra observations**, not REA Evidence records.

The installed `support/analyzeHeadlessREADME.html` was checked for import/process/script/log arguments. `scripts/ghidra-env.ps1` keeps preferences, caches, and temporary data within the workspace. Windows PowerShell 5 can represent Java's ordinary stderr startup notice as `NativeCommandError`; wrappers allow stderr logging and then inspect the process exit code and output artifacts.

Use a dedicated PowerShell session for these wrappers: their environment assignments persist in that shell until it closes. They do not change user- or machine-wide environment settings.

CLI experiment (run from the workspace, without changing global settings):

```powershell
$env:TEMP = 'G:\Projects\CK2Analysis\runtime\tmp'
$env:TMP = $env:TEMP
$env:REA_GHIDRA_STARTUP_TIMEOUT_MS = '3600000'
rea inspect .\CK2game.exe --provider ghidra --snapshot .\artifacts\ck2.rea-snapshot.json --format json > logs\rea-inspect.json 2> logs\rea-inspect-stderr.log
```

The longer startup deadline allows analysis to finish; REA's installed default is 330,000 milliseconds. Reusing a JSON snapshot does not guarantee that a new query can avoid a fresh native analysis session. Use the persistent project for repeated investigation.

## Verified completion

Phase 3 added an optional `-DecompileTimeoutSeconds` argument to `Query-Analysis.ps1`, recorded in the JSON request and range-checked by `CK2Query.java`. A 90-second timeout on `0x1403ad020` was retained; a targeted 240-second retry succeeded without reanalysis or database edits. `scripts/inspect_pointer_table.py` performs bounded static PE pointer reads and verifies the target hash. `scripts/verify_phase3.py` reports successful exports, retained failures/warnings/reference caps, local links, and project locks separately; see [Phase 3 verification](../artifacts/phase3-verification.json).

Phase 2 reused the saved project exclusively through sequential `-noanalysis -readOnly` queries. `scripts/summarize_query.py` exports readable pseudocode from the retained function JSON; it does not alter the database. `scripts/verify_phase2.py` checks target identity, export completeness, local documentation links, and project lock files, and performs a bounded static command-vtable read. Run it with `python scripts\verify_phase2.py > logs\phase2-verification-console.json`; results are in [phase2-verification.json](../artifacts/phase2-verification.json). It verifies artifact integrity, not gameplay semantics.

- Persistent analysis succeeded at 22:37:38 local time, with 1,192 seconds reported in its analyzer summary. The inventory exported at 22:37:56, and `/CK2game.exe` saved into the project at 22:38:01. See `logs/ghidra-import.log`.
- REA `inspect` exited 0 and produced `logs/rea-inspect.json`, Evidence ID `ev_6b8d82d3b7e0c9a07119e87bc37dbd9a47393d842482af372681914db525373a`, plus `artifacts/ck2.rea-snapshot.json`. Its upstream Ghidra profile digest is `249564812a8d83b9b3f461098fc485ccde60c516d4497547a124081c91d654bf`. Counts match the independently saved project: 93,650 functions and 29,423 defined strings. The CLI completed its disposable session; no REA MCP session was opened.
- The project reopened successfully with `-process CK2game.exe -noanalysis -readOnly`. The corrected multi-address query exited 0 and exported `artifacts/fleet-seed-xrefs-v2.json`; logs show read-only project processing with no automatic-analysis pass.
- The first query exposed Windows batch splitting of comma-separated text. Its output was archived as `logs/fleet-query-argument-split.json`; the wrapper now passes a JSON request file, and the Java script validates its argument count. Both wrapper output checks and stale-output checks remain enabled because headless process exit 0 alone does not prove script success.
- A post-analysis SHA-256 check matched the original hash. No game process or modified executable was launched. Ghidra's analysis warnings remain in the log and are summarized in the binary overview.
- Function decompilation, regex search, and bounded instruction listings were subsequently verified on the reopened project. `listing` mode takes comma-separated `address:instruction_count` entries (1–256 instructions each). Pseudocode/assembly exports for initial naval-distance, cache, UI, and keyword helpers all completed without decompilation errors; this is a bounded validation, not proof that every function in the binary decompiles correctly.

Phase 4 continued with the same persistent read-only project and no configuration changes. `scripts/summarize_phase4_evidence.py` reproduces bounded listing transcripts and static ship-stat storage mapping; `scripts/verify_phase4.py` checks retained query identity, readable pseudocode equality, documentation links, and project locks. Results are in `artifacts/phase4-verification.json`; incoming-reference caps and decompiler warnings are preserved as analysis limitations.
