# CK2 naval combat feasibility research

Local reverse engineering of the copied `CK2game.exe` to investigate whether actual naval battles could be introduced by extending the existing engine. Feasibility is **unproven**. No executable patches or target execution are part of this initial investigation.

Phase 1 completed on 2026-10-17: automatic analysis succeeded, the persistent database was saved and reopened without reanalysis, and both direct Ghidra and REA report 93,650 analyzed functions and 29,423 defined strings.

Phase 2 now identifies fleet objects and transport linkage, ship quantities and capacity, shared province occupancy, naval routing, movement commands, and arrival. The normal combat-arrival path explicitly excludes fleets and sea provinces. This is a static evidence baseline, not a complete type recovery or a naval-combat feasibility verdict. Start with [fleet findings](docs/fleet-research.md); [combat notes](docs/combat-research.md) contain the subsequent Phase 3 evidence and next targets.

The preliminary Phase 3 pass now traces opponent checks, battle creation and reference ownership, three-flank updates, casualty/morale writes, winner/loser processing, retreat/destruction, and registry removal. Shared arithmetic processes all eight categories, including ship quantities, but creation and reinforcement have explicit barriers to fleets. Existing navy destruction also removes carried armies. See [combat findings and open questions](docs/combat-research.md) before considering any implementation.

The Phase 4 follow-up establishes shared fleet component/flank assignment, seven ship combat-stat configuration bindings, separate battle/side/flank serialization, and command checksums containing RNG seed and draw count. Actual loaded ship coefficients, complete identity/load contracts, tactic behavior, and multiplayer compatibility remain unresolved. See [assignment](docs/phase4-assignment-notes.md), [ship statistics](docs/phase4-ship-stats.md), and [persistence/determinism](docs/phase4-persistence-determinism.md). Naval-combat feasibility remains **unproven**.

The [next compatibility pass](docs/phase5-compatibility-followup.md) confirms ship-component ID registration, separate assignment-vector loading, removal/transfer maintenance, and a capacity-enforcement path that deletes whole embarked army components. It also traces post-load registration, cargo restoration through the morale-capping embark helper, and RNG suppression during component transfer. `NMilitary` is the ship-stat scope; actual values and raw combat-hash consumers remain unresolved.

Implementation has now begun under [native/](native/README.md). The first x64 build contains a D3D9 proxy bootstrap, an exact executable/version guard, and three observation-only MinHook detours that preserve original behavior. The standalone verifier passes against the copied executable. No binary has been installed into CK2 or runtime-tested in the game; see the [implementation blueprint](docs/naval-combat-implementation-blueprint.md) and [scaffold report](docs/phase16-native-observation-scaffold.md).

Implementation has now begun under [native/](native/README.md). The first x64 build contains a D3D9 proxy bootstrap, an exact executable/version guard, and three observation-only MinHook detours that preserve original behavior. The standalone verifier passes against the copied executable. No binary has been installed into CK2 or runtime-tested in the game; see the [implementation blueprint](docs/naval-combat-implementation-blueprint.md) and [scaffold report](docs/phase16-native-observation-scaffold.md).

The Phase 4 follow-up establishes shared fleet component/flank assignment, seven ship combat-stat configuration bindings, separate battle/side/flank serialization, and command checksums containing RNG seed and draw count. Actual loaded ship coefficients, complete identity/load contracts, tactic behavior, and multiplayer compatibility remain unresolved. See [assignment](docs/phase4-assignment-notes.md), [ship statistics](docs/phase4-ship-stats.md), and [persistence/determinism](docs/phase4-persistence-determinism.md). Naval-combat feasibility remains **unproven**.

## Research records

- [Environment and verified workflow](docs/environment.md)
- [Binary inventory](docs/binary-overview.md)
- [Fleet investigation](docs/fleet-research.md)
- [Land combat investigation](docs/combat-research.md)
- [Chronological research log](docs/research-log.md)

All virtual addresses refer to this exact binary at its preferred image base, not runtime addresses. Identify the copy by SHA-256 `cc2d65b51d9099b3d632fe3269fa647aaf7c00fcb00cc0240adbaa8e6bbbb75e`. Keep the executable, decompilation, databases, and extracted strings local. Never point these scripts at the Steam installation.

