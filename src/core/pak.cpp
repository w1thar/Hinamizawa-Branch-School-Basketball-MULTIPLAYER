#include "core/pak.h"

#include <cstdint>
#include <cstring>
#include <string>
#include <unordered_map>

#include "platform/platform.h"

namespace {

struct Entry {
    const uint8_t *data;
    size_t size;
};

std::unordered_map<std::string, Entry> g_entries;

std::string Normalize(const char *path)
{
    std::string s(path);
    for (char &c : s) {
        if (c == '\\') c = '/';
        else if (c >= 'A' && c <= 'Z') c = (char)(c - 'A' + 'a');
    }
    return s;
}

uint32_t ReadU32(const uint8_t *p) { return p[0] | (p[1] << 8) | (p[2] << 16) | ((uint32_t)p[3] << 24); }

}  // namespace

bool pak_init()
{
    size_t size = 0;
    const uint8_t *base = plat::PakData(&size);
    if (!base || size < 8 || memcmp(base, "HBPK", 4) != 0) return false;
    uint32_t count = ReadU32(base + 4);
    const uint8_t *p = base + 8;
    for (uint32_t i = 0; i < count; i++) {
        uint32_t len = ReadU32(p);
        std::string name((const char *)p + 4, len);
        p += 4 + len;
        uint32_t off = ReadU32(p), sz = ReadU32(p + 4);
        p += 8;
        if ((size_t)off + sz > size) return false;
        g_entries[name] = Entry{base + off, sz};
    }
    return true;
}

const void *pak_find(const char *path, size_t *size)
{
    auto it = g_entries.find(Normalize(path));
    if (it == g_entries.end()) return nullptr;
    if (size) *size = it->second.size;
    return it->second.data;
}
