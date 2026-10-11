"""Symbolic x87/register evaluator for the annotated asm dumps (MSVC6 debug code).

For every CALL it prints the call target with its pushed arguments rendered as C-like expressions,
and for every store to memory the stored expression. Comparisons are summarised as conditions.
It is a reading aid for functions where Ghidra loses x87 values (PUSH ECX; FSTP [ESP] idiom) or
varargs; it is deliberately simple and only understands the patterns this binary uses.

usage: python fpu_expr.py <file.asm> [--from ADDR] [--to ADDR]
"""
import re
import sys

GAME = {
    0x54: "dt", 0x58: "keyUp", 0x5c: "keyDown", 0x60: "keyLeft", 0x64: "keyRight", 0x68: "keySpace",
    0x6c: "keyX", 0x70: "keyZ", 0x74: "keyC", 0x78: "keyNum2", 0x7c: "keyNum4", 0x80: "keyNum6",
    0x84: "keyNum8", 0x88: "keyEnter", 0x8c: "mouseL", 0x90: "mouseR", 0xb4: "mouseX", 0xb8: "mouseY",
    0xc0: "sound", 0xc4: "meshCourt", 0xc8: "meshBuild", 0xcc: "meshGoal", 0xd0: "meshBall", 0xd4: "meshCone",
    0x21c: "camPos.x", 0x220: "camPos.y", 0x224: "camPos.z", 0x228: "camDir.x", 0x22c: "camDir.y",
    0x230: "camDir.z", 0x234: "lightDir.x", 0x238: "lightDir.y", 0x23c: "lightDir.z", 0x240: "v240.x",
    0x244: "v240.y", 0x248: "v240.z", 0x24c: "v24c.x", 0x250: "v24c.y", 0x254: "v24c.z", 0x258: "f258",
    0x25c: "f25c", 0x260: "f260", 0x264: "f264", 0x268: "i268", 0x26c: "state", 0x270: "text",
    0x370: "v370.x", 0x374: "v370.y", 0x378: "v370.z", 0x37c: "v37c.x", 0x380: "v37c.y", 0x384: "v37c.z",
    0x388: "f388", 0x38c: "f38c", 0x390: "f390", 0x394: "f394", 0x398: "b398", 0x399: "b399",
    0x39a: "b39a", 0x39c: "i39c", 0x3a0: "f3a0", 0x3a4: "b3a4", 0x3a5: "b3a5", 0x3a6: "b3a6",
    0x3a7: "b3a7", 0x3a8: "b3a8", 0x3ac: "i3ac", 0x3b0: "i3b0", 0x3b4: "i3b4", 0x3b8: "i3b8",
    0x3bc: "f3bc", 0x3c0: "team[0]", 0x3c4: "team[1]", 0x3c8: "team[2]", 0x3cc: "team[3]",
    0x3d0: "team[4]", 0x3d4: "team[5]", 0x3d8: "i3d8", 0x3dc: "i3dc", 0x3e0: "f3e0", 0x3e4: "slot[0]",
    0x3e8: "slot[1]", 0x3ec: "slot[2]", 0x3f0: "slot[3]", 0x3f4: "slot[4]", 0x3f8: "slot[5]",
    0x3fc: "i3fc", 0x400: "f400", 0x404: "i404", 0x408: "i408", 0x40c: "i40c", 0x410: "f410",
    0x414: "b414", 0x418: "i418", 0x41c: "f41c",
}
for i in range(6):
    GAME[0xd8 + 4 * i] = f"players[{i}]"
PLAYER = {
    0x4: "model", 0x4c: "keys", 0x150: "charId", 0x154: "b154", 0x158: "pos.x", 0x15c: "pos.y",
    0x160: "pos.z", 0x164: "yaw", 0x168: "stat168", 0x16c: "stat16c", 0x170: "stat170", 0x174: "stat174",
    0x178: "stat178", 0x17c: "stat17c", 0x180: "stat180", 0x184: "keyChanged", 0x188: "curKey",
    0x18c: "f18c", 0x190: "i190", 0x194: "animTime", 0x198: "f198",
}


