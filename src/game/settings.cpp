#include "game/settings.h"

#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <string>

#include "engine/sound.h"
#include "platform/platform.h"

Settings g_settings;

// Classic: the original arrows (+ numpad) and X / Z / C. WASD: move with WASD (arrows still work),
// Space passes, Shift shoots, E is the extra button.
const int kKbClassic[KB_ACTIONS][2] = {{0x26, 0x68}, {0x28, 0x62}, {0x25, 0x64}, {0x27, 0x66}, {0x58, 0}, {0x5a, 0}, {0x43, 0}};
const int kKbWasd[KB_ACTIONS][2] = {{0x57, 0x26}, {0x53, 0x28}, {0x41, 0x25}, {0x44, 0x27}, {0x20, 0}, {0x10, 0}, {0x45, 0}};
const int kPadDefault[PAD_ACTIONS] = {0, 2, 1, 9};

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
        else if (!strcmp(key, "kb_layout")) g_settings.kbLayout = Clamp(atoi(val), 0, 2);
        else if (!strcmp(key, "kb_custom")) {
            int v[KB_ACTIONS * 2];
            int n = 0;
            for (char *p = (char *)val; *p && n < KB_ACTIONS * 2;) {
                v[n++] = Clamp(atoi(p), 0, 255);
                p = strchr(p, ',');
                if (!p) break;
                p++;
            }
            if (n == KB_ACTIONS * 2)
                for (int i = 0; i < n; i++) g_settings.kbCustom[i / 2][i % 2] = v[i];
        } else if (!strcmp(key, "pad_map")) {
            int v[PAD_ACTIONS];
            if (sscanf(val, "%d,%d,%d,%d", &v[0], &v[1], &v[2], &v[3]) == 4)
                for (int i = 0; i < PAD_ACTIONS; i++) g_settings.padMap[i] = Clamp(v[i], 0, 16);
        }
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
    fprintf(f, "kb_layout=%d\n", g_settings.kbLayout);
    fprintf(f, "kb_custom=");
    for (int i = 0; i < KB_ACTIONS * 2; i++) fprintf(f, i ? ",%d" : "%d", g_settings.kbCustom[i / 2][i % 2]);
    fprintf(f, "\n");
    fprintf(f, "pad_map=%d,%d,%d,%d\n", g_settings.padMap[0], g_settings.padMap[1], g_settings.padMap[2], g_settings.padMap[3]);
    fclose(f);
}

void Settings_ApplyAudio()
{
    // Squared so the slider feels roughly linear in loudness.
    float master = g_settings.masterVolume / 100.0f;
    float music = master * g_settings.musicVolume / 100.0f, sfx = master * g_settings.sfxVolume / 100.0f;
    Sound::SetMixVolumes(music * music, sfx * sfx);
}
