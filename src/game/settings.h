// User settings (not part of the original game), saved as a small INI file in the user's
// config folder.
#pragma once

enum Language { LANG_JAPANESE = 0, LANG_ENGLISH = 1 };

struct Settings {
    int masterVolume = 100;   // 0..100
    int musicVolume = 100;
    int sfxVolume = 100;
    int language = LANG_JAPANESE;
    int netPort = 27960;      // UDP port used when hosting online
    char playerName[32] = "Player";
};

extern Settings g_settings;

void Settings_Load();
void Settings_Save();
void Settings_ApplyAudio();   // pushes the volume settings to the mixer