def field(base, off):
    if base == "this":
        return "this->" + GAME.get(off, f"+0x{off:x}")
    if base.startswith("P(") or "players[" in base:
        return f"{base}->" + PLAYER.get(off, f"+0x{off:x}")
    return f"{base}[+0x{off:x}]"


def parse_off(s):
    s = s.strip()
    neg = s.startswith("-")
    v = int(s.lstrip("-"), 16)
    return -v if neg else v


class State:
    def __init__(self):
        self.reg = {}
        self.fpu = []
        self.pushes = []
        self.locals = {}
        self.ret = None

    def mem(self, inner, kind="dword", write=False):
        inner = inner.strip()
        m = re.match(r"EBP \+ (-?0x[0-9a-f]+)$", inner)
        if m:
            off = parse_off(m.group(1))
            if off < 0 or off > 0xff000000:
                o = (off & 0xffffffff) - (1 << 32) if off > 0x7fffffff else off
                key = f"local_{-o:x}"
                return key if write else self.locals.get(key, key)
            return f"arg{(off - 8) // 4}"
        m = re.match(r"(E[A-Z]{2}) \+ (E[A-Z]{2})\*0x4 \+ (0x[0-9a-f]+)$", inner)
        if m:
            base, idx, off = self.reg.get(m.group(1), m.group(1)), self.reg.get(m.group(2), m.group(2)), int(m.group(3), 16)
            if base == "this" and off == 0xd8:
                return f"P({idx})"
            if base == "this" and off == 0x3e4:
                return f"this->slot[{idx}]"
            if base == "this" and off == 0x3c0:
                return f"this->team[{idx}]"
            return f"{base}[{idx}*4+0x{off:x}]"
        m = re.match(r"(E[A-Z]{2}) \+ (E[A-Z]{2})\*0x1 \+ (0x[0-9a-f]+)$", inner)
        if m:
            return f"{self.reg.get(m.group(1), m.group(1))}[{self.reg.get(m.group(2), m.group(2))}+0x{m.group(3)[2:]}]"
        m = re.match(r"(E[A-Z]{2}) \+ (-?0x[0-9a-f]+)$", inner)
        if m:
            return field(self.reg.get(m.group(1), m.group(1)), parse_off(m.group(2)))
        m = re.match(r"(E[A-Z]{2})$", inner)
        if m:
            return f"*{self.reg.get(m.group(1), m.group(1))}"
        m = re.match(r"0x([0-9a-f]+)$", inner)
        if m:
            return f"g_{m.group(1)}"
        return f"[{inner}]"


def const_of(rest):
    m = re.search(r"\{([^}]*)\}", rest)
    return m.group(1) if m else None


def operand(st, op, write=False):
    m = re.match(r"(float|double|dword|word|byte) ptr \[([^\]]+)\]", op)
    if m:
        c = const_of(op)
        if c is not None and re.match(r"0x00?4[45]", m.group(2)):
            return c + ("f" if m.group(1) == "float" else "")
        return st.mem(m.group(2), m.group(1), write)
    if op.startswith("0x") or re.match(r"-?\d", op):
        v = int(op, 16) if op.startswith("0x") or op.startswith("-0x") else int(op)
        return str(v)
    return st.reg.get(op, op)


