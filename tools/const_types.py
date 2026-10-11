"""List the floating-point constants each function loads, with their precision (float vs double),
from the annotated asm dumps. The decompiler hides whether the original source wrote `0.7f` or `0.7`.

usage: python const_types.py <ghidra_asm dir>  > reference/consts.txt
"""
import collections
import glob
import os
import re
import sys

pat = re.compile(r"(float|double) ptr \[0x[0-9a-f]{8}\] \{([^}]*)\}")
for path in sorted(glob.glob(os.path.join(sys.argv[1], "*.asm"))):
    kinds = collections.defaultdict(set)
    for m in pat.finditer(open(path, encoding="utf-8").read()):
        kinds[m.group(2)].add(m.group(1))
    if not kinds:
        continue
    name = os.path.basename(path)[:-4]
    items = []
    for val in sorted(kinds, key=lambda v: float(v) if v.replace('.', '', 1).replace('-', '', 1).replace('e', '', 1).isdigit() else 0):
        k = kinds[val]
        tag = "f" if k == {"float"} else ("d" if k == {"double"} else "f+d")
        items.append(f"{val}{tag}")
    print(f"{name}: {' '.join(items)}")
