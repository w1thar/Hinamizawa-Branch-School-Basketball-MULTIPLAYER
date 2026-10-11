import ghidra.app.script.GhidraScript;
import ghidra.app.decompiler.*;
import ghidra.program.model.listing.*;
import ghidra.program.model.address.*;
import java.io.*;

public class DumpDecomp extends GhidraScript {
    @Override
    public void run() throws Exception {
        String[] args = getScriptArgs();
        File out = new File(args[0]);
        out.mkdirs();
        long lo = 0x401400L, hi = 0x433300L;
        DecompInterface di = new DecompInterface();
        DecompileOptions opts = new DecompileOptions();
        di.setOptions(opts);
        di.openProgram(currentProgram);
        PrintWriter index = new PrintWriter(new FileWriter(new File(out, "INDEX.txt")));
        FunctionIterator it = currentProgram.getFunctionManager().getFunctions(true);
        int n = 0;
        while (it.hasNext()) {
            Function f = it.next();
            long a = f.getEntryPoint().getOffset();
            if (a < lo || a >= hi || f.isThunk()) continue;
            DecompileResults r = di.decompileFunction(f, 120, monitor);
            String code = r.decompileCompleted() ? r.getDecompiledFunction().getC() : ("/* FAILED: " + r.getErrorMessage() + " */\n");
            String fn = String.format("%08x_%s.c", a, f.getName().replaceAll("[^A-Za-z0-9_]", "_"));
            try (PrintWriter pw = new PrintWriter(new FileWriter(new File(out, fn)))) {
                pw.println("// " + f.getName() + " @ " + f.getEntryPoint() + "  size=" + f.getBody().getNumAddresses());
                pw.print(code);
            }
            index.printf("%08x %6d %s%n", a, f.getBody().getNumAddresses(), f.getName());
            n++;
        }
        index.close();
        println("Dumped " + n + " functions");
    }
}
