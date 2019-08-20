# This script enumerates the exports for the input DLL, providing for each one the following triple [ordinal, name, start_RVA, range] 
# USAGE: 
# C:\Users\Simus\Desktop\DLLs IDB>"C:\Program Files\IDA 6.8\idaw.exe" -A -S"ReadFuncts.py <DLL_Path>" <DLL_Name>.idb_path

import idc
import idaapi
import idautils
import pefile
import json

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

idaapi.autoWait()

# Rebase to 0
image_base = idaapi.get_imagebase()
idc.rebase_program(-image_base, MSF_FIXONCE)

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

# Sort dictionary
sorted_exp = []
for k in dict_exp.keys():
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