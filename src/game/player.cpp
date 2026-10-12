// Player (0x42c620 ctor .. 0x42deb4).
#include "game/player.h"

#include <cmath>
#include <cstdio>
#include <cstring>

#include "core/d3dmath.h"
#include "engine/textures.h"

static const int MAX_KEYS = 10;

Player::Player()
{
    model = nullptr;
    keys = nullptr;
    memset(&mtl, 0, sizeof(mtl));
    memset(texName, 0, sizeof(texName));
    charId = 0;
    pos = Vec3(0, 0, 0);
    yaw = 0;
    stat168 = stat16c = stat170 = stat174 = stat178 = stat17c = stat180 = 0;
    b154 = false;
    keyChanged = false;
    curKey = 0;
    f18c = 0;
    i190 = 0;
    animTime = 0;
    f198 = 0;
}

Player::~Player()
{
    if (keys) {
        for (int i = 0; i < MAX_KEYS; i++) delete[] keys[i].pose;
        delete[] keys;
        keys = nullptr;
    }
    delete model;
    model = nullptr;
}

void Player::Load(gfx::Device *dev, int id)
{
    (void)dev;
    char name[256];
    charId = id;
    switch (charId) {
    case CHAR_KEIICHI:
        snprintf(name, sizeof(name), "k1");
        stat168 = 10.0f; stat16c = 15.0f; stat170 = 4.0f; stat174 = 8.0f;
        stat178 = 15.0f; stat17c = 9.0f; stat180 = 5.3f;
        break;
    case CHAR_MION:
        snprintf(name, sizeof(name), "mion");
        stat168 = 10.0f; stat16c = 15.0f; stat170 = 3.9f; stat174 = 7.0f;
        stat178 = 14.0f; stat17c = 9.0f; stat180 = 5.3f;
        break;
    case CHAR_RENA:
        snprintf(name, sizeof(name), "rena");
        stat168 = 9.0f; stat16c = 16.0f; stat170 = 3.89f; stat174 = 6.0f;
        stat178 = 13.0f; stat17c = 8.0f; stat180 = 5.3f;
        break;
    case CHAR_SATOKO:
        snprintf(name, sizeof(name), "satoko");
        stat168 = 10.5f; stat16c = 13.0f; stat170 = 3.1f; stat174 = 5.0f;
        stat178 = 12.0f; stat17c = 4.0f; stat180 = 4.8f;
        break;
    case CHAR_RIKA:
        snprintf(name, sizeof(name), "rika");
        stat168 = 8.0f; stat16c = 12.0f; stat170 = 3.3f; stat174 = 5.0f;
        stat178 = 12.0f; stat17c = 12.0f; stat180 = 4.8f;
        break;
    case CHAR_SHION:
        snprintf(name, sizeof(name), "sion");
        stat168 = 9.0f; stat16c = 15.0f; stat170 = 3.9f; stat174 = 7.0f;
        stat178 = 14.0f; stat17c = 8.0f; stat180 = 5.3f;
        break;
    }

    model = new SkinModel();
    model->Load(name);
    snprintf(texName, sizeof(texName), "basket\\%s.tga", name);
    D3DTextr_CreateTextureFromFile(texName, 0, 0);

    keys = new MotionKey[MAX_KEYS];
    memset(keys, 0, sizeof(MotionKey) * MAX_KEYS);
    for (int k = 0; k < MAX_KEYS; k++) {
        keys[k].pose = new BonePose[model->numBones];
        memset(keys[k].pose, 0, sizeof(BonePose) * model->numBones);
        for (int b = 0; b < model->numBones; b++) {
            keys[k].pose[b].trans = model->bones[b].trans;
            keys[k].pose[b].rot = model->bones[b].rot;
        }
        keys[k].pose[0].trans = pos;
        keys[k].pose[0].rot.y = yaw;
    }
    Bone &root = model->bones[0];
    root.trans = pos;
    root.rot.y = yaw;
    root.rot.x = 0.0f;
    root.rot.z = 0.0f;
    Motion_Stand();

    memset(&mtl, 0, sizeof(mtl));
    mtl.diffuse.r = 0.8f; mtl.diffuse.g = 0.8f; mtl.diffuse.b = 0.8f; mtl.diffuse.a = 0.5f;
    mtl.ambient.r = 0.8f; mtl.ambient.g = 0.8f; mtl.ambient.b = 0.8f; mtl.ambient.a = 1.0f;
    mtl.specular.r = 0.0f; mtl.specular.g = 0.0f; mtl.specular.b = 0.0f; mtl.specular.a = 1.0f;
    mtl.emissive.r = 0.1f; mtl.emissive.g = 0.1f; mtl.emissive.b = 0.1f;
    mtl.power = 0.0f;
}

