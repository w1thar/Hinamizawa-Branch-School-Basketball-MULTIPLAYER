"""Prints, for every CALL to one of the given targets, the instructions since the previous CALL
(i.e. everything that computes its arguments), dropping pure stack/frame noise.

usage: python callblocks.py <file.asm> <target> [<target> ...]
"""
import re
import sys

lines = open(sys.argv[1], encoding="utf-8").read().splitlines()
targets = sys.argv[2:]
block = []
for ln in lines:
    m = re.match(r"([0-9a-f]{8})\s+(.*)", ln)
    if not m:
        continue
    addr, ins = m.groups()
    if ins.startswith("CALL"):
        if any(t in ins for t in targets):
            print("\n".join(block))
            print(f"{addr}  {ins}")
            print("-" * 60)
        if "__ftol" in ins or "sinf" in ins or "cosf" in ins or "sqrtf" in ins or "rand" in ins:
            block.append(f"{addr}  {ins}")
        else:
            block = []
        continue
    if re.match(r"(MOV E[A-D]X,dword ptr \[EBP \+ -0x8\]|ADD ESP,0x[0-9a-f]+)$", ins):
        continue
    block.append(f"{addr}  {ins}")
