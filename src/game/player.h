// A character on the court (original class at 0x42c620..0x4312d5, 0x19c bytes).
#pragma once

#include "core/types.h"
#include "game/models.h"
#include "render/gfx.h"

struct BonePose {
    Vec3 trans;
    Vec3 rot;
};

// One keyframe of the current motion. A motion is up to 10 keys, terminated by duration == 0;
// it loops. Bones ease towards the active key's pose at `speed` per second.
struct MotionKey {
    float duration;
    float speed;
    BonePose *pose;     // numBones entries
};

enum CharId { CHAR_KEIICHI = 0, CHAR_MION = 1, CHAR_RENA = 2, CHAR_SATOKO = 3, CHAR_RIKA = 4, CHAR_SHION = 5 };

class Player {
public:
    Player();
    virtual ~Player();

    void Load(gfx::Device *dev, int charId);
    void Render(gfx::Device *dev, Mat4 shadow);
    void Update(float dt);
    void SetPos(float x, float y, float z, float yaw);

    // Expression texture swaps (.osm CTex groups 0..3).
    void SetTex0(int frame);
    void SetTex1(int frame);
    void SetTex2(int frame);
    void SetTex3(int frame);

    // Motions (generated: player_motions.cpp).
    void Motion_Stand();
    void Motion_42dfc0();
    void Motion_42e9cd();
    void Motion_42ee86();
    void Motion_42f1a9();
    void Motion_42fb3f();
    void Motion_43006a();
    void Motion_4301cb();
    void Motion_43030b();
    void Motion_430497();
    void Motion_4305b1();
    void Motion_430701();
    void Motion_430a58();
    void Motion_430c40();
    void Motion_430e6d();
    void Motion_431118();
    void Motion_4312d5();

    SkinModel *model;
    Material7 mtl;
    MotionKey *keys;
    char texName[256];
    int charId;
    bool b154;
    Vec3 pos;
    float yaw;
    float stat168;
    float stat16c;
    float stat170;
    float stat174;
    float stat178;
    float stat17c;
    float stat180;
    bool keyChanged;
    int curKey;
    float f18c;
    int i190;
    float animTime;
    float f198;

    bool benched = false;   // mod: sitting out a 1v1 / 2v2 match (hidden, ignored)
};
