// Export analysis metadata without changing the program or executing target code.
// @category CK2Research
import ghidra.app.script.GhidraScript;
import ghidra.program.model.listing.*;
import ghidra.program.model.symbol.*;
import ghidra.program.model.mem.MemoryBlock;
import java.nio.file.*;
import java.io.*;
import java.util.*;
import com.google.gson.GsonBuilder;

public class CK2Inventory extends GhidraScript {
    private String clean(Object x) { return String.valueOf(x).replace("\t", "\\t").replace("\r", "\\r").replace("\n", "\\n"); }
    private BufferedWriter writer(Path dir, String name) throws IOException { return Files.newBufferedWriter(dir.resolve(name)); }
    private void row(BufferedWriter w, Object... cells) throws IOException {
        for (int i=0;i<cells.length;i++) { if(i>0) w.write('\t'); w.write(clean(cells[i])); } w.newLine();
    }
    public void run() throws Exception {
        Path out = Paths.get(getScriptArgs()[0]); Files.createDirectories(out);
        Map<String,Object> meta = new LinkedHashMap<>();
        meta.put("program", currentProgram.getName());
        meta.put("executable_path", currentProgram.getExecutablePath());
        meta.put("sha256", currentProgram.getExecutableSHA256());
        meta.put("language", currentProgram.getLanguageID().toString());
        meta.put("compiler_spec", currentProgram.getCompilerSpec().getCompilerSpecID().toString());
        meta.put("image_base", currentProgram.getImageBase().toString());
        meta.put("format", currentProgram.getExecutableFormat());
        meta.put("function_count", currentProgram.getFunctionManager().getFunctionCount());
        List<Object> blocks = new ArrayList<>();
        for(MemoryBlock b:currentProgram.getMemory().getBlocks()) {
            Map<String,Object> m = new LinkedHashMap<>();
            m.put("name",b.getName()); m.put("start",b.getStart().toString()); m.put("end",b.getEnd().toString());
            m.put("size",b.getSize()); m.put("read",b.isRead()); m.put("write",b.isWrite()); m.put("execute",b.isExecute()); m.put("initialized",b.isInitialized()); blocks.add(m);
        }
        meta.put("memory_blocks",blocks);
        try(BufferedWriter w=writer(out,"ghidra-functions.tsv")) {
            row(w,"entry","name","signature","body_bytes","thunk","external");
            for(Function f:currentProgram.getFunctionManager().getFunctions(true)) { monitor.checkCancelled(); row(w,f.getEntryPoint(),f.getName(true),f.getSignature(),f.getBody().getNumAddresses(),f.isThunk(),f.isExternal()); }
        }
        Map<String,Integer> sources = new TreeMap<>(); int symbolCount=0;
        try(BufferedWriter w=writer(out,"ghidra-symbols.tsv")) {
            row(w,"address","name","type","source","external");
            SymbolIterator it=currentProgram.getSymbolTable().getAllSymbols(true);
            while(it.hasNext()) { monitor.checkCancelled(); Symbol s=it.next(); symbolCount++; sources.merge(s.getSource().toString(),1,Integer::sum); row(w,s.getAddress(),s.getName(true),s.getSymbolType(),s.getSource(),s.isExternal()); }
        }
        meta.put("symbol_count",symbolCount); meta.put("symbol_source_counts",sources);
        int strings=0;
        try(BufferedWriter w=writer(out,"ghidra-strings.tsv")) {
            row(w,"address","length_bytes","datatype","value");
            DataIterator it=currentProgram.getListing().getDefinedData(true);
            while(it.hasNext()) { monitor.checkCancelled(); Data d=it.next(); if(d.hasStringValue()) { strings++; row(w,d.getAddress(),d.getLength(),d.getDataType().getName(),d.getValue()); } }
        }
        meta.put("defined_string_count",strings);
        try(BufferedWriter w=writer(out,"ghidra-overview.json")) { new GsonBuilder().setPrettyPrinting().create().toJson(meta,w); }
        println("CK2 inventory complete: functions="+meta.get("function_count")+", symbols="+symbolCount+", strings="+strings);
    }
}
