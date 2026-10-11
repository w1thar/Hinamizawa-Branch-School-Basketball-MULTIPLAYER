"""Scan Ghidra raw decompiler output for field accesses on a base pointer, to help recover struct layouts.

usage: python offset_scan.py <raw_dir> <file_glob> [base_regex]
Prints offset -> {access types} -> functions using it.
"""
import collections
import glob
import os
import re
import sys

raw_dir, pattern = sys.argv[1], sys.argv[2]
base = sys.argv[3] if len(sys.argv) > 3 else r"(?:param_1|this)"

# *(float *)((int)param_1 + 0x26c)   *(float *)(param_1 + 0x26c)   (int)param_1 + 0x26c
acc = re.compile(r"\*\((\w+(?: \w+)?) \*+\)\(\(?(?:\(int\))?" + base + r"\)? \+ (0x[0-9a-f]+|\d+)\)")
addr = re.compile(r"\(\(?(?:\(int\))?" + base + r"\)? \+ (0x[0-9a-f]+|\d+)\)")

uses = collections.defaultdict(lambda: collections.defaultdict(set))
for path in sorted(glob.glob(os.path.join(raw_dir, pattern))):
    fn = os.path.basename(path)[:8]
    text = open(path, encoding="utf-8", errors="replace").read()
    for m in acc.finditer(text):
        uses[int(m.group(2), 0)][m.group(1)].add(fn)
    for m in addr.finditer(text):
        off = int(m.group(1), 0)
        if off not in uses:
            uses[off]["&addr"].add(fn)

for off in sorted(uses):
    kinds = uses[off]
    fns = set().union(*kinds.values())
    print(f"+0x{off:03x}  {','.join(sorted(kinds)):40s} {len(fns):3d} fn  {' '.join(sorted(fns)[:6])}")