def main():
    path = sys.argv[1]
    lo = int(sys.argv[sys.argv.index("--from") + 1], 16) if "--from" in sys.argv else 0
    hi = int(sys.argv[sys.argv.index("--to") + 1], 16) if "--to" in sys.argv else 1 << 40
    st = State()
    out = []
    cond = []
    for ln in open(path, encoding="utf-8"):
        m = re.match(r"([0-9a-f]{8})\s+(\S+)\s*(.*)", ln.rstrip("\n"))
        if not m:
            continue
        addr, mn, rest = int(m.group(1), 16), m.group(2), m.group(3)
        if addr < lo or addr > hi:
            continue
        clean = re.sub(r"\s*;.*$", "", rest)
        ops = [o.strip() for o in re.split(r",(?![^\[]*\])", clean)] if rest else []
        A = f"{addr:08x}"
        try:
            if mn == "MOV" and ops[0].startswith("E") and len(ops[0]) == 3:
                st.reg[ops[0]] = operand(st, rest.split(",", 1)[1].strip() if "ptr" in rest else ops[1])
                if "[EBP + -0x8]" in rest:
                    st.reg[ops[0]] = "this"
            elif mn == "MOV" and "ptr [" in ops[0]:
                dst = operand(st, ops[0], True)
                src = operand(st, rest.split(",", 1)[1].strip())
                c = const_of(rest)
                out.append(f"{A}  {dst} = {src}")
                if dst.startswith("local_"):
                    st.locals[dst] = src
            elif mn == "LEA":
                inner = re.search(r"\[([^\]]+)\]", rest).group(1)
                st.reg[ops[0]] = "&" + st.mem(inner)
            elif mn == "ADD" and ops[0] in st.reg and re.match(r"0x[0-9a-f]+$", ops[1]):
                base = st.reg[ops[0]]
                st.reg[ops[0]] = f"&{field(base, int(ops[1], 16))}" if base == "this" else f"({base} + {ops[1]})"
            elif mn in ("SHL", "OR", "AND", "SUB", "ADD", "IMUL", "XOR", "SAR", "SHR", "NEG", "INC", "DEC"):
                if mn == "XOR" and ops[0] == ops[1]:
                    st.reg[ops[0]] = "0"
                elif mn == "NEG":
                    st.reg[ops[0]] = f"-({st.reg.get(ops[0], ops[0])})"
                elif len(ops) >= 2:
                    sym = {"SHL": "<<", "OR": "|", "AND": "&", "SUB": "-", "ADD": "+", "IMUL": "*", "XOR": "^", "SAR": ">>", "SHR": ">>"}[mn]
                    rhs = operand(st, ops[1]) if len(ops) == 2 else f"{operand(st, ops[1])} * {ops[2]}"
                    if mn == "IMUL" and len(ops) == 3:
                        st.reg[ops[0]] = f"({operand(st, ops[1])} * {ops[2]})"
                    elif ops[0].startswith("E") and len(ops[0]) == 3:
                        st.reg[ops[0]] = f"({st.reg.get(ops[0], ops[0])} {sym} {rhs})"
                    elif ops[0] in ("AH", "AL"):
                        st.reg["EAX"] = f"({st.reg.get('EAX', 'EAX')} {sym}{ops[0]} {rhs})"
            elif mn == "PUSH":
                if ops[0] == "EBP":
                    continue
                c = const_of(rest)
                st.pushes.append(c if c and c.startswith(("'", '"')) else operand(st, ops[0]))
            elif mn == "FLD" or mn == "FILD":
                st.fpu.append(operand(st, ops[0]) if mn == "FLD" else f"(float){operand(st, ops[0])}")
            elif mn == "FLDZ":
                st.fpu.append("0")
            elif mn == "FLD1":
                st.fpu.append("1")
            elif mn in ("FADD", "FSUB", "FMUL", "FDIV", "FSUBR", "FDIVR") and len(ops) == 1:
                a = st.fpu.pop()
                b = operand(st, ops[0])
                s = {"FADD": f"({a} + {b})", "FSUB": f"({a} - {b})", "FMUL": f"({a} * {b})", "FDIV": f"({a} / {b})",
                     "FSUBR": f"({b} - {a})", "FDIVR": f"({b} / {a})"}[mn]
                st.fpu.append(s)
            elif mn in ("FADDP", "FSUBP", "FMULP", "FDIVP", "FSUBRP", "FDIVRP"):
                a = st.fpu.pop()
                b = st.fpu.pop()
                s = {"FADDP": f"({b} + {a})", "FSUBP": f"({b} - {a})", "FMULP": f"({b} * {a})", "FDIVP": f"({b} / {a})",
                     "FSUBRP": f"({a} - {b})", "FDIVRP": f"({a} / {b})"}[mn]
                st.fpu.append(s)
            elif mn == "FCHS":
                st.fpu.append(f"-{st.fpu.pop()}")
            elif mn in ("FSTP", "FST"):
                v = st.fpu[-1] if st.fpu else "?"
                if mn == "FSTP" and st.fpu:
                    st.fpu.pop()
                if "[ESP]" in rest:
                    st.pushes[-1:] = [v]
                else:
                    dst = operand(st, ops[0], True)
                    out.append(f"{A}  {dst} = {v}")
                    if dst.startswith("local_"):
                        st.locals[dst] = v
            elif mn in ("FCOMP", "FCOM", "FCOMPP"):
                a = st.fpu.pop() if st.fpu else "?"
                b = operand(st, ops[0]) if ops else (st.fpu.pop() if st.fpu else "?")
                cond.append((a, b))
            elif mn == "TEST" and ops[0] == "AH" and cond:
                a, b = cond[-1]
                mask = int(ops[1], 16)
                nxt = None
                cond[-1] = (a, b, mask)
            elif mn in ("JZ", "JNZ", "JP", "JNP") and cond and len(cond[-1]) == 3 and cond[-1][2] != "int":
                a, b, mask = cond.pop()
                # FCOMP sets C0 (0x1) if a < b, C3 (0x40) if equal.
                rel = {(0x1, "JZ"): ">=", (0x1, "JNZ"): "<", (0x41, "JZ"): ">", (0x41, "JNZ"): "<=",
                       (0x40, "JZ"): "!=", (0x40, "JNZ"): "=="}.get((mask, mn), f"?{mask:x}{mn}")
                out.append(f"{A}  jump to {ops[0]} if {a} {rel} {b}")
            elif mn == "CMP":
                cond.append((operand(st, ops[0]), operand(st, ops[1]), "int"))
            elif mn in ("SETZ", "SETNZ", "SETG", "SETL", "SETGE", "SETLE") and cond and cond[-1][2] == "int":
                a, b, _ = cond.pop()
                rel = {"SETZ": "==", "SETNZ": "!=", "SETG": ">", "SETL": "<", "SETGE": ">=", "SETLE": "<="}[mn]
                st.reg["EAX"] = st.reg["ECX"] = st.reg["EDX"] = f"({a} {rel} {b})"
                out.append(f"{A}  flag = ({a} {rel} {b})")
            elif mn.startswith("J") and mn not in ("JMP",) and cond and len(cond[-1]) == 3 and cond[-1][2] == "int":
                a, b, _ = cond.pop()
                rel = {"JZ": "==", "JNZ": "!=", "JGE": ">=", "JG": ">", "JLE": "<=", "JL": "<", "JNC": ">=u", "JC": "<u",
                       "JA": ">u", "JBE": "<=u"}.get(mn, mn)
                out.append(f"{A}  jump to {ops[0]} if {a} {rel} {b}")
            elif mn == "CALL":
                target = rest.split(";")[-1].strip() if ";" in rest else rest
                args = list(reversed(st.pushes))
                if target in ("sinf", "cosf", "sqrtf", "acosf"):
                    a = st.pushes.pop() if st.pushes else "?"
                    st.fpu.append(f"{target}({a})")
                    continue
                if target == "__ftol":
                    st.reg["EAX"] = f"(int){st.fpu.pop() if st.fpu else '?'}"
                    continue
                if target == "rand":
                    st.reg["EAX"] = "rand()"
                    continue
                if target in ("Atan2",):
                    x = st.pushes.pop() if st.pushes else "?"
                    y = st.pushes.pop() if st.pushes else "?"
                    st.fpu.append(f"Atan2({x}, {y})")
                    continue
                this_arg = st.reg.get("ECX", "ECX")
                out.append(f"{A}  CALL {target}(" + ", ".join(args) + f")   [ECX={this_arg}]")
                st.pushes = []
                st.reg["EAX"] = f"ret_{target}"
                if target.endswith("Ctor") or "Vec3" in target:
                    pass
            elif mn in ("FSTSW", "FNSTSW", "SETZ", "SETNZ", "SETG", "SETL", "SETGE", "SETLE", "JMP", "RET", "POP", "MOVSD.REP"):
                if mn == "JMP":
                    out.append(f"{A}  goto {ops[0]}")
            else:
                pass
        except Exception as e:  # keep going on anything unexpected
            out.append(f"{A}  ?? {mn} {rest}  ({e})")
            st.fpu = []
    sys.stdout.reconfigure(encoding="utf-8")
    print("\n".join(out))


if __name__ == "__main__":
    main()
