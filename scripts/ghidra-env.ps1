$ErrorActionPreference = 'Stop'
$AnalysisRoot = Split-Path -Parent $PSScriptRoot
$env:GHIDRA_INSTALL_DIR = 'G:\Program Files\ghidra_12.1.4_PUBLIC'
$env:JAVA_HOME = 'C:\Users\Usuario\AppData\Local\Programs\Eclipse Adoptium\jdk-21.0.9.10-hotspot'
$env:GHIDRA_HEADLESS_MAXMEM = '4G'
foreach ($part in @('tmp', 'profile', 'config', 'cache')) {
    New-Item -ItemType Directory -Force -Path (Join-Path $AnalysisRoot "runtime\$part") | Out-Null
}
$env:TEMP = Join-Path $AnalysisRoot 'runtime\tmp'
$env:TMP = $env:TEMP
$env:USERPROFILE = Join-Path $AnalysisRoot 'runtime\profile'
$env:APPDATA = Join-Path $AnalysisRoot 'runtime\config'
$env:LOCALAPPDATA = Join-Path $AnalysisRoot 'runtime\cache'
$env:JDK_JAVA_OPTIONS = "-Duser.home=$($env:USERPROFILE) -Djava.io.tmpdir=$($env:TEMP) -XX:-UsePerfData"
