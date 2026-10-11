# Re-imports basket_v101.exe into a throwaway Ghidra project, applies types.h + symbols.txt,
# and regenerates reference/ghidra/*.c (decompile) and reference/ghidra_asm/*.asm (annotated asm).
#   powershell -File tools/ghidra/run.ps1 -Ghidra <ghidra install dir> -Exe <path to basket_v101.exe>
param(
    [Parameter(Mandatory = $true)][string]$Ghidra,
    [Parameter(Mandatory = $true)][string]$Exe,
    [string]$Work = "$env:TEMP\hbasket-ghidra"
)
$ErrorActionPreference = "Stop"
$root = Resolve-Path "$PSScriptRoot\..\.."
$out = Join-Path $root "reference\ghidra"
$asm = Join-Path $root "reference\ghidra_asm"
New-Item -ItemType Directory -Force $Work, $out, $asm | Out-Null
Get-ChildItem $out, $asm | Remove-Item -Force
& "$Ghidra\support\analyzeHeadless.bat" $Work hbasket -import $Exe -overwrite `
    -scriptPath "$PSScriptRoot" -postScript ApplyAndDump.java "$PSScriptRoot" $out
python "$root\tools\annotate_consts.py" $Exe "$out\_mathcalls.txt" --inplace
Get-ChildItem $asm -Filter *.asm | ForEach-Object { python "$root\tools\annotate_consts.py" $Exe $_.FullName --inplace }
