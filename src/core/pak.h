// Read-only asset archive embedded in the executable (built by tools/pakgen from assets/).
//
// Layout (little endian):
//   char magic[4] = "HBPK"; u32 count;
//   count x { u32 nameLen; char name[nameLen]; u32 offset; u32 size; }
//   file data...
// Names are stored lower-case with '/' separators; lookups are normalised the same way, so the
// game's original paths ("basket\\k1.x", "WAV\\LP\\semi.wav") work unchanged.
#pragma once

#include <cstddef>

bool pak_init();
const void *pak_find(const char *path, size_t *size);
