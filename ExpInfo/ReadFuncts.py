# This script enumerates the exports for the input DLL,
# providing for each one the following triple: 
# [ordinal, name, start_RVA, range
#  	
# 	end addresses: {
# 		"rets" -> addresses of rets, both from outer exp and internal stub
#		"jmps" ->
#			{
#				"import" -> imported exp name 
#               "imp_addr" -> address of import in idata
#               "jmp_addr" -> address where the jump takes place 
#               "dll" -> imported dll namwe
#			}
# 	}
#
# ] 
# USAGE: 
# CodaPinTracerFolder\ExpInfo >"C:\Program Files\IDA 6.8\idaw.exe" -A -S"ReadFuncts.py <DLL_Path>" <DLL_Name>.idb_path

import idc
import idaapi
import idautils
import pefile
import json
from capstone import *

# Globals for import related data structures
idata_range = ()
import_module_name = ""
imports_dic = {}

# Thanks Russia: http://redplait.blogspot.com/2010/09/apisetschemadll.html 
apisetschemadll_resolution = {
	"api-ms-win-core-console-l1-1-0" : ["kernel32.dll"],
	"api-ms-win-core-datetime-l1-1-0" : ["kernel32.dll"],
	"api-ms-win-core-debug-l1-1-0" : ["kernelbase.dll"],
	"api-ms-win-core-delayload-l1-1-0" : ["kernel32.dll"],
	"api-ms-win-core-errorhandling-l1-1-0" : ["kernel32.dll", "kernelbase.dll"],
	"api-ms-win-core-fibers-l1-1-0" : ["kernelbase.dll"],
	"api-ms-win-core-file-l1-1-0" : ["kernel32.dll", "kernelbase.dll"],
	"api-ms-win-core-handle-l1-1-0" : ["kernel32.dll", "kernelbase.dll"], 
	"api-ms-win-core-heap-l1-1-0" : ["kernelbase.dll"],
	"api-ms-win-core-io-l1-1-0" : ["kernel32.dll", "kernelbase.dll"],
	"api-ms-win-core-interlocked-l1-1-0" : ["kernelbase.dll"],
	"api-ms-win-core-libraryloader-l1-1-0" : ["kernelbase.dll"],
	"api-ms-win-core-localregistry-l1-1-0" : ["kernel32.dll"],
	"api-ms-win-core-localization-l1-1-0" : ["kernelbase.dll"],
	"api-ms-win-core-memory-l1-1-0" : ["kernelbase.dll"],
	"api-ms-win-core-misc-l1-1-0" : ["kernelbase.dll"],
	"api-ms-win-core-namedpipe-l1-1-0" : ["kernelbase.dll"],
	"api-ms-win-core-processenvironment-l1-1-0" : ["kernelbase.dll"],
	"api-ms-win-core-processthreads-l1-1-0" : ["kernel32.dll", "kernelbase.dll"],
	"api-ms-win-core-profile-l1-1-0" : ["kernelbase.dll"],
	"api-ms-win-core-rtlsupport-l1-1-0" : ["ntdll.dll"],
	"api-ms-win-core-string-l1-1-0" : ["kernelbase.dll"],
	"api-ms-win-core-synch-l1-1-0" : ["kernel32.dll", "kernelbase.dll"],
	"api-ms-win-core-sysinfo-l1-1-0" : ["kernelbase.dll"],
	"api-ms-win-core-threadpool-l1-1-0"	: ["kernelbase.dll"],
	"api-ms-win-core-ums-l1-1-0" : ["kernel32.dll"],
	"api-ms-win-core-util-l1-1-0" : ["kernel32.dll", "kernelbase.dll"],
	"api-ms-win-core-xstate-l1-1-0" : ["ntdll.dll"],
	"api-ms-win-security-base-l1-1-0" : ["kernelbase.dll"],
	"api-ms-win-security-lsalookup-l1-1-0" : ["sechost.dll"],
	"api-ms-win-security-sddl-l1-1-0" : ["sechost.dll"],
	"api-ms-win-service-core-l1-1-0" : ["sechost.dll"],
	"api-ms-win-service-management-l1-1-0" : ["sechost.dll"],
	"api-ms-win-service-management-l2-1-0" : ["sechost.dll"],
	"api-ms-win-service-winsvc-l1-1-0" : ["sechost.dll"]		
}

def imp_cb(ea, name, ordinal):

	# NOTE: ordinal seems broken, it's always 0

	imports_dic[ea] = [import_module_name, name]
	
	'''
	if not name:
		f.write("%08x: ord#%d\n" % (ea, ordinal))
	else:
		f.write(str(ea)+"\n")
		f.write("%08x: %s (ord#%d)\n" % (ea, name, ordinal))
	'''

	# True -> Continue enumeration
	# False -> Stop enumeration
	return True

