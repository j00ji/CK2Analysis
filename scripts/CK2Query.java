// Read-only, bounded queries of the saved analysis. Decompiler text is not source.
// @category CK2Research
import ghidra.app.script.GhidraScript;
import ghidra.app.decompiler.*;
import ghidra.program.model.address.*;
import ghidra.program.model.listing.*;
import ghidra.program.model.symbol.*;
import java.nio.file.*;
import java.io.*;
import java.util.*;
import java.util.regex.Pattern;
import com.google.gson.GsonBuilder;
import com.google.gson.JsonObject;
import com.google.gson.JsonParser;

public class CK2Query extends GhidraScript {
    private int decompileTimeoutSeconds = 90;
    private Map<String,Object> map(Object... pairs) {
        Map<String,Object> m=new LinkedHashMap<>();
        for(int i=0;i<pairs.length;i+=2) m.put((String)pairs[i],pairs[i+1]); return m;
    }
    private Object refs(Address address) {
        List<Object> rows=new ArrayList<>();
        ReferenceIterator it=currentProgram.getReferenceManager().getReferencesTo(address);
        while(it.hasNext() && rows.size()<100) {
            Reference r=it.next(); Function f=getFunctionContaining(r.getFromAddress());
            rows.add(map("from",r.getFromAddress().toString(),"to",r.getToAddress().toString(),"type",r.getReferenceType().toString(),"operand",r.getOperandIndex(),"function_entry",f==null?null:f.getEntryPoint().toString(),"function_name",f==null?null:f.getName(true)));
        }
        return map("items",rows,"truncated",it.hasNext(),"limit",100);
    }
    private Object function(Address address) throws Exception {
        Function f=getFunctionContaining(address);
        if(f==null) return map("requested_address",address.toString(),"error","No analyzed function contains this address");
        DecompInterface decompiler=new DecompInterface();
        try {
            if(!decompiler.openProgram(currentProgram)) throw new IOException(decompiler.getLastMessage());
            DecompileResults result=decompiler.decompileFunction(f,decompileTimeoutSeconds,monitor);
            List<Object> instructions=new ArrayList<>();
            InstructionIterator it=currentProgram.getListing().getInstructions(f.getBody(),true);
            while(it.hasNext() && instructions.size()<12000) {
                monitor.checkCancelled(); Instruction ins=it.next(); List<Object> references=new ArrayList<>();
                for(Reference r:ins.getReferencesFrom()) references.add(map("to",r.getToAddress().toString(),"type",r.getReferenceType().toString(),"operand",r.getOperandIndex()));
                instructions.add(map("address",ins.getAddress().toString(),"text",ins.toString(),"references",references));
            }
            return map("entry",f.getEntryPoint().toString(),"name",f.getName(true),"signature",f.getSignature().toString(),"body",f.getBody().toString(),"decompile_completed",result.decompileCompleted(),"decompile_error",result.getErrorMessage(),"pseudocode",result.decompileCompleted()?result.getDecompiledFunction().getC():null,"incoming_references",refs(f.getEntryPoint()),"instructions",instructions,"instructions_truncated",it.hasNext());
        } finally { decompiler.dispose(); }
    }
    public void run() throws Exception {
        String[] args=getScriptArgs();
        if(args.length!=2) throw new IllegalArgumentException("Expected request JSON path and output JSON path");
        JsonObject request;
        try(BufferedReader reader=Files.newBufferedReader(Paths.get(args[0]))) { request=JsonParser.parseReader(reader).getAsJsonObject(); }
        if(request.has("decompile_timeout_seconds")) {
            decompileTimeoutSeconds=request.get("decompile_timeout_seconds").getAsInt();
            if(decompileTimeoutSeconds<1 || decompileTimeoutSeconds>600)
                throw new IllegalArgumentException("Decompiler timeout must be 1..600 seconds");
        }
        String mode=request.get("mode").getAsString(),query=request.get("query").getAsString(); Object result;
        if(mode.equals("search")) {
            Pattern p=Pattern.compile(query,Pattern.CASE_INSENSITIVE); List<Object> matches=new ArrayList<>();
            DataIterator it=currentProgram.getListing().getDefinedData(true);
            while(it.hasNext() && matches.size()<250) {
                monitor.checkCancelled(); Data d=it.next();
                if(d.hasStringValue() && p.matcher(String.valueOf(d.getValue())).find()) matches.add(map("address",d.getAddress().toString(),"value",d.getValue(),"references",refs(d.getAddress())));
            }
            result=map("matches",matches,"scan_stopped_at_limit",it.hasNext(),"limit",250);
        } else {
            List<Object> results=new ArrayList<>();
            for(String item:query.split(",")) {
                String[] parts=item.trim().split(":");
                Address a=toAddr(parts[0]);
                if(mode.equals("function")) results.add(function(a));
                else if(mode.equals("xrefs")) results.add(map("address",a.toString(),"references",refs(a)));
                else if(mode.equals("listing")) {
                    int count=parts.length==2?Integer.parseInt(parts[1]):24;
                    if(count<1 || count>256) throw new IllegalArgumentException("Listing count must be 1..256");
                    List<Object> rows=new ArrayList<>(); InstructionIterator it=currentProgram.getListing().getInstructions(a,true);
                    while(it.hasNext() && rows.size()<count) {
                        Instruction ins=it.next(); List<Object> references=new ArrayList<>();
                        for(Reference r:ins.getReferencesFrom()) references.add(map("to",r.getToAddress().toString(),"type",r.getReferenceType().toString()));
                        rows.add(map("address",ins.getAddress().toString(),"text",ins.toString(),"references",references));
                    }
                    results.add(map("requested_address",a.toString(),"limit",count,"instructions",rows));
                }
                else throw new IllegalArgumentException("Unknown mode: "+mode);
            }
            result=results;
        }
        Map<String,Object> envelope=map("tool","CK2Query.java / Ghidra", "sha256",currentProgram.getExecutableSHA256(),"language",currentProgram.getLanguageID().toString(),"image_base",currentProgram.getImageBase().toString(),"mode",mode,"query",query,"result",result,"limitations","Static saved-database observations; unresolved indirect calls and missing analyzer references remain unknown. Pseudocode types/names may be inferred. Reference lists capped at 100 per address.");
        try(BufferedWriter w=Files.newBufferedWriter(Paths.get(args[1]))) { new GsonBuilder().setPrettyPrinting().create().toJson(envelope,w); }
        println("CK2 query complete: "+mode+" -> "+args[1]);
    }
}