## Tools and project

Windows PowerShell, Python 3.12, REA 6.4.0, Ghidra 12.1.4, and Temurin JDK 21.0.9 are installed. Configuration is local to launched processes; see `scripts/ghidra-env.ps1` for verified paths.

The persistent project is `ghidra/CK2.gpr`, with its companion `ghidra/CK2.rep` directory. Keep both. REA 6.4.0 creates disposable Ghidra sessions; its JSON snapshot is a separate artifact and is not this database.

From this workspace in PowerShell:

```powershell
# First import only; refuses to overwrite an existing project.
.\scripts\Initialize-Analysis.ps1 *> logs\ghidra-import-console.log

# Reopen saved analysis without rerunning automatic analysis or saving changes.
.\scripts\Query-Analysis.ps1 -Mode search -Query fleet -OutputName fleet-search *> logs\fleet-search-console.log
.\scripts\Query-Analysis.ps1 -Mode xrefs -Query 1411039a0 -OutputName naval-combat-xrefs *> logs\naval-combat-xrefs-console.log

# Inspect known fleet functions and retain readable pseudocode alongside JSON.
.\scripts\Query-Analysis.ps1 -Mode function -Query '140ba7310,140ba7980,140ba7c00' -OutputName fleet-review *> logs\fleet-review-console.log
python scripts\summarize_query.py artifacts\fleet-review.json > logs\fleet-review-summary.jsonl

# Reproduce static PE metadata without loading target code.
python scripts\inspect_pe.py .\CK2game.exe --output artifacts > logs\pe-inventory-console.json
```

Run only one operation against the persistent project at a time, and close its GUI before using headless queries. `function` mode accepts comma-separated analyzed addresses and exports pseudocode, instruction text, and references. Search mode uses case-insensitive regular expressions on Ghidra-defined strings; raw PE strings provide a separate, noisier inventory.

`listing` mode accepts `address:instruction_count` entries (up to 256 instructions each) for bounded call-site checks. JSON remains authoritative: inferred prototypes can omit arguments, so verify registers and virtual-table targets before assigning semantics. Raw `.c` exports are decompiler output, not compilable recovered source. The Phase 2 notes use analyst aliases without changing database symbols.

For a recorded decompilation timeout, a focused retry may specify `-DecompileTimeoutSeconds 240` (default 90; maximum 600). Preserve the original failed result under its original output name. Phase 3 uses `python scripts\summarize_query.py artifacts\QUERY.json --output artifacts\phase3\functions` for readable exports, and `python scripts\verify_phase3.py > logs\phase3-verification-console.json` for integrity checks and explicit analysis limitations. These checks do not execute CK2.

Phase 4 follows the same workflow with `artifacts\phase4\functions` and `python scripts\verify_phase4.py > logs\phase4-verification-console.json`. Its `p4-*.json` files and matching request/log files preserve focused read-only queries; the verifier checks binary identity, retained results, documentation links, and project locks, not gameplay correctness.

Phase 5 uses the same workflow with `p5-*.json`, `artifacts\phase5\functions`, `scripts/summarize_phase5_evidence.py`, and `scripts/verify_phase5.py`. The summary retains bounded inventory, exact format/scope strings, and rejected raw-byte search candidates alongside successful findings.

Phase 4 follows the same workflow with `artifacts\phase4\functions` and `python scripts\verify_phase4.py > logs\phase4-verification-console.json`. Its `p4-*.json` files and matching request/log files preserve focused read-only queries; the verifier checks binary identity, retained results, documentation links, and project locks, not gameplay correctness.

`logs/` retains CLI help, readiness diagnostics, and Ghidra logs. `artifacts/` retains JSON and TSV exports. `runtime/` contains workspace-local Ghidra preferences, caches, and temporary files. The pre-existing root `doctor.json` and `overview.json` are historical failures, not current results.

## Evidence rules

Record address, binary hash, source artifact, relevant pseudocode, confidence, and unresolved alternatives for each behavioral claim. Generated `FUN_...` names are analyzer labels, not recovered source names. Strings alone establish vocabulary, not features. Decompiled types and field layouts require corroboration. No feasibility conclusion or implementation should be inferred from initial string matches.
