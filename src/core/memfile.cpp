#include "core/memfile.h"

#include <cctype>
#include <cstdarg>
#include <cstdlib>
#include <cstring>

#include "core/pak.h"

MemFile *mem_fopen(const char *path)
{
    size_t size;
    const void *p = pak_find(path, &size);
    if (!p) return nullptr;
    MemFile *f = new MemFile;
    f->data = (const char *)p;
    f->size = size;
    f->pos = 0;
    return f;
}

void mem_fclose(MemFile *f) { delete f; }

int mem_fgetc(MemFile *f)
{
    if (f->pos >= f->size) return -1;
    return (unsigned char)f->data[f->pos++];
}

char *mem_fgets(char *buf, int n, MemFile *f)
{
    if (n <= 0 || f->pos >= f->size) return nullptr;
    int i = 0;
    while (i < n - 1 && f->pos < f->size) {
        char c = f->data[f->pos++];
        // Text-mode stdio: CRLF -> LF.
        if (c == '\r' && f->pos < f->size && f->data[f->pos] == '\n') continue;
        buf[i++] = c;
        if (c == '\n') break;
    }
    buf[i] = 0;
    return buf;
}

static int peekc(MemFile *f)
{
    if (f->pos >= f->size) return -1;
    char c = f->data[f->pos];
    if (c == '\r' && f->pos + 1 < f->size && f->data[f->pos + 1] == '\n') return '\n';
    return (unsigned char)c;
}

static void advance(MemFile *f)
{
    if (f->data[f->pos] == '\r' && f->pos + 1 < f->size && f->data[f->pos + 1] == '\n') f->pos++;
    f->pos++;
}

static void skip_ws(MemFile *f)
{
    int c;
    while ((c = peekc(f)) != -1 && isspace(c)) advance(f);
}

int mem_fscanf(MemFile *f, const char *fmt, ...)
{
    va_list ap;
    va_start(ap, fmt);
    int assigned = 0;
    bool anyInput = false;

    for (const char *p = fmt; *p; p++) {
        if (isspace((unsigned char)*p)) {
            skip_ws(f);
            continue;
        }
        if (*p != '%') {
            int c = peekc(f);
            if (c == -1) goto eof;
            if (c != (unsigned char)*p) goto done;
            advance(f);
            anyInput = true;
            continue;
        }
        p++;
        bool suppress = false;
        if (*p == '*') { suppress = true; p++; }
        switch (*p) {
        case 'd': {
            skip_ws(f);
            char tmp[32];
            int n = 0, c = peekc(f);
            if (c == -1) goto eof;
            if (c == '-' || c == '+') { tmp[n++] = (char)c; advance(f); }
            while ((c = peekc(f)) != -1 && isdigit(c) && n < 31) { tmp[n++] = (char)c; advance(f); }
            tmp[n] = 0;
            if (n == 0 || !isdigit((unsigned char)tmp[n - 1])) goto done;
            anyInput = true;
            if (!suppress) { *va_arg(ap, int *) = atoi(tmp); assigned++; }
            break;
        }
        case 'f': {
            skip_ws(f);
            char tmp[64];
            int n = 0, c = peekc(f);
            if (c == -1) goto eof;
            if (c == '-' || c == '+') { tmp[n++] = (char)c; advance(f); }
            bool digits = false;
            while ((c = peekc(f)) != -1 && isdigit(c) && n < 60) { tmp[n++] = (char)c; advance(f); digits = true; }
            if (c == '.') {
                tmp[n++] = '.'; advance(f);
                while ((c = peekc(f)) != -1 && isdigit(c) && n < 60) { tmp[n++] = (char)c; advance(f); digits = true; }
            }
            if (digits && (c == 'e' || c == 'E')) {
                tmp[n++] = (char)c; advance(f);
                c = peekc(f);
                if (c == '-' || c == '+') { tmp[n++] = (char)c; advance(f); }
                while ((c = peekc(f)) != -1 && isdigit(c) && n < 62) { tmp[n++] = (char)c; advance(f); }
            }
            tmp[n] = 0;
            if (!digits) goto done;
            anyInput = true;
            if (!suppress) { *va_arg(ap, float *) = (float)atof(tmp); assigned++; }
            break;
        }
        case 's': {
            skip_ws(f);
            int c = peekc(f);
            if (c == -1) goto eof;
            char *out = suppress ? nullptr : va_arg(ap, char *);
            while ((c = peekc(f)) != -1 && !isspace(c)) {
                if (out) *out++ = (char)c;
                advance(f);
            }
            if (out) { *out = 0; assigned++; }
            anyInput = true;
            break;
        }
        case 'c': {
            int c = peekc(f);
            if (c == -1) goto eof;
            advance(f);
            anyInput = true;
            if (!suppress) { *va_arg(ap, char *) = (char)c; assigned++; }
            break;
        }
        case '[': {
            p++;
            bool negate = false;
            if (*p == '^') { negate = true; p++; }
            const char *setBegin = p;
            if (*p == ']') p++;  // ']' as first set member
            while (*p && *p != ']') p++;
            size_t setLen = (size_t)(p - setBegin);
            char *out = suppress ? nullptr : va_arg(ap, char *);
            int c, count = 0;
            while ((c = peekc(f)) != -1) {
                bool inSet = memchr(setBegin, c, setLen) != nullptr;
                if (inSet == negate) break;
                if (out) *out++ = (char)c;
                advance(f);
                count++;
            }
            if (count == 0) goto done;
            anyInput = true;
            if (out) { *out = 0; assigned++; }
            break;
        }
        default:
            goto done;
        }
    }
done:
    va_end(ap);
    return assigned;
eof:
    va_end(ap);
    return (assigned == 0 && !anyInput) ? -1 : assigned;
}