# Get rets from inner function
def get_rets(bb, end_address):

	for func in idautils.Functions():	
		# Retrieve func
		curr_func = idaapi.get_func(func)
		
		# Get start address making sure to strip the trailing L
		if curr_func.startEA == bb.startEA:
			
			# This fails if the function is implemented outside (e.g. ntdll), so we need to catch the exception
			try:
				flowchart = idaapi.FlowChart(curr_func)
			except:
				#f.write("Implemented somewhere else\n")
				#f.write(name+"\n")
				return end_address

			for bb in flowchart:	
				
				# Examine BBs with no successors
				if not list(bb.succs()):
					#f.write("empty internal:"+hex(bb.startEA)+"\n")

					bb_len = int(bb.endEA - bb.startEA)
					if bb_len != 0:
						# Fetch BB rawbytes
						bb_bytes = idc.GetManyBytes(bb.startEA, bb.endEA - bb.startEA)
					else:
						bb_bytes = idc.GetManyBytes(bb.startEA, ItemSize(bb.startEA))

					# Init Capstone
					if get_number_of_bits() == 32:
						md = Cs(CS_ARCH_X86, CS_MODE_32)
						md.detail = True
					else:
						md = Cs(CS_ARCH_X86, CS_MODE_64)
						md.detail = True

					# Get last instruction of BB
					ins = list(md.disasm(bb_bytes, bb.startEA))[-1]

					# Dump ret address
					if ins.mnemonic == "ret":
						#f.write("INT -- 0x%x:\t%s\t%s\n" %(ins.address, ins.mnemonic, ins.op_str))
						end_address["rets"].append(ins.address)

	return end_address


# Get number of bits wrt architecture
def get_number_of_bits():
	info = idaapi.get_inf_structure()
	bits = 0
	if info.is_64bit():
		bits = 64
	else:
		bits = 32
	return bits

# Determine if we are dealing with a jmp from stub
def is_jmp_from_stub(bb, flowchart):
	
	preds = []

	# Fetch predecessor by iterating through the flowchart
	for elem in flowchart:
		for son in elem.succs():
			if son.startEA == bb.startEA:
				preds.append(elem)

	if len(preds) > 1:
		return False
	
	for bb in preds:
		
		bb_len = int(bb.endEA - bb.startEA)
		if bb_len != 0:
			# Fetch BB rawbytes
			bb_bytes = idc.GetManyBytes(bb.startEA, bb.endEA - bb.startEA)
		else:
			bb_bytes = idc.GetManyBytes(bb.startEA, ItemSize(bb.startEA))

		# Init Capstone
		if get_number_of_bits() == 32:
			md = Cs(CS_ARCH_X86, CS_MODE_32)
			md.detail = True
		else:
			md = Cs(CS_ARCH_X86, CS_MODE_64)
			md.detail = True

		# Get instructions of BB
		'''
		instr = md.disasm(bb_bytes, bb.startEA)
		len_bb = len(list(md.disasm(bb_bytes, bb.startEA)))

		ins = instr[0]
		f.write("TEST -- 0x%x:\t%s\t%s\n" %(ins.address, ins.mnemonic, ins.op_str))

		
		for i in range(len_bb):
			ins = instr[i]
			f.write("TEST -- 0x%x:\t%s\t%s\n" %(ins.address, ins.mnemonic, ins.op_str))
		'''
		i = 0
		for ins in md.disasm(bb_bytes, bb.startEA):
			
			mnem = ins.mnemonic

			if i == 0:
				if mnem != "mov" or ins.reg_name(ins.operands[0].reg) != "edi" or ins.reg_name(ins.operands[1].reg) != "edi":
					return False
			elif i == 1:
				if mnem != "push" or ins.reg_name(ins.operands[0].reg) != "ebp":
					return False
			elif i == 2:
				if mnem != "mov" or ins.reg_name(ins.operands[0].reg) != "ebp" or ins.reg_name(ins.operands[1].reg) != "esp":
					return False
			elif i == 3:
				if mnem != "pop" or ins.reg_name(ins.operands[0].reg) != "ebp":
					return False
			elif i == 4:
				if mnem != "jmp":
					return False
			
			i+=1

	return True


