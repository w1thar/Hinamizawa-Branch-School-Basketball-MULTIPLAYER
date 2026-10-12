// User settings (not part of the original game), saved as a small INI file in the user's
// config folder.
#pragma once

enum Language { LANG_JAPANESE = 0, LANG_ENGLISH = 1 };

// Controls (mod). Keyboard actions: up, down, left, right, pass (X), shoot (Z), extra (C); each has
// a primary and a secondary key (Win32 virtual-key codes, 0 = none). Controller actions: pass,
// shoot, extra, pause, as plat::PadButton values (positional: 0 = bottom face button, ...).
enum KbLayout { KB_CLASSIC = 0, KB_WASD = 1, KB_CUSTOM = 2 };
const int KB_ACTIONS = 7;
const int PAD_ACTIONS = 4;
extern const int kKbClassic[KB_ACTIONS][2];
extern const int kKbWasd[KB_ACTIONS][2];
extern const int kPadDefault[PAD_ACTIONS];

struct Settings {
    int masterVolume = 100;   // 0..100
    int musicVolume = 100;
    int sfxVolume = 100;
    int language = LANG_JAPANESE;
    int netPort = 27960;      // UDP port used when hosting online
    char playerName[32] = "Player";
    int kbLayout = KB_CLASSIC;
    int kbCustom[KB_ACTIONS][2] = {{0x26, 0x68}, {0x28, 0x62}, {0x25, 0x64}, {0x27, 0x66}, {0x58, 0}, {0x5a, 0}, {0x43, 0}};
    int padMap[PAD_ACTIONS] = {0, 2, 1, 9};   // pass = bottom, shoot = left, extra = right, pause = Start
};

extern Settings g_settings;

void Settings_Load();
void Settings_Save();
void Settings_ApplyAudio();   // pushes the volume settings to the mixer
