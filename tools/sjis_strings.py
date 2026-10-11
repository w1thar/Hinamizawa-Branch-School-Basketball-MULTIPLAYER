"""Dump Shift-JIS / ASCII strings from basket_v101.exe's data sections with their virtual addresses.

usage: python sjis_strings.py <exe> [min_len]
"""
import struct
import sys


def sections(data):
    pe = struct.unpack_from("<I", data, 0x3C)[0]
    nsec = struct.unpack_from("<H", data, pe + 6)[0]
    optsz = struct.unpack_from("<H", data, pe + 20)[0]
    base = struct.unpack_from("<I", data, pe + 24 + 28)[0]
    off = pe + 24 + optsz
    for i in range(nsec):
        name = data[off:off + 8].rstrip(b"\0").decode()
        vsize, va, rsize, raw = struct.unpack_from("<IIII", data, off + 8)
        yield name, base + va, raw, min(vsize, rsize)
        off += 40


def main():
    data = open(sys.argv[1], "rb").read()
    min_len = int(sys.argv[2]) if len(sys.argv) > 2 else 2
    for name, va, raw, size in sections(data):
        if name not in (".data", ".rdata"):
            continue
        blob = data[raw:raw + size]
        i = 0
        while i < len(blob):
            j = i
            while j < len(blob) and blob[j] != 0:
                j += 1
            chunk = blob[i:j]
            if len(chunk) >= min_len and any(b >= 0x80 for b in chunk):
                try:
                    s = chunk.decode("cp932")
                    if all(c.isprintable() or c in "\r\n\t" for c in s):
                        print(f"{va + i:08x}  {s!r}")
                except UnicodeDecodeError:
                    pass
            i = j + 1


if __name__ == "__main__":
    main()
