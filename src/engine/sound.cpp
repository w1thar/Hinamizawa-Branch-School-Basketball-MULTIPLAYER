#include "engine/sound.h"

#include <cmath>
#include <cstdio>
#include <cstring>
#include <vector>

#include "core/pak.h"
#include "platform/platform.h"

#define DR_MP3_IMPLEMENTATION
#define DR_MP3_NO_STDIO
#include "dr_mp3.h"

namespace {

struct Slot {
    std::vector<int16_t> pcm;   // interleaved, `channels` per frame
    int channels = 1;
    int rate = 22050;
    bool playing = false;
    double pos = 0;             // in source frames
    float gain = 1.0f;
};

struct Music {
    bool open = false;          // MCI device "MP3" is open
    bool playing = false;
    drmp3 mp3;
    bool mp3Valid = false;
    std::vector<float> buf;     // decoded chunk, interleaved stereo at the file's rate
    size_t bufPos = 0;
    int rate = 44100;
    int channels = 2;
    double frac = 0;
};

Slot g_slots[Sound::NUM_SLOTS];
float g_musicGain = 1.0f, g_sfxGain = 1.0f;
char g_trackName[128];
int g_trackGen;
Music g_music;
bool g_audioOpen = false;

u16 rd16(const u8 *p) { return (u16)(p[0] | (p[1] << 8)); }
u32 rd32(const u8 *p) { return p[0] | (p[1] << 8) | (p[2] << 16) | ((u32)p[3] << 24); }

// Fetches the next stereo frame of music; loops at end of track like the MCI notify handler.
bool MusicFrame(float &l, float &r)
{
    Music &m = g_music;
    if (!m.playing || !m.mp3Valid) return false;
    if (m.bufPos >= m.buf.size()) {
        m.buf.resize(4096 * m.channels);
        drmp3_uint64 got = drmp3_read_pcm_frames_f32(&m.mp3, 4096, m.buf.data());
        if (got == 0) {
            drmp3_seek_to_pcm_frame(&m.mp3, 0);   // "play MP3 from 0 notify"
            got = drmp3_read_pcm_frames_f32(&m.mp3, 4096, m.buf.data());
            if (got == 0) return false;
        }
        m.buf.resize((size_t)got * m.channels);
        m.bufPos = 0;
    }
    l = m.buf[m.bufPos];
    r = m.channels > 1 ? m.buf[m.bufPos + 1] : l;
    return true;
}

void Mix(int16_t *out, int frames, void *)
{
    for (int i = 0; i < frames; i++) {
        float l = 0, r = 0;
        for (Slot &s : g_slots) {
            if (!s.playing) continue;
            size_t total = s.pcm.size() / s.channels;
            size_t i0 = (size_t)s.pos;
            if (i0 >= total) {
                s.playing = false;
                continue;
            }
            size_t i1 = i0 + 1 < total ? i0 + 1 : i0;
            float t = (float)(s.pos - (double)i0);
            float a0 = s.pcm[i0 * s.channels], a1 = s.pcm[i1 * s.channels];
            float b0 = s.pcm[i0 * s.channels + s.channels - 1], b1 = s.pcm[i1 * s.channels + s.channels - 1];
            l += (a0 + (a1 - a0) * t) * s.gain * g_sfxGain;
            r += (b0 + (b1 - b0) * t) * s.gain * g_sfxGain;
            s.pos += (double)s.rate / plat::AUDIO_RATE;
        }
        Music &m = g_music;
        if (m.playing && m.mp3Valid) {
            float ml, mr;
            if (MusicFrame(ml, mr)) {
                l += ml * 32767.0f * g_musicGain;
                r += mr * 32767.0f * g_musicGain;
                m.frac += (double)m.rate / plat::AUDIO_RATE;
                while (m.frac >= 1.0) {
                    m.frac -= 1.0;
                    m.bufPos += m.channels;
                }
            }
        }
        out[i * 2] = (int16_t)(l > 32767 ? 32767 : l < -32768 ? -32768 : l);
        out[i * 2 + 1] = (int16_t)(r > 32767 ? 32767 : r < -32768 ? -32768 : r);
    }
}

void CloseMusicLocked()
{
    if (g_music.mp3Valid) drmp3_uninit(&g_music.mp3);
    g_music.mp3Valid = false;
    g_music.open = false;
    g_music.playing = false;
    g_music.buf.clear();
    g_music.bufPos = 0;
}

}  // namespace

Sound::Sound() : mp3Playing(false) {}

void Sound::SetMixVolumes(float music, float sfx)
{
    plat::AudioLock();
    g_musicGain = music;
    g_sfxGain = sfx;
    plat::AudioUnlock();
}

