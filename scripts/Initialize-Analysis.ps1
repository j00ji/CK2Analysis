# Import the workspace copy once; refuse to overwrite an existing project.
. "$PSScriptRoot\ghidra-env.ps1"
$project = Join-Path $AnalysisRoot 'ghidra\CK2.gpr'
if (Test-Path -LiteralPath $project) { throw "Project already exists: $project. Use -process with -noanalysis to query it." }
$binary = Join-Path $AnalysisRoot 'CK2game.exe'
$expected = 'CC2D65B51D9099B3D632FE3269FA647AAF7C00FCB00CC0240ADBAA8E6BBBB75E'
if ((Get-FileHash -LiteralPath $binary -Algorithm SHA256).Hash -ne $expected) { throw 'Target hash differs from the recorded copy.' }
# Windows PowerShell 5 treats ordinary Java stderr notices as NativeCommandError.
$ErrorActionPreference = 'Continue'
& "$env:GHIDRA_INSTALL_DIR\support\analyzeHeadless.bat" `
    "$AnalysisRoot\ghidra" CK2 -import $binary `
    -max-cpu 4 -scriptPath "$AnalysisRoot\scripts" `
    -postScript CK2Inventory.java "$AnalysisRoot\artifacts" `
    -log "$AnalysisRoot\logs\ghidra-import.log" `
    -scriptlog "$AnalysisRoot\logs\ghidra-import-script.log"
$ErrorActionPreference = 'Stop'
if ($LASTEXITCODE -ne 0) { throw "Ghidra returned $LASTEXITCODE. Inspect logs." }
if (!(Test-Path -LiteralPath "$AnalysisRoot\artifacts\ghidra-overview.json")) { throw 'Inventory export absent; inspect Ghidra script errors.' }
if (!(Select-String -LiteralPath "$AnalysisRoot\logs\ghidra-import.log" -SimpleMatch 'REPORT: Analysis succeeded for file:')) { throw 'Automatic analysis success was not recorded.' }
if (!(Select-String -LiteralPath "$AnalysisRoot\logs\ghidra-import.log" -SimpleMatch 'REPORT: Save succeeded for: /CK2game.exe')) { throw 'Project save success was not recorded.' }
if ((Get-FileHash -LiteralPath $binary -Algorithm SHA256).Hash -ne $expected) { throw 'Target hash verification failed after analysis.' }
