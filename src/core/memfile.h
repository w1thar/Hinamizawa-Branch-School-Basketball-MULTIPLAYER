// In-memory replacement for the stdio calls the original loaders used (fopen/fgets/fgetc/fscanf),
// so the .x/.osm parsers can follow the exact same read sequence on data from the asset archive.
#pragma once

#include <cstddef>

struct MemFile {
    const char *data;
    size_t size;
    size_t pos;
};

MemFile *mem_fopen(const char *path);   // looks the path up in the asset archive
void mem_fclose(MemFile *f);
char *mem_fgets(char *buf, int n, MemFile *f);
int mem_fgetc(MemFile *f);

// Supports the conversions the game used: whitespace, literals, %d %f %s %*c %[^...] %[...].
// Like a real stream, a failed literal match leaves the offending character unread.
int mem_fscanf(MemFile *f, const char *fmt, ...);
