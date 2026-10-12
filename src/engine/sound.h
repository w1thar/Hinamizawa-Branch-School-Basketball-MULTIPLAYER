// The original CSound class (DirectSound buffers + MCI "mpegvideo" MP3 playback), re-implemented
// on top of a software mixer fed to the platform audio device.
//
// Behaviour preserved from the original:
//  * 15 slots, one static buffer each. Play() rewinds and restarts that slot (never overlaps
//    itself) and plays once.
//  * OpenMp3() closes a playing track first; PlayMp3() first stops+closes a playing track (MCI
//    "stop"/"close"), so calling PlayMp3() twice in a row leaves the music silent until the next
//    OpenMp3(). The track loops when it reaches its end (MM_MCINOTIFY -> "play from 0").
#pragma once

#include "core/types.h"

class Sound {
public:
    Sound();
    ~Sound();

    bool Init();
    bool LoadWav(int slot, const char *file);
    void Play(int slot);
    void SetVolume(int slot, int volume);   // DirectSound units: hundredths of dB, 0 = full

    void OpenMp3(const char *file);
    void PlayMp3();
    void StopMp3();

    bool mp3Playing;

    // Not in the original: global gains (0..1) for music and sound effects.
    static void SetMixVolumes(float music, float sfx);

    static const int NUM_SLOTS = 15;
};
