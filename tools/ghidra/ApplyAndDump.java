// Applies recovered types (types.h) and symbols (symbols.txt) to basket_v101.exe, then dumps
// decompiled C for every game function. Run headless:
//   analyzeHeadless <projDir> <projName> -import basket_v101.exe -overwrite
//       -scriptPath tools/ghidra -postScript ApplyAndDump.java <toolsDir> <outDir>
//@category hbasket

import java.io.*;
import java.nio.charset.StandardCharsets;
import java.nio.file.*;
import java.util.*;

import ghidra.app.cmd.function.ApplyFunctionSignatureCmd;
import ghidra.app.decompiler.*;
import ghidra.app.script.GhidraScript;
import ghidra.app.util.cparser.C.CParser;
import ghidra.app.util.cparser.C.CParserUtils;
import ghidra.program.model.address.Address;
import ghidra.program.model.data.*;
import ghidra.program.model.listing.*;
import ghidra.program.model.listing.Function.FunctionUpdateType;
import ghidra.program.model.symbol.*;

public class ApplyAndDump extends GhidraScript {

    private static final long GAME_LO = 0x401400L, GAME_HI = 0x433300L;

    @Override
    public void run() throws Exception {
        String[] args = getScriptArgs();
        File toolsDir = new File(args[0]);
        File outDir = new File(args[1]);
        outDir.mkdirs();

        DataTypeManager dtm = currentProgram.getDataTypeManager();
        int tx = dtm.startTransaction("types");
        try {
            CParser parser = new CParser(dtm, true, null);
            try (InputStream in = new FileInputStream(new File(toolsDir, "types.h"))) {
                parser.parse(in);
            }
        } finally {
            dtm.endTransaction(tx, true);
        }

        SymbolTable st = currentProgram.getSymbolTable();
        List<String> lines = Files.readAllLines(new File(toolsDir, "symbols.txt").toPath(), StandardCharsets.UTF_8);
        for (String raw : lines) {
            String line = raw.trim();
            if (line.isEmpty() || line.startsWith("#")) continue;
            String[] p = line.split("\\s+", 4);
            Address a = toAddr(Long.parseLong(p[0], 16));
            String owner = p[1], name = p[2], sig = p.length > 3 ? p[3].trim() : "-";
            if (owner.equals("@")) {            // global data label: addr @ name [type]
                st.createLabel(a, name, SourceType.USER_DEFINED).setPrimary();
                if (!sig.equals("-")) {
                    DataType dt = parseType(sig);
                    if (dt != null) {
                        clearListing(a, a.add(dt.getLength() - 1));
                        createData(a, dt);
                    }
                }
                continue;
            }
            Function f = getFunctionAt(a);
            if (f == null) f = createFunction(a, null);
            if (f == null) { println("no function at " + a); continue; }

            Namespace ns = currentProgram.getGlobalNamespace();
            if (!owner.equals("-")) {
                Namespace existing = st.getNamespace(owner, ns);
                if (existing == null) existing = st.createClass(ns, owner, SourceType.USER_DEFINED);
                else if (!(existing instanceof GhidraClass)) existing = st.convertNamespaceToClass(existing);
                ns = existing;
            }
            f.setParentNamespace(ns);
            f.setName(name, SourceType.USER_DEFINED);

            if (!owner.equals("-")) {
                applyMethod(f, owner, name, sig);
            } else if (!sig.equals("-")) {
                FunctionDefinitionDataType def = parseSig(name, sig);
                if (def != null) {
                    new ApplyFunctionSignatureCmd(a, def, SourceType.USER_DEFINED).applyTo(currentProgram);
                }
            }
        }

        dump(outDir);
        dumpMathCalls(new File(outDir, "_mathcalls.txt"));
    }

    // MSVC's float math wrappers confuse the decompiler's dataflow; list the asm feeding each call.
    private void dumpMathCalls(File out) throws Exception {
        String[] names = {"cosf", "sinf", "sqrtf", "acosf"};
        Listing listing = currentProgram.getListing();
        try (PrintWriter pw = new PrintWriter(new FileWriter(out))) {
            for (String n : names) {
                for (Function target : getGlobalFunctions(n)) {
                    List<Address> entries = new ArrayList<>();
                    entries.add(target.getEntryPoint());
                    for (Address thunk : target.getFunctionThunkAddresses(true) == null
                            ? new Address[0] : target.getFunctionThunkAddresses(true)) entries.add(thunk);
                    for (Address e : entries) {
                        for (Reference r : getReferencesTo(e)) {
                            if (!r.getReferenceType().isCall()) continue;
                            Function caller = getFunctionContaining(r.getFromAddress());
                            if (caller == null || caller.isThunk()) continue;
                            StringBuilder sb = new StringBuilder();
                            Instruction ins = listing.getInstructionAt(r.getFromAddress());
                            Deque<String> prev = new ArrayDeque<>();
                            Instruction p = ins;
                            for (int i = 0; i < 14 && p != null; i++) {
                                p = p.getPrevious();
                                if (p != null) prev.addFirst("    " + p.getAddress() + "  " + p);
                            }
                            pw.printf("%s  %s -> %s%n", r.getFromAddress(), caller.getName(true), n);
                            for (String s : prev) pw.println(s);
                        }
                    }
                }
            }
        }
    }