Sound::~Sound()
{
    if (mp3Playing) StopMp3();
    if (g_audioOpen) {
        plat::AudioClose();
        g_audioOpen = false;
    }
    for (Slot &s : g_slots) s = Slot();
    if (g_music.mp3Valid) drmp3_uninit(&g_music.mp3);
    g_music.mp3Valid = false;
}

bool Sound::Init()
{
    // The original re-created the DirectSound object here, releasing all loaded buffers.
    if (!g_audioOpen) {
        if (!plat::AudioOpen(Mix, nullptr)) return true;   // no audio device: run silently
        g_audioOpen = true;
    }
    plat::AudioLock();
    for (Slot &s : g_slots) s = Slot();
    plat::AudioUnlock();
    return true;
}

bool Sound::LoadWav(int slot, const char *file)
{
    size_t size;
    const u8 *d = (const u8 *)pak_find(file, &size);
    if (!d || size < 12 || memcmp(d, "RIFF", 4) || memcmp(d + 8, "WAVE", 4)) {
        plat::ErrorBox("ウエイブファイルが見つかりません");
        return false;
    }
    int channels = 0, rate = 0, bits = 0;
    const u8 *pcm = nullptr;
    u32 pcmSize = 0;
    for (size_t off = 12; off + 8 <= size;) {
        u32 id = rd32(d + off), len = rd32(d + off + 4);
        if (id == 0x20746d66 /* fmt */) {
            if (rd16(d + off + 8) != 1) {
                plat::ErrorBox("不正なウエイブフォーマットです");
                return false;
            }
            channels = rd16(d + off + 10);
            rate = (int)rd32(d + off + 12);
            bits = rd16(d + off + 22);
        } else if (id == 0x61746164 /* data */) {
            pcm = d + off + 8;
            pcmSize = (u32)(len > size - off - 8 ? size - off - 8 : len);
        }
        off += 8 + len + (len & 1);
    }
    if (!pcm || !channels || (bits != 8 && bits != 16)) {
        plat::ErrorBox("ウエイブファイルにデータがありません");
        return false;
    }

    Slot s;
    s.channels = channels;
    s.rate = rate;
    size_t samples = pcmSize / (bits / 8);
    s.pcm.resize(samples);
    for (size_t i = 0; i < samples; i++)
        s.pcm[i] = bits == 8 ? (int16_t)((pcm[i] - 128) << 8) : (int16_t)rd16(pcm + i * 2);

    plat::AudioLock();
    g_slots[slot] = std::move(s);
    plat::AudioUnlock();
    return true;
}

void (*Sound::playHook)(int slot) = nullptr;

void Sound::Play(int slot)
{
    if (playHook) playHook(slot);
    plat::AudioLock();
    g_slots[slot].pos = 0;          // SetCurrentPosition(0)
    g_slots[slot].playing = !g_slots[slot].pcm.empty();
    plat::AudioUnlock();
}

void Sound::SetVolume(int slot, int volume)
{
    plat::AudioLock();
    g_slots[slot].gain = volume >= 0 ? 1.0f : powf(10.0f, volume / 2000.0f);
    plat::AudioUnlock();
}

void Sound::OpenMp3(const char *file)
{
    if (mp3Playing) StopMp3();
    plat::AudioLock();
    // "open ... alias MP3" fails while the alias is still open, keeping the old track.
    size_t size;
    const void *d = g_music.open ? nullptr : pak_find(file, &size);
    if (d && drmp3_init_memory(&g_music.mp3, d, size, nullptr)) {
        snprintf(g_trackName, sizeof(g_trackName), "%s", file);
        g_music.mp3Valid = true;
        g_music.open = true;
        g_music.rate = (int)g_music.mp3.sampleRate;
        g_music.channels = (int)g_music.mp3.channels;
        g_music.frac = 0;
    }
    plat::AudioUnlock();
    mp3Playing = false;
}

void Sound::PlayMp3()
{
    if (mp3Playing) StopMp3();
    plat::AudioLock();
    if (g_music.open) {
        g_music.playing = true;
        g_trackGen++;
    }
    plat::AudioUnlock();
    mp3Playing = true;
}

void Sound::StopMp3()
{
    if (mp3Playing) {
        plat::AudioLock();
        CloseMusicLocked();   // "stop MP3" + "close MP3"
        plat::AudioUnlock();
        mp3Playing = false;
    }
}

const char *Sound::CurrentTrack(int &generation)
{
    generation = g_trackGen;
    bool playing;
    plat::AudioLock();
    playing = g_music.playing && g_music.mp3Valid;
    plat::AudioUnlock();
    return playing ? g_trackName : "";
}

void Sound::ForceTrack(const char *file)
{
    plat::AudioLock();
    CloseMusicLocked();
    plat::AudioUnlock();
    mp3Playing = false;
    if (!file || !*file) return;
    OpenMp3(file);
    PlayMp3();
}
