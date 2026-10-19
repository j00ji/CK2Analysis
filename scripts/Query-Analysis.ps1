param(
    [Parameter(Mandatory=$true)][ValidateSet('search','function','xrefs','listing')][string]$Mode,
    [Parameter(Mandatory=$true)][string]$Query,
    [Parameter(Mandatory=$true)][string]$OutputName,
    [ValidateRange(1,600)][int]$DecompileTimeoutSeconds = 90
)
. "$PSScriptRoot\ghidra-env.ps1"
if ($OutputName -notmatch '^[a-zA-Z0-9_-]+$') { throw 'Use a simple output name without paths or an extension.' }
if (!(Test-Path -LiteralPath "$AnalysisRoot\ghidra\CK2.gpr")) { throw 'Initialize the Ghidra project first.' }
# Pass query text as JSON to avoid Windows batch splitting commas/metacharacters.
$RequestPath = "$AnalysisRoot\artifacts\$OutputName-request.json"
$RequestText = @{ mode = $Mode; query = $Query; decompile_timeout_seconds = $DecompileTimeoutSeconds } | ConvertTo-Json
[System.IO.File]::WriteAllText($RequestPath, $RequestText, (New-Object System.Text.UTF8Encoding($false)))
$QueryStarted = Get-Date
$ErrorActionPreference = 'Continue'
& "$env:GHIDRA_INSTALL_DIR\support\analyzeHeadless.bat" `
    "$AnalysisRoot\ghidra" CK2 -process CK2game.exe -noanalysis -readOnly `
    -scriptPath "$AnalysisRoot\scripts" `
    -postScript CK2Query.java $RequestPath "$AnalysisRoot\artifacts\$OutputName.json" `
    -log "$AnalysisRoot\logs\$OutputName.log" `
    -scriptlog "$AnalysisRoot\logs\$OutputName-script.log"
$ErrorActionPreference = 'Stop'
if ($LASTEXITCODE -ne 0) { throw "Ghidra returned $LASTEXITCODE. Inspect logs." }
if (!(Test-Path -LiteralPath "$AnalysisRoot\artifacts\$OutputName.json")) { throw 'Query output absent. Inspect script compilation/runtime errors in logs.' }
if ((Get-Item -LiteralPath "$AnalysisRoot\artifacts\$OutputName.json").LastWriteTime -lt $QueryStarted) { throw 'Output is stale; this query did not produce a new result.' }
