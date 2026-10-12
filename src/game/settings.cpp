#include "game/settings.h"

#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <string>

#include "engine/sound.h"
#include "platform/platform.h"

Settings g_settings;

static std::string SettingsPath() { return plat::ConfigDir() + "settings.ini"; }

static int Clamp(int v, int lo, int hi) { return v < lo ? lo : v > hi ? hi : v; }

void Settings_Load()
{
    FILE *f = fopen(SettingsPath().c_str(), "r");
    if (!f) return;
    char line[256];
    while (fgets(line, sizeof(line), f)) {
        char *eq = strchr(line, '=');
        if (!eq) continue;
        *eq = 0;
        const char *key = line, *val = eq + 1;
        char *nl = strpbrk(eq + 1, "\r\n");
        if (nl) *nl = 0;
        if (!strcmp(key, "master_volume")) g_settings.masterVolume = Clamp(atoi(val), 0, 100);
        else if (!strcmp(key, "music_volume")) g_settings.musicVolume = Clamp(atoi(val), 0, 100);
        else if (!strcmp(key, "sfx_volume")) g_settings.sfxVolume = Clamp(atoi(val), 0, 100);
        else if (!strcmp(key, "language")) g_settings.language = Clamp(atoi(val), 0, 1);
        else if (!strcmp(key, "net_port")) g_settings.netPort = Clamp(atoi(val), 1024, 65535);
        else if (!strcmp(key, "player_name") && *val) snprintf(g_settings.playerName, sizeof(g_settings.playerName), "%s", val);
    }
    fclose(f);
}

void Settings_Save()
{
    FILE *f = fopen(SettingsPath().c_str(), "w");
    if (!f) return;
    fprintf(f, "master_volume=%d\n", g_settings.masterVolume);
    fprintf(f, "music_volume=%d\n", g_settings.musicVolume);
    fprintf(f, "sfx_volume=%d\n", g_settings.sfxVolume);
    fprintf(f, "language=%d\n", g_settings.language);
    fprintf(f, "net_port=%d\n", g_settings.netPort);
    fprintf(f, "player_name=%s\n", g_settings.playerName);
    fclose(f);
}

void Settings_ApplyAudio()
{
    // Squared so the slider feels roughly linear in loudness.
    float master = g_settings.masterVolume / 100.0f;
    float music = master * g_settings.musicVolume / 100.0f, sfx = master * g_settings.sfxVolume / 100.0f;
    Sound::SetMixVolumes(music * music, sfx * sfx);
}