    private DataType parseType(String t) throws Exception {
        FunctionDefinitionDataType def = parseSig("__probe", t + " (void)");
        return def == null ? null : def.getReturnType();
    }

    private FunctionDefinitionDataType parseSig(String name, String sig) throws Exception {
        int paren = sig.indexOf('(');
        String c = sig.substring(0, paren).trim() + " " + name + sig.substring(paren) + ";";
        FunctionDefinitionDataType def = CParserUtils.parseSignature((ghidra.app.services.DataTypeManagerService) null, currentProgram, c);
        if (def == null) println("could not parse: " + c);
        return def;
    }

    private void applyMethod(Function f, String owner, String name, String sig) throws Exception {
        List<ParameterImpl> params = new ArrayList<>();
        DataType ret;
        if (sig.equals("-")) {
            ret = f.getReturnType();
            Parameter[] old = f.getParameters();
            boolean wasThis = f.getCallingConventionName().equals("__thiscall");
            // __fastcall with ECX-only arg == thiscall with no extra args; drop the ECX param
            for (int i = wasThis ? 0 : 1; i < old.length; i++) {
                if (old[i].isAutoParameter()) continue;
                params.add(new ParameterImpl(old[i].getName(), old[i].getDataType(), currentProgram));
            }
        } else {
            FunctionDefinitionDataType def = parseSig(name, sig);
            if (def == null) return;
            ret = def.getReturnType();
            for (ParameterDefinition pd : def.getArguments()) {
                params.add(new ParameterImpl(pd.getName(), pd.getDataType(), currentProgram));
            }
        }
        f.updateFunction("__thiscall", new ReturnParameterImpl(ret, currentProgram), params,
                FunctionUpdateType.DYNAMIC_STORAGE_ALL_PARAMS, true, SourceType.USER_DEFINED);
    }

    private void dump(File outDir) throws Exception {
        DecompInterface di = new DecompInterface();
        di.setOptions(new DecompileOptions());
        di.openProgram(currentProgram);
        PrintWriter index = new PrintWriter(new FileWriter(new File(outDir, "INDEX.txt")));
        FunctionIterator it = currentProgram.getFunctionManager().getFunctions(true);
        int n = 0;
        while (it.hasNext()) {
            Function f = it.next();
            long a = f.getEntryPoint().getOffset();
            if (a < GAME_LO || a >= GAME_HI || f.isThunk()) continue;
            DecompileResults r = di.decompileFunction(f, 180, monitor);
            String code = r.decompileCompleted() ? r.getDecompiledFunction().getC()
                    : ("/* FAILED: " + r.getErrorMessage() + " */\n");
            String full = f.getName(true);
            String fn = String.format("%08x_%s.c", a, full.replaceAll("[^A-Za-z0-9_]", "_"));
            try (PrintWriter pw = new PrintWriter(new FileWriter(new File(outDir, fn)))) {
                pw.println("// " + full + " @ " + f.getEntryPoint() + "  size=" + f.getBody().getNumAddresses());
                pw.print(code);
            }
            index.printf("%08x %6d %s%n", a, f.getBody().getNumAddresses(), full);
            File asmDir = new File(outDir.getParentFile(), "ghidra_asm");
            asmDir.mkdirs();
            try (PrintWriter pw = new PrintWriter(new FileWriter(new File(asmDir, fn.replace(".c", ".asm"))))) {
                for (Instruction ins : currentProgram.getListing().getInstructions(f.getBody(), true)) {
                    String extra = "";
                    if (ins.getFlowType().isCall()) {
                        for (Address t : ins.getFlows()) {
                            Function cf = getFunctionAt(t);
                            if (cf != null && cf.isThunk()) cf = cf.getThunkedFunction(true);
                            if (cf != null) extra = "  ; " + cf.getName(true);
                        }
                    }
                    pw.println(ins.getAddress() + "  " + ins + extra);
                }
            }
            n++;
        }
        index.close();
        println("Dumped " + n + " functions");
    }
}
