# This script enumerates the exports for the input DLL, providing for each one the following triple [ordinal, name, start_RVA, range] 
# USAGE: 
# C:\Users\Simus\Desktop\DLLs IDB>"C:\Program Files\IDA 6.8\idaw.exe" -A -S"ReadFuncts.py <DLL_Path>" <DLL_Name>.idb_path

import idc
import idaapi
import idautils
import pefile
import json
from capstone import *

idata_range = ()

# Get rets from inner function
def get_rets(bb, end_address):

	for func in idautils.Functions():	
		# Retrieve func
		curr_func = idaapi.get_func(func)
		
		# Get start address making sure to strip the trailing L
		if curr_func.startEA == bb.startEA:
			f.write("FOUND INNER\n")
			
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
					f.write("empty internal:"+hex(bb.startEA)+"\n")

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
						f.write("INT -- 0x%x:\t%s\t%s\n" %(ins.address, ins.mnemonic, ins.op_str))
						end_address[0].append(ins.address)

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
		
		f.write("PRED reached\n")
		
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

			f.write(str(i) + " +- 0x%x:\t%s\t%s\n" %(ins.address, ins.mnemonic, ins.op_str))
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


# Given an export, returns in a tuple (ret_addresses, jmp_addresses)
def fetch_end_addr(function, start_addr, name, f):
	
	end_address = [[],[]]

	# This fails if the function is implemented outside (e.g. ntdll), so we need to catch the exception
	try:
		flowchart = idaapi.FlowChart(function)
	except:
		#f.write("Implemented somewhere else\n")
		#f.write(name+"\n")
		return (None, None)

	# Iterate over BBs
	num_bbs = len(list(flowchart))
	f.write("name"+ name + "\n")
	for bb in flowchart:	

		#f.write(hex(bb.startEA)+"\n")
		#f.write(hex(bb.endEA)+"\n")

		'''
		if bb.startEA == function.startEA:
			root = True
			sp_offset_in = 0
			# Calculate par_in (export prototype + initial argument locations)
			par_in = calc_parin(bb.startEA, G.graph["args"])
		'''

		if bb.endEA-bb.startEA <= 0:
			# Incorrectly formed block due to internal
			f.write("Incorrect:"+name+", start addr:"+hex(bb.startEA)+", end addr:"+hex(bb.endEA)+"diff:"+hex(bb.endEA-bb.startEA)+"\n")
			f.write(str(list(bb.succs()))+"\n")
		
		# Examine BBs with no successors
		if not list(bb.succs()):
			f.write("empty:"+hex(bb.startEA)+"\n")

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
				f.write("1 -- 0x%x:\t%s\t%s\n" %(ins.address, ins.mnemonic, ins.op_str))
				end_address[0].append(ins.address)

			# CASE 2: BB ends with jmp to import
			elif ins.mnemonic == "jmp":

				op = ins.operands[0]
				base_reg = op.mem.base
				disp = op.mem.disp

				if base_reg == 0 and disp >= idata_range[0] and disp <= idata_range[1]: 
					f.write("2 -- 0x%x:\t%s\t%s\n" %(ins.address, ins.mnemonic, ins.op_str))
					f.write(hex(function.startEA)+"\n")
					f.write(hex(bb.startEA)+"\n")
					end_address[1].append(ins.address)

			# CASE 3: jmp from stub to real function
			elif is_jmp_from_stub(bb, flowchart):
				f.write("3 -- 0x%x:\t%s\t%s\n" %(ins.address, ins.mnemonic, ins.op_str))
				end_address = get_rets(bb, end_address) 
			
			'''
			else:
				f.write(str(num_bbs)+"\n")
				f.write("4 -- 0x%x:\t%s\t%s\n" %(ins.address, ins.mnemonic, ins.op_str))

			
			for ins in md.disasm(bb_bytes, bb.startEA):
				if ins.mnemonic == "ret":
					#f.write("0x%x:\t%s\t%s\n" %(ins.address, ins.mnemonic, ins.op_str))
					end_address.append(ins.address)

			# CASE 1: export well formed ends with ret N -> dump ret address
			if bb_len !=0 :

				for ins in md.disasm(bb_bytes, bb.startEA):
					if ins.mnemonic == "ret":
						#f.write("0x%x:\t%s\t%s\n" %(ins.address, ins.mnemonic, ins.op_str))
						end_address.append(ins.address)
			
			elif num_bbs == 2:

					for ins in md.disasm(bb_bytes, bb.startEA):
						if ins.mnemonic == "mov" or ins.mnemonic == "push" or ins.mnemonic == "call":
							# CASE 2: internal stub is called. Dump rets of internal stub
							f.write("2 -- 0x%x:\t%s\t%s\n" %(ins.address, ins.mnemonic, ins.op_str))
							#end_address.append(ins.address)
						elif ins.mnemonic == "jmp":
							# CASE 3: jump to external function. Fetch import from IAT
							f.write("3 -- 0x%x:\t%s\t%s\n" %(ins.address, ins.mnemonic, ins.op_str))
						else:
							f.write("4 -- 0x%x:\t%s\t%s\n" %(ins.address, ins.mnemonic, ins.op_str))
				
			
			#Iterate over instructions
			#f.write("BB start\n")
			for ins in md.disasm(bb_bytes, bb.startEA):
				f.write("0x%x:\t%s\t%s\n" %(ins.address, ins.mnemonic, ins.op_str))

			
			# For now rely on IDA for SP analysis
			# NB: without adding ins.size we get the stack offset at current instruction, like IDA
			
			sp_off = idc.GetSpd(ins.address)
			f.write("SP_OFFSET_IDA: "+str(sp_off)+"\n")

			# Map sp to ip
			rva_to_sp[hex(ins.address)] = sp_off

			
			# Check for presence of "push ebp"
			if ins.mnemonic == "push":
				operand = ins.operands[0]
				if operand.type == CS_OP_REG and register_consts[ins.reg_name(operand.reg)] == 5: 
					f.write("Scozzo su push ebp\n")
					if get_number_of_bits() == 32:
						G.graph["bp"] = sp_off - 4
					else:
						G.graph["bp"] = sp_off - 8

		# Add sp_offset from IDA
		rva_to_sp = compute_sp_offset(bb.startEA, bb.endEA, rva_to_sp, f, G)

		# List BB's successors
		for succ in bb.succs():
			#f.write("  -> %s\n" % format_bb(succ))
			G.add_edge(bb.id, succ.id)
	'''

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
	dict_exp[hex(rva)] = {"ordinal" : ordinal, "name" : name, "rva" : rva, "range" : 0}

'''
# Iterate Imports
for section in pe.sections:
    f.write(section.Name)
    f.write("\tVirtual Address: " + hex(section.VirtualAddress)+"\n")
    f.write("\tVirtual Size: " + hex(section.Misc_VirtualSize)+"\n")
    f.write("\tRaw Size: " + hex(section.SizeOfRawData)+"\n")

for entry in pe.DIRECTORY_ENTRY_IMPORT:
	dll_name = entry.dll.decode('utf-8')
	#if dll_name == "KERNELBASE.dll":
	f.write("[*]"+dll_name+"imports:\n")
	for func in entry.imports:
		f.write("\t%s at 0x%08x\n" % (func.name.decode('utf-8'), func.address))
'''

idaapi.autoWait()

# Rebase to 0
image_base = idaapi.get_imagebase()
idc.rebase_program(-image_base, MSF_FIXONCE)

# Fetch idata range
idata_seg = idaapi.get_segm_by_name(".idata")
idata_range = (idata_seg.startEA, idata_seg.endEA)

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
f.write(json.dumps(exports, indent = 4, sort_keys = True))
f.write("\n}")
f.close()
idc.Exit(0)