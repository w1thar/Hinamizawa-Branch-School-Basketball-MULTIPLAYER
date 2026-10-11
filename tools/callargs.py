"""Summarise calls in an annotated asm dump: for each CALL, print the PUSHes (arguments, last pushed
first) that precede it since the previous CALL. Handy where Ghidra drops varargs.

usage: python callargs.py <file.asm> [call-target-substring ...]
"""
import re
import sys

lines = open(sys.argv[1], encoding="utf-8").read().splitlines()
filters = sys.argv[2:]
pushes = []
for ln in lines:
    m = re.match(r"([0-9a-f]{8})\s+(.*)", ln)
    if not m:
        continue
    addr, ins = m.groups()
    if ins.startswith("CALL"):
        if not filters or any(f in ins for f in filters):
            args = ", ".join(reversed(pushes))
            print(f"{addr}  {ins}  ({args})")
        pushes = []
    elif ins.startswith("PUSH") and not ins.startswith("PUSH EBP"):
        pushes.append(ins[5:])
    elif ins.startswith(("LEA", "MOV")):
        pass
