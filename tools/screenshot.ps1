# Starts hbasket.exe, optionally sends keys, and saves screenshots of its window.
#   powershell -File tools/screenshot.ps1 -Exe build/hbasket.exe -Out shots -Times 3,8 [-Keys "3:X,5:DOWN"]
param(
    [string]$Exe = "build/hbasket.exe",
    [string]$Out = "shots",
    [double[]]$Times = @(3),
    [string]$Keys = "",
    [string]$ExeArgs = "-scale 1"
)
Add-Type -AssemblyName System.Drawing
Add-Type @"
using System;
using System.Runtime.InteropServices;
public static class W {
  [DllImport("user32.dll")] public static extern bool GetWindowRect(IntPtr h, out RECT r);
  [DllImport("user32.dll")] public static extern bool GetClientRect(IntPtr h, out RECT r);
  [DllImport("user32.dll")] public static extern bool ClientToScreen(IntPtr h, ref POINT p);
  [DllImport("user32.dll")] public static extern bool SetForegroundWindow(IntPtr h);
  [DllImport("user32.dll")] public static extern void keybd_event(byte vk, byte scan, uint flags, UIntPtr extra);
  public struct RECT { public int L, T, R, B; }
  public struct POINT { public int X, Y; }
}
"@
New-Item -ItemType Directory -Force $Out | Out-Null
$p = Start-Process -FilePath $Exe -ArgumentList $ExeArgs -PassThru
$h = [IntPtr]::Zero
for ($i = 0; $i -lt 100 -and $h -eq [IntPtr]::Zero; $i++) { Start-Sleep -Milliseconds 100; $p.Refresh(); $h = $p.MainWindowHandle }
$vk = @{ X = 0x58; Z = 0x5a; C = 0x43; UP = 0x26; DOWN = 0x28; LEFT = 0x25; RIGHT = 0x27; SPACE = 0x20; ENTER = 0x0d }
$events = @()
if ($Keys) { foreach ($k in $Keys.Split(",")) { $t, $n = $k.Split(":"); $events += [pscustomobject]@{ T = [double]$t; K = $n } } }
foreach ($t in $Times) { $events += [pscustomobject]@{ T = $t; K = "#shot" } }
$start = Get-Date
foreach ($e in ($events | Sort-Object T)) {
    $wait = $e.T - ((Get-Date) - $start).TotalSeconds
    if ($wait -gt 0) { Start-Sleep -Milliseconds ([int]($wait * 1000)) }
    if ($p.HasExited) { break }
    if ($e.K -eq "#shot") {
        $r = New-Object W+RECT; [W]::GetClientRect($h, [ref]$r) | Out-Null
        $pt = New-Object W+POINT; [W]::ClientToScreen($h, [ref]$pt) | Out-Null
        $bmp = New-Object System.Drawing.Bitmap ($r.R - $r.L), ($r.B - $r.T)
        $g = [System.Drawing.Graphics]::FromImage($bmp)
        $g.CopyFromScreen($pt.X, $pt.Y, 0, 0, $bmp.Size)
        $file = Join-Path $Out ("shot_{0:000.0}.png" -f $e.T)
        $bmp.Save($file); $g.Dispose(); $bmp.Dispose()
        Write-Output "saved $file"
    } else {
        [W]::SetForegroundWindow($h) | Out-Null
        $code = [byte]$vk[$e.K]
        [W]::keybd_event($code, 0, 0, [UIntPtr]::Zero); Start-Sleep -Milliseconds 120
        [W]::keybd_event($code, 0, 2, [UIntPtr]::Zero)
        Write-Output ("key {0} at {1}" -f $e.K, $e.T)
    }
}
if (-not $p.HasExited) { $p.Kill() } else { Write-Output "process exited with code $($p.ExitCode)" }
