# Hinamizawa Branch School Basketball — Multiplayer

An independent modification of the source port of the fan-made *Higurashi no Naku Koro ni*
3-on-3 basketball minigame (`basket_v101.exe`, 2002, by ひぐ中 / YnSoft). It adds **local and
online multiplayer**, **controller support**, **remappable controls**, a **pause menu**, and a
**settings menu with English translation**.

> **This is a fork-style mod.** The original, faithful reconstruction of the game (decompiled with
> Ghidra and rewritten as portable C++) lives here:
> **https://github.com/w1thar/Hinamizawa-Branch-School-Basketball-source-port**
>
> Go there if you want the plain port, the decompilation notes, or a base to port to other
> platforms. This repository builds on it and does not replace it.

Single-player is unchanged: Normal, Club and Practice modes run the original match code.

## What this adds

### Multiplayer

- **Local multiplayer (2 players, split screen).** Pick which device each player uses (the
  keyboard or any specific controller). Co-op against the computer, or versus (P1 vs P2). Team
  sizes 1v1, 2v2, 3v3. Each player picks a character and is locked to it, or, in versus, can
  auto-switch to the teammate nearest the ball like in single player.
- **Online multiplayer (up to 6 players).** One player hosts on their own PC — there is no central
  server. Others join with an invite code, a plain IP address, or by finding the host on the local
  network. Everyone picks a team and a character in a lobby; the computer fills the remaining spots.
  If humans are all on one team it is co-op against the computer, otherwise versus. Players who are
  alone on their team can auto-switch to the teammate nearest the ball.
- **Team sizes:** 1v1, 2v2 or 3v3 also in Normal/Club modes against the computer.
- **Match length:** the original two 5-minute halves, or a single 3, 5 or 10 minute period with no
  half time.

### Controls

- **Controller support:** Xbox-style pads (XInput), PlayStation DualShock 4 / DualSense (USB or
  Bluetooth), and other pads through DirectInput (Switch Pro, 8BitDo, generic USB/Bluetooth).
- **Direct movement:** with a controller stick or D-pad the character runs the way you push, instead
  of rotating and then moving forward.
- **Keyboard layouts:** the original *Classic* layout (arrows, X, Z, C), a *WASD* layout (Space =
  pass, Shift = shoot, E = extra; also moves directly like a stick) or *Custom*.
- **Remapping:** change every keyboard key and the controller's pass / shoot / extra / pause
  buttons in Settings → Controls.

### Menus and quality of life

- **Pause menu** on Esc (it no longer quits) or the controller's Options/Start button: resume,
  settings, return to title, quit. Online, the menu opens without stopping the game.
- **Settings:** master / music / sound-effect volume, language (Japanese / English), controls.
- **English translation** of all menus and in-game text.

## Playing online

1. **Host:** Online Multiplayer → *Host a game*. The lobby shows your **invite code**
   (something like `K7Q2M-9XBTA`) — send it to your friends. Set team size, match time and
   control mode, wait for everyone to be ready, then *Start match*.
2. **Join:** Online Multiplayer → *Join with a code*, type or paste (Ctrl+V) the code (or the
   host's IP address), pick your team and character, and mark yourself ready. Hosts on the same
   network show up under *Find LAN games*.

### Connecting without port forwarding

The host tries to open its port automatically (UPnP). If that is not possible, the game uses NAT
hole punching: both sides learn their public address from a STUN server, and the joining player
posts its address to a free public message service ([ntfy.sh](https://ntfy.sh)) under a topic
derived from the invite code, which the host reads. If the automatic exchange does not get
through, the joining player's screen shows a reply code to send to the host, who enters it under
*Add a player's code* in the lobby.

Limits:

- If both players are behind carrier-grade NAT or a strict ("symmetric") NAT, which is common on
  mobile data and some ISPs, hole punching can fail. Forward UDP port 27960 on the host's router,
  or use a VPN-style tool such as Radmin VPN, Hamachi or ZeroTier and join by IP address.
- The invite code contains the host's public IP, and ntfy.sh topics are public, so only share the
  code with people you trust.
- The match runs on the host's PC; other players see it with roughly their ping to the host as delay.
- The first time you host, Windows may ask to allow the game through the firewall.

## Building

You need **CMake 3.16+** and a C++17 compiler. No other dependencies.

**Visual Studio 2019/2022:**
```
cmake -S . -B build
cmake --build build --config Release
```
Output: `build/Release/hbasket.exe`.

**MinGW-w64 (GCC):**
```
mingw32-make
```
Output: `build/hbasket.exe` (statically linked).

All game data is packed into the executable at build time, so the result is a single `hbasket.exe`
that needs no other files. Only the Windows backend exists, so building on Linux/macOS stops with
a message at configure time.

Settings and key bindings are saved to `%APPDATA%\HinamizawaBasketball\settings.ini`.

## Default controls

| Classic keyboard | WASD keyboard | Controller | Action |
|---|---|---|---|
| Arrow keys | W A S D | Left stick / D-pad | Move (Classic: turn and run forward) |
| X | Space | Cross / A | Hold the ball, release to pass; confirm in menus |
| Z | Shift | Square / X | Charge a loop pass/shot, release to throw; near the hoop while running: jump shot |
| C | E | Circle / B | Extra button / confirm |
| Esc | Esc | Options / Start | Pause |
| Alt+Enter | Alt+Enter | | Toggle fullscreen |

The coloured cone under your player shows what the shoot button will do: blue = loop pass,
green = loop shot (the gauge marks the ideal power), red = jump shot.

Command line options: `-fullscreen`, `-window` (default), `-scale N`, `-novsync`.

## Project layout

Same as the [source port](https://github.com/w1thar/Hinamizawa-Branch-School-Basketball-source-port),
plus the mod's files:

```
src/game/mp_match.cpp          the match with human players on either team (multiplayer)
src/game/online.cpp            online play: lobby, host/client networking, snapshots, menus
src/game/input.cpp             input devices, keyboard layouts, remappable bindings
src/game/settings.cpp          saved settings
src/game/lang.cpp              Japanese -> English text table
src/platform/win32/win32_net.cpp       UDP sockets, UPnP, STUN, ntfy.sh signalling
src/platform/win32/win32_gamepad.cpp   XInput and DualShock 4 / DualSense (HID)
src/platform/win32/win32_dinput.cpp    all other gamepads (DirectInput)
```

## Credits

- Original game: **ひぐ中 (YnSoft)** — 「雛見沢分校バスケット大会」 for *ひぐらしのなく頃に*.
- *Higurashi no Naku Koro ni*, its characters, music and sound effects: **07th Expansion / 竜騎士07**.
  The trial version these files come from states that redistributing its data is not prohibited
  (「データの転載、頒布はこれを禁止しません」).
- Source port (decompilation and portable C++ rewrite) this mod is based on:
  https://github.com/w1thar/Hinamizawa-Branch-School-Basketball-source-port
- MP3 decoding: [dr_mp3](https://github.com/mackron/dr_libs) by David Reid (public domain / MIT-0).

This is a non-commercial fan project. The game data in `assets/` belongs to its respective authors.
