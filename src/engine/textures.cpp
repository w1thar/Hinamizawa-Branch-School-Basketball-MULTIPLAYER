#include "engine/textures.h"

#include <cstring>
#include <string>
#include <vector>

#include "core/pak.h"

namespace {

struct TexContainer {
    std::string name;
    gfx::Texture *tex;
};

std::vector<TexContainer> g_textures;

bool SameName(const std::string &a, const char *b)
{
#ifdef _WIN32
    return _stricmp(a.c_str(), b) == 0;
#else
    return strcasecmp(a.c_str(), b) == 0;
#endif
}

u16 rd16(const u8 *p) { return (u16)(p[0] | (p[1] << 8)); }
u32 rd32(const u8 *p) { return p[0] | (p[1] << 8) | (p[2] << 16) | ((u32)p[3] << 24); }

// Uncompressed / RLE true-colour TGA, as handled by D3DTextr's LoadTargaFile.
bool LoadTarga(const u8 *d, size_t size, int &w, int &h, std::vector<u32> &px)
{
    if (size < 18) return false;
    u8 idLen = d[0], type = d[2], bpp = d[16], desc = d[17];
    w = rd16(d + 12);
    h = rd16(d + 14);
    if ((type != 2 && type != 10) || (bpp != 24 && bpp != 32)) return false;
    const u8 *p = d + 18 + idLen, *end = d + size;
    int bytes = bpp / 8;
    px.assign((size_t)w * h, 0);
    std::vector<u32> linear((size_t)w * h);
    auto readPixel = [&](const u8 *q) {
        u32 b = q[0], g = q[1], r = q[2], a = bytes == 4 ? q[3] : 0xff;
        return (a << 24) | (r << 16) | (g << 8) | b;
    };
    size_t n = 0, total = (size_t)w * h;
    if (type == 2) {
        if (p + total * bytes > end) return false;
        for (; n < total; n++, p += bytes) linear[n] = readPixel(p);
    } else {
        while (n < total && p < end) {
            u8 hdr = *p++;
            int count = (hdr & 0x7f) + 1;
            if (hdr & 0x80) {
                if (p + bytes > end) return false;
                u32 c = readPixel(p);
                p += bytes;
                while (count-- && n < total) linear[n++] = c;
            } else {
                while (count-- && n < total) {
                    if (p + bytes > end) return false;
                    linear[n++] = readPixel(p);
                    p += bytes;
                }
            }
        }
    }
    bool topDown = (desc & 0x20) != 0;
    for (int y = 0; y < h; y++) {
        int src = topDown ? y : h - 1 - y;
        memcpy(&px[(size_t)y * w], &linear[(size_t)src * w], w * 4);
    }
    return true;
}

// Uncompressed 8/24/32-bit Windows BMP (LoadImage equivalent). Alpha is opaque.
bool LoadBitmap(const u8 *d, size_t size, int &w, int &h, std::vector<u32> &px)
{
    if (size < 54 || d[0] != 'B' || d[1] != 'M') return false;
    u32 dataOff = rd32(d + 10), hdrSize = rd32(d + 14);
    w = (int)rd32(d + 18);
    int sh = (int)rd32(d + 22);
    u16 bpp = rd16(d + 28);
    u32 comp = rd32(d + 30);
    if (comp != 0 || (bpp != 8 && bpp != 24 && bpp != 32)) return false;
    bool topDown = sh < 0;
    h = topDown ? -sh : sh;
    const u8 *pal = d + 14 + hdrSize;
    size_t stride = ((size_t)w * bpp / 8 + 3) & ~(size_t)3;
    if (dataOff + stride * h > size) return false;
    px.assign((size_t)w * h, 0);
    for (int y = 0; y < h; y++) {
        const u8 *row = d + dataOff + stride * (topDown ? y : h - 1 - y);
        for (int x = 0; x < w; x++) {
            u32 r, g, b;
            if (bpp == 8) {
                const u8 *c = pal + row[x] * 4;
                b = c[0]; g = c[1]; r = c[2];
            } else {
                const u8 *c = row + x * (bpp / 8);
                b = c[0]; g = c[1]; r = c[2];
            }
            px[(size_t)y * w + x] = 0xff000000 | (r << 16) | (g << 8) | b;
        }
    }
    return true;
}

}  // namespace

bool D3DTextr_CreateTextureFromFile(const char *name, u32 stage, u32 flags)
{
    (void)stage;
    (void)flags;
    if (!name) return false;
    if (D3DTextr_GetSurface(name)) return true;

    size_t size;
    const u8 *data = (const u8 *)pak_find(name, &size);
    if (!data) return false;

    int w = 0, h = 0;
    std::vector<u32> px;
    const char *ext = strrchr(name, '.');
    bool ok = false;
    if (ext && (ext[1] == 't' || ext[1] == 'T')) ok = LoadTarga(data, size, w, h, px);
    else ok = LoadBitmap(data, size, w, h, px);
    if (!ok) return false;

    TexContainer tc;
    tc.name = name;
    tc.tex = gfx::GetDevice()->CreateTexture(w, h, px.data());
    g_textures.push_back(tc);
    return true;
}

gfx::Texture *D3DTextr_GetSurface(const char *name)
{
    for (auto &t : g_textures)
        if (SameName(t.name, name)) return t.tex;
    return nullptr;
}

void D3DTextr_DestroyAll()
{
    for (auto &t : g_textures) gfx::GetDevice()->DestroyTexture(t.tex);
    g_textures.clear();
}