# Given an export, returns in a dic {rets, jmp_to_imps}
def fetch_end_addr(function, start_addr, name, f):
	
	end_address = {"rets" : [], "jmps_to_imps" : []}

	# This fails if the function is implemented outside (e.g. ntdll), so we need to catch the exception
	try:
		flowchart = idaapi.FlowChart(function)
	except:
		#f.write("Implemented somewhere else\n")
		#f.write(name+"\n")
		return (None, None)

	# Iterate over BBs
	num_bbs = len(list(flowchart))
	#f.write("name"+ name + "\n")
	for bb in flowchart:	

		#f.write(hex(bb.startEA)+"\n")
		#f.write(hex(bb.endEA)+"\n")

		# Examine BBs with no successors
		if not list(bb.succs()):
			#f.write("empty:"+hex(bb.startEA)+"\n")

			bb_len = int(bb.endEA - bb.startEA)
			if bb_len != 0:
				# Fetch BB rawbytes
				bb_bytes = idc.GetManyBytes(bb.startEA, bb.endEA - bb.startEA)
			else:
				bb_bytes = idc.GetManyBytes(bb.startEA, ItemSize(bb.startEA))

			# Init Capstone
			if get_number_of_bits() == 32:
				md = Cs(CS_ARCH_X86, CS_MODE_32)
				md.detail = True
			else:
				md = Cs(CS_ARCH_X86, CS_MODE_64)
				md.detail = True

			# Get last instruction of BB
			ins = list(md.disasm(bb_bytes, bb.startEA))[-1]

			# CASE 1: BB ends with RET N -> dump ret address
			if ins.mnemonic == "ret":
				#f.write("1 -- 0x%x:\t%s\t%s\n" %(ins.address, ins.mnemonic, ins.op_str))
				end_address["rets"].append(ins.address)

			# CASE 2: BB ends with jmp to import
			elif ins.mnemonic == "jmp":

				op = ins.operands[0]
				base_reg = op.mem.base
				disp = op.mem.disp

				if base_reg == 0 and disp >= idata_range[0] and disp <= idata_range[1]: 
					#f.write("2 -- 0x%x:\t%s\t%s\n" %(ins.address, ins.mnemonic, ins.op_str))
					imp_info = imports_dic[disp]
					imp_entry = {"jmp_addr": ins.address, "imp_addr": disp, "dll": imp_info[0], "import": imp_info[1] }

					end_address["jmps_to_imps"].append(imp_entry)

			# CASE 3: jmp from stub to real function
			elif is_jmp_from_stub(bb, flowchart):
				#f.write("3 -- 0x%x:\t%s\t%s\n" %(ins.address, ins.mnemonic, ins.op_str))
				end_address = get_rets(bb, end_address)

	return end_address

# Check Arguments to look for DLL_Name's presence
if (len(idc.ARGV) != 2):
	exit()

# Retrieve DLL_Name
DLL_Path = idc.ARGV[1]

# Retrieve PE
pe =  pefile.PE(DLL_Path)

# Retrieve DLL name
DLL_Name = DLL_Path.split("\\")[-1].split(".")[0]

# Open JSON File
f = open("exports\\"+DLL_Name+".json", 'w+')
f.write("{\n")
f.write('	"exports":')

# Init Dictionary index by export address
dict_exp = {}

# Iterate Exports
for exp in pe.DIRECTORY_ENTRY_EXPORT.symbols:
	
	# Retrieve Info
	rva = exp.address
	name = exp.name
	ordinal = exp.ordinal
	
	# Add entry to dict
	dict_exp[hex(rva)] = {"ordinal" : ordinal, "name" : name, "rva" : rva, "range" : 0, "end_addresses" : []}

idaapi.autoWait()

# Rebase to 0
image_base = idaapi.get_imagebase()
idc.rebase_program(-image_base, MSF_FIXONCE)

# Fetch idata range
idata_seg = idaapi.get_segm_by_name(".idata")
if idata_seg:
	idata_range = (idata_seg.startEA, idata_seg.endEA)
else:
	idata_range = (-1,-1)

# Build imports dictionary
nimps = idaapi.get_import_module_qty()

#f.write("Found %d import(s)...\n" % nimps)

for i in xrange(0, nimps):
	import_module_name = idaapi.get_import_module_name(i)
	if not import_module_name:
		#f.write("Failed to get import module name for #%d\n" % i)
		continue

	# Insert module resolution part here
	if import_module_name.lower() in apisetschemadll_resolution.keys():
		entry = apisetschemadll_resolution[import_module_name.lower()]
		if DLL_Name.lower() == entry[0]:
			import_module_name = entry[1].split(".")[0]
		else:
			import_module_name = entry[0].split(".")[0]

	idaapi.enum_import_names(i, imp_cb)

for func in idautils.Functions():
	
	# Retrieve func
	curr_func = idaapi.get_func(func)
	
	# Get start address making sure to strip the trailing L
	start_addr = hex(curr_func.startEA).rstrip('L')

	# Check if func is export
	exp_list = dict_exp.get(start_addr)
	if exp_list != None:

		# Retrieve end address
		end_addr = hex(curr_func.endEA).rstrip('L')
		
		# Convert back to int
		start_addr_int = int(start_addr, 16)
		end_addr_int = int(end_addr,16)
		
		# Compute range
		range = end_addr_int - start_addr_int

		# Update range in dictionary
		dict_exp[start_addr]["range"] = range

		# Get ret addresses and jmp addresses in a tuple (ret, jmp)
		end_addresses = fetch_end_addr(curr_func, start_addr, dict_exp[start_addr]["name"], f)

		# Update end_addresses
		dict_exp[start_addr]["end_addresses"] = end_addresses

# Sort dictionary
sorted_exp = []
for k in dict_exp.keys():
	if dict_exp[k]["name"] == None:
		 dict_exp[k]["name"] = "None"
	sorted_exp.append((k, dict_exp[k]["name"]))

sorted_exp.sort(key=lambda t: tuple(t[1].lower()))

exports = []
for exp in sorted_exp:
	exports.append(dict_exp[exp[0]])

# Dump everything to file
f.write(json.dumps(exports, indent = 4))
f.write("\n}")
f.close()
idc.Exit(0)