void Player::Render(gfx::Device *dev, Mat4 shadow)
{
    Mat4 identity;
    mtl.diffuse.r = 0.6f; mtl.diffuse.g = 0.6f; mtl.diffuse.b = 0.6f;
    mtl.ambient.r = 0.9f; mtl.ambient.g = 0.9f; mtl.ambient.b = 0.9f;
    dev->SetMaterial(mtl);
    dev->SetTextureStageState(0, gfx::TSS_ALPHAARG1, gfx::TA_TEXTURE);
    dev->SetRenderState(gfx::RS_SRCBLEND, gfx::BLEND_SRCALPHA);
    dev->SetRenderState(gfx::RS_DESTBLEND, gfx::BLEND_INVSRCALPHA);
    dev->SetTexture(0, D3DTextr_GetSurface(texName));
    model->Render(dev);

    // Planar shadow: black, alpha from the material (0.5).
    dev->SetTextureStageState(0, gfx::TSS_ALPHAARG1, gfx::TA_DIFFUSE);
    mtl.diffuse.r = 0.0f; mtl.diffuse.g = 0.0f; mtl.diffuse.b = 0.0f;
    mtl.ambient.r = 0.0f; mtl.ambient.g = 0.0f; mtl.ambient.b = 0.0f;
    dev->SetMaterial(mtl);
    dev->SetTransform(gfx::TS_WORLD, shadow);
    model->Render(dev);
    dev->SetTextureStageState(0, gfx::TSS_ALPHAARG1, gfx::TA_TEXTURE);
    D3DUtil_SetIdentityMatrix(identity);
    dev->SetTransform(gfx::TS_WORLD, identity);
}

void Player::Update(float dt)
{
    int key = 0;
    float t = keys[0].duration;
    if (t == 0.0f) return;

    while (t < animTime) {
        key++;
        if (keys[key].duration == 0.0f) {
            animTime -= t;
            key = 0;
        } else {
            t += keys[key].duration;
        }
    }
    if (yaw > 3.14f) yaw -= 6.28f;
    if (yaw < -3.14f) yaw += 6.28f;
    keyChanged = key != curKey;

    Bone *bones = model->bones;
    const MotionKey &k = keys[key];
    const BonePose *pose = k.pose;
    if (bones[0].rot.y - pose[0].rot.y - yaw > 3.14f) bones[0].rot.y -= 6.28f;
    if (bones[0].rot.y - pose[0].rot.y - yaw < -3.14f) bones[0].rot.y += 6.28f;

    // Root translation is authored in character space; rotate it by the facing.
    float tx = cosf(-yaw) * pose[0].trans.x - sinf(-yaw) * pose[0].trans.z;
    float tz = sinf(-yaw) * pose[0].trans.x + cosf(-yaw) * pose[0].trans.z;

    auto ease = [&](float &cur, float target) {
        float d = target - cur;
        if (d > 0.01f || d < -0.01f) cur = d * k.speed * dt + cur;
    };
    ease(bones[0].trans.x, tx + pos.x);
    ease(bones[0].trans.y, pose[0].trans.y + pos.y);
    ease(bones[0].trans.z, tz + pos.z);
    ease(bones[0].rot.x, pose[0].rot.x);
    ease(bones[0].rot.y, pose[0].rot.y + yaw);
    ease(bones[0].rot.z, pose[0].rot.z);
    for (int b = 1; b < model->numBones; b++) {
        ease(bones[b].rot.x, pose[b].rot.x);
        ease(bones[b].rot.y, pose[b].rot.y);
        ease(bones[b].rot.z, pose[b].rot.z);
    }
    animTime += dt;
    curKey = key;
    model->Skin();
}

void Player::SetPos(float x, float y, float z, float newYaw)
{
    pos.x = x;
    pos.y = y;
    pos.z = z;
    yaw = newYaw;
    Bone &root = model->bones[0];
    root.trans = pos;
    root.rot.y = yaw;
}

static void ApplyTex(SkinModel *m, int group, int frame)
{
    const CTexGroup &g = m->ctex[group];
    float step = g.step;
    for (int i = 0; i < g.count; i++) m->verts[g.verts[i].vtx].tv = g.verts[i].tv + (float)frame * step;
}

void Player::SetTex0(int frame) { texFrame[0] = frame; ApplyTex(model, 0, frame); }
void Player::SetTex1(int frame) { texFrame[1] = frame; ApplyTex(model, 1, frame); }
void Player::SetTex2(int frame) { texFrame[2] = frame; ApplyTex(model, 2, frame); }
void Player::SetTex3(int frame) { texFrame[3] = frame; ApplyTex(model, 3, frame); }

void Player::ApplyMotion(int id)
{
    static void (Player::*const motions[NUM_MOTIONS])() = {
        &Player::Motion_Stand,
        &Player::Motion_42dfc0,
        &Player::Motion_42e9cd,
        &Player::Motion_42ee86,
        &Player::Motion_42f1a9,
        &Player::Motion_42fb3f,
        &Player::Motion_43006a,
        &Player::Motion_4301cb,
        &Player::Motion_43030b,
        &Player::Motion_430497,
        &Player::Motion_4305b1,
        &Player::Motion_430701,
        &Player::Motion_430a58,
        &Player::Motion_430c40,
        &Player::Motion_430e6d,
        &Player::Motion_431118,
        &Player::Motion_4312d5,
    };
    if (id >= 0 && id < NUM_MOTIONS) (this->*motions[id])();
}
