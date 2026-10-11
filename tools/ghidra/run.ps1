# Re-imports basket_v101.exe into a throwaway Ghidra project, applies types.h + symbols.txt,
# and regenerates reference/ghidra/*.c.
#   powershell -File tools/ghidra/run.ps1 -Ghidra <ghidra install dir> -Exe <path to basket_v101.exe>
param(
    [Parameter(Mandatory = $true)][string]$Ghidra,
    [Parameter(Mandatory = $true)][string]$Exe,
    [string]$Work = "$env:TEMP\hbasket-ghidra"
)
$ErrorActionPreference = "Stop"
$root = Resolve-Path "$PSScriptRoot\..\.."
$out = Join-Path $root "reference\ghidra"
New-Item -ItemType Directory -Force $Work | Out-Null
if (Test-Path $out) { Remove-Item -Recurse -Force $out }
& "$Ghidra\support\analyzeHeadless.bat" $Work hbasket -import $Exe -overwrite `
    -scriptPath "$PSScriptRoot" -postScript ApplyAndDump.java "$PSScriptRoot" $out
