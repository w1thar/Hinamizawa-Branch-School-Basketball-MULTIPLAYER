"""Annotate `float ptr [0x0044xxxx]` / `double ptr [...]` operands in a Ghidra asm listing with their values.

usage: python annotate_consts.py <exe> <listing.txt> [--inplace]
"""
import re
import struct
import sys

from sjis_strings import sections


def main():
    data = open(sys.argv[1], "rb").read()
    secs = list(sections(data))

    def read(va, n):
        for _, base, raw, size in secs:
            if base <= va < base + size:
                off = raw + va - base
                return data[off:off + n]
        return None

    pat = re.compile(r"(float|double|dword) ptr \[(0x[0-9a-f]{8})\]")

    def repl(m):
        kind, addr = m.group(1), int(m.group(2), 16)
        if kind == "double":
            b = read(addr, 8)
            val = struct.unpack("<d", b)[0] if b else None
        else:
            b = read(addr, 4)
            val = struct.unpack("<f", b)[0] if b and kind == "float" else (struct.unpack("<i", b)[0] if b else None)
        return m.group(0) + (f" {{{val:.7g}}}" if isinstance(val, float) else f" {{{val}}}")

    imm = re.compile(r"(PUSH|MOV [^,]+,) (0x(?:00)?4[45][0-9a-f]{4})\b")

    def repl_str(m):
        addr = int(m.group(2), 16)
        b = read(addr, 200)
        if not b or 0 not in b:
            return m.group(0)
        s = b[:b.index(0)]
        if len(s) < 2:
            return m.group(0)
        try:
            t = s.decode("cp932")
        except UnicodeDecodeError:
            return m.group(0)
        if not all(c.isprintable() or c in "\r\n\t　" for c in t):
            return m.group(0)
        return m.group(0) + " {" + repr(t) + "}"

    text = open(sys.argv[2], encoding="utf-8").read()
    text = re.sub(r" \{[^{}\n]*\}$", "", text, flags=re.M)  # strip previous annotations
    result = imm.sub(repl_str, pat.sub(repl, text))
    if "--inplace" in sys.argv:
        open(sys.argv[2], "w", encoding="utf-8").write(result)
    else:
        sys.stdout.write(result)


if __name__ == "__main__":
    main()
