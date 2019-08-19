#Script to parse Pyrebox DB and produce a configuration file with APIs prototype

import sqlite3
import unicodedata

#Global variables
typedef_list = [] #Used to unwrap typedef chain in DB
F = open("Pyrebox_libcalls_corr.cpp","wb")

# CONSTANTS IN THE DATABASE

NKT_DBFUNDTYPE_SignedByte = 1
NKT_DBFUNDTYPE_UnsignedByte = 2
NKT_DBFUNDTYPE_SignedWord = 3
NKT_DBFUNDTYPE_UnsignedWord = 4
NKT_DBFUNDTYPE_SignedDoubleWord = 5
NKT_DBFUNDTYPE_UnsignedDoubleWord = 6
NKT_DBFUNDTYPE_SignedQuadWord = 7
NKT_DBFUNDTYPE_UnsignedQuadWord = 8
NKT_DBFUNDTYPE_Float = 9
NKT_DBFUNDTYPE_Double = 10
NKT_DBFUNDTYPE_LongDouble = 11
NKT_DBFUNDTYPE_Void = 12
NKT_DBFUNDTYPE_AnsiChar = 13
NKT_DBFUNDTYPE_WideChar = 14

NKT_DBFUNDTYPE_MIN = 1
NKT_DBFUNDTYPE_MAX = 14

NKT_DBOBJCLASS_Fundamental = 0
NKT_DBOBJCLASS_Struct = 1
NKT_DBOBJCLASS_Union = 2
NKT_DBOBJCLASS_Typedef = 3
NKT_DBOBJCLASS_Array = 4
NKT_DBOBJCLASS_Pointer = 5
NKT_DBOBJCLASS_Reference = 6
NKT_DBOBJCLASS_Enumeration = 7

# From 8 to 14, there are no arguments in the database
NKT_DBOBJCLASS_Function = 8
NKT_DBOBJCLASS_FunctionType = 9
NKT_DBOBJCLASS_ClassConstructor = 10
NKT_DBOBJCLASS_ClassDestructor = 11
NKT_DBOBJCLASS_ClassOperatorMethod = 12
NKT_DBOBJCLASS_ClassMethod = 13
NKT_DBOBJCLASS_ClassConverter = 14

'''
CONSTANTS IN C++ HEADER

NKT_DBFUNDTYPE_SignedByte = 1
NKT_DBFUNDTYPE_UnsignedByte = 2
NKT_DBFUNDTYPE_SignedWord = 3
NKT_DBFUNDTYPE_UnsignedWord = 4
NKT_DBFUNDTYPE_SignedDoubleWord = 5
NKT_DBFUNDTYPE_UnsignedDoubleWord = 6
NKT_DBFUNDTYPE_SignedQuadWord = 7
NKT_DBFUNDTYPE_UnsignedQuadWord = 8
NKT_DBFUNDTYPE_Float = 9
NKT_DBFUNDTYPE_Double = 10
NKT_DBFUNDTYPE_LongDouble = 11
NKT_DBFUNDTYPE_Void = 12
NKT_DBFUNDTYPE_AnsiChar = 13
NKT_DBFUNDTYPE_WideChar = 14

NKT_DBOBJCLASS_Struct = 15
NKT_DBOBJCLASS_Union = 16
NKT_DBOBJCLASS_Typedef = 17
NKT_DBOBJCLASS_Array = 18
NKT_DBOBJCLASS_Reference = 19
NKT_DBOBJCLASS_Enumeration = 20

NKT_DBOBJCLASS_Pointer = 32
NKT_DBOBJCLASS_PointerPointer = 64
'''


NKT_DBOBJCLASS_MASK = 0x0000FFFF
NKT_DBOBJCLASSFLAG_IsConstant = 0x00010000
NKT_DBOBJCLASSFLAG_IsVolatile = 0x00020000
NKT_DBOBJFLAG_PubliCMember = 0x00000000
NKT_DBOBJFLAG_ProtectedMember = 0x00000001
NKT_DBOBJFLAG_PrivateMember = 0x00000002
NKT_DBOBJFLAG_MEMBER_MASK = 0x00000003
NKT_DBOBJFLAG_StdCall = 0x00000000
NKT_DBOBJFLAG_CDecl = 0x00000004
NKT_DBOBJFLAG_FastCall = 0x00000008
NKT_DBOBJFLAG_ThisCall = 0x0000000C
NKT_DBOBJFLAG_CALLINGTYPE_MASK = 0x0000000C
NKT_DBOBJFLAG_IsExternal = 0x00000010
NKT_DBOBJFLAG_IsDllImport = 0x00000020
NKT_DBOBJFLAG_IsPure = 0x00000040
NKT_DBOBJFLAG_Throw = 0x00000080
NKT_DBOBJFLAG_NoThrow = 0x00000100
NKT_DBOBJFLAG_NoReturn = 0x00000200
NKT_DBOBJFLAG_IsConst = 0x00000400
NKT_DBOBJFLAG_Deprecated = 0x00000800
NKT_DBOBJFLAG_NonNull = 0x00001000
NKT_DBOBJFLAG_Malloc = 0x00002000
NKT_DBOBJFLAG_IsDllExport = 0x00004000
NKT_DBOBJFLAG_Format = 0x00008000
NKT_DBOBJFLAG_FUNCTIONFLAGS_MASK = 0x0000FFF0
NKT_DBOBJFLAG_HasConstructor = 0x00100000
NKT_DBOBJFLAG_HasDestructor = 0x00200000
NKT_DBOBJFLAG_HasVirtual = 0x00400000
NKT_DBOBJFLAG_HasInheritance = 0x00800000
NKT_DBOBJFLAG_STRUCTUNION_MASK = 0x00F00000

# =============================================================== UTILS ==

# Generates enumeration entry
def generate_enumeration(
                 arg_name,
                 typ,
                 name,
                 size,
                 is_out,
                 arg_num):

	arg=[]

	arg.append(arg_num)

	# Normalize arg name
	if type(arg_name) is unicode:
		arg_name_norm = unicodedata.normalize(
			'NFKD', arg_name).encode('ascii', 'ignore')
	else:
		arg_name_norm = arg_name

	arg.append(arg_name_norm)
	
	arg.append("NKT_DBOBJCLASS_Enumeration")

	# Normalize name
	if type(name) is unicode:
		enum_name_norm = unicodedata.normalize(
			'NFKD', name).encode('ascii', 'ignore')
	else:
		enum_name_norm = name

	arg.append(enum_name_norm)

	arg.append(size)

	if(is_out):
		arg.append("INOUT")
	else:
		arg.append("IN")

	return arg

#Generates reference entry
def generate_reference(
                 arg_name,
                 typ,
                 size,
                 align,
                 deref_type_id,
                 deref_type_class,
                 is_out,
                 arg_num):

	# Generate referenced arg
	arg = generate_arg("",deref_type_id,deref_type_class,is_out, arg_num, True)
	
	if (arg != None):

		# Normalize name
		if type(arg_name) is unicode:
		    arg_name_norm = unicodedata.normalize(
		        'NFKD', arg_name).encode('ascii', 'ignore')
		else:
		    arg_name_norm = arg_name

		# Update arg_name -> We want arg_name of pointer
		arg[1] = arg_name_norm

		# Update type class
		arg[2] = arg[2] + " | " + "NKT_DBOBJCLASS_Reference"

	return arg


#Generates pointer entry
def generate_pointer(
                 arg_name,
                 typ,
                 size,
                 align,
                 deref_type_id,
                 deref_type_class,
                 is_out,
                 arg_num):

	# Generates referenced arg
	arg = generate_arg("",deref_type_id,deref_type_class,is_out, arg_num, True)
	
	if (arg != None):

		# Normalize name
		if type(arg_name) is unicode:
		    arg_name_norm = unicodedata.normalize(
		        'NFKD', arg_name).encode('ascii', 'ignore')
		else:
		    arg_name_norm = arg_name

		# Update arg_name -> We want arg_name of pointer
		arg[1] = arg_name_norm

		# Update type class
		arg[2] = arg[2] + " | " + "NKT_DBOBJCLASS_Pointer"

	return arg


# Generates array entry
def generate_array(arg_name, typ, max, size, align, is_out, arg_num):
	arg=[]

	arg.append(arg_num)

	# Normalize name
    if type(arg_name) is unicode:
    	arg_name_norm = unicodedata.normalize('NFKD', arg_name).encode('ascii', 'ignore')
    else:
        arg_name_norm = arg_name

	arg.append(arg_name_norm)
	
	arg.append("NKT_DBOBJCLASS_Array")

	# Type name
	arg.append(None)

	arg.append(size)

	if(is_out):
		arg.append("INOUT")
	else:
		arg.append("IN")


	return arg


# Generates typedef entry
def generate_typedef(arg_name, typ, equivalent_arg, is_out, arg_num):
	arg=[]

	arg.append(arg_num)

	# Normalize name
	if type(arg_name) is unicode:
		arg_name_norm = unicodedata.normalize(
			'NFKD', arg_name).encode('ascii', 'ignore')
	else:
		arg_name_norm = arg_name

	arg.append(arg_name_norm)

	arg.append("NKT_DBOBJCLASS_Typedef")

	# Type name
	arg.append(None)
	
	# None added instead of size
	arg.append(equivalent_arg)

	if(is_out):
		arg.append("INOUT")
	else:
		arg.append("IN")
	

	return arg

#Generates struct/union entry
#->arg_name is name of argument
#->name is name of struct/union type
def generate_struct_or_union(arg_name, typ, name, size, align, flags, is_out, arg_num, struct_or_union):
	
	arg=[]

	arg.append(arg_num)

	# Normalize arg name
	if type(arg_name) is unicode:
		arg_name_norm = unicodedata.normalize(
			'NFKD', arg_name).encode('ascii', 'ignore')
	else:
		arg_name_norm = arg_name

	arg.append(arg_name_norm)

	# Differentiate struct from union
	if(struct_or_union == "struct"):
		arg.append("NKT_DBOBJCLASS_Struct")
	else:
		arg.append("NKT_DBOBJCLASS_Union")


	# Normalize arg type name
        if type(name) is unicode:
            arg_type_norm = unicodedata.normalize(
                'NFKD', name).encode('ascii', 'ignore')
        else:
            arg_type_norm = name

	arg.append(arg_type_norm)

	arg.append(size)

	if(is_out):
		arg.append("INOUT")
	else:
		arg.append("IN")
	

	return arg


# Generates basic argument entry
# No need to worry wrt 32 vs 64 bits
def generate_basic_arg(arg_name, typ, is_out, arg_num):
	
	arg=[]

	arg.append(arg_num)

	# Normalize name
        if type(arg_name) is unicode:
            arg_name_norm = unicodedata.normalize(
                'NFKD', arg_name).encode('ascii', 'ignore')
        else:
            arg_name_norm = arg_name

	arg.append(str(arg_name))

	if typ == NKT_DBFUNDTYPE_SignedByte:
	    arg_type = "NKT_DBFUNDTYPE_SignedByte"   
            size = 1
        elif typ == NKT_DBFUNDTYPE_UnsignedByte:
	    arg_type = "NKT_DBFUNDTYPE_UnsignedByte"
            size = 1
        elif typ == NKT_DBFUNDTYPE_SignedWord:
	    arg_type = "NKT_DBFUNDTYPE_SignedWord"
            size = 2
        elif typ == NKT_DBFUNDTYPE_UnsignedWord:
	    arg_type = "NKT_DBFUNDTYPE_UnsignedWord"
            size = 2
        elif typ == NKT_DBFUNDTYPE_SignedDoubleWord:
	    arg_type = "NKT_DBFUNDTYPE_SignedDoubleWord"
            size = 4
        elif typ == NKT_DBFUNDTYPE_UnsignedDoubleWord:
	    arg_type = "NKT_DBFUNDTYPE_UnsignedDoubleWord"
            size = 4
        elif typ == NKT_DBFUNDTYPE_SignedQuadWord:
            arg_type = "NKT_DBFUNDTYPE_SignedQuadWord"
	    size = 8
        elif typ == NKT_DBFUNDTYPE_UnsignedQuadWord:
	    arg_type = "NKT_DBFUNDTYPE_UnsignedQuadWord"
            size = 8
        elif typ == NKT_DBFUNDTYPE_Float:
	    arg_type = "NKT_DBFUNDTYPE_Float"
            size = 4
        elif typ == NKT_DBFUNDTYPE_Double:
	    arg_type = "NKT_DBFUNDTYPE_Double"
            size = 8
        elif typ == NKT_DBFUNDTYPE_LongDouble:
	    arg_type = "NKT_DBFUNDTYPE_LongDouble"
            size = 8
        elif typ == NKT_DBFUNDTYPE_Void:
	    arg_type = "NKT_DBFUNDTYPE_Void"
            size = 0
        elif typ == NKT_DBFUNDTYPE_AnsiChar:
	    arg_type = "NKT_DBFUNDTYPE_AnsiChar"
            size = 1
        elif typ == NKT_DBFUNDTYPE_WideChar:
	    arg_type = "NKT_DBFUNDTYPE_WideChar"
            size = 2

	arg.append(arg_type)

	#Type_name
	arg.append(None)
	
	arg.append(size)

	if(is_out):
		arg.append("INOUT")
	else:
		arg.append("IN")
	
	return arg


# Generates argument entry from db info
def generate_arg(    arg_name,
                     arg_typ,
                     arg_class,
                     is_out,
                     arg_num , first_call):


    # TODO - FIX - We need to correct the arg_class, because it seems that
    # the db has some errors
    while arg_class >= 65536:
        arg_class -= 65536

	#Differentiate between different argument classes
	#-- Fundamental/basic arg
    if arg_class == NKT_DBOBJCLASS_Fundamental:
        return generate_basic_arg(arg_name,
                                 arg_typ,
                                 is_out,
                                 arg_num)

	#-- Struct	
    elif arg_class == NKT_DBOBJCLASS_Struct:
            
		# Fetch struct info from db
		c.execute("select Id,Name,Size,Align,Flags from Structs where Id = %d" % (arg_typ))
		res = c.fetchone()
		
		if res is not None:
			new_struct = []

			# Generate struct arg entry                
			new_struct = generate_struct_or_union(arg_name,
									res[0],
									res[1],
									res[2],
									res[3],
									res[4],
									is_out,
									arg_num, "struct")
		
		# Code for fecting struct fields -> Maybe use to build struct definitions?
		'''
                c.execute("select StructId,Id,Name,Offset,Bits,Flags,TypeId,TypeClass" +
                                   " from StructsMembers where StructId = %d order by Id ASC" % (arg_typ))
                sub_fields = c.fetchall()
		
		#Header.write("typedef _"+str(arg_name)+" { \n")
		
                for sub_field in sub_fields:

                	# Skip incorrect blank fields in the db
                        if sub_field[3] == 0 and sub_field[1] > 1:
                            continue

                        #offset = sub_field[3] / 8

			#Print struct somewhere -> Just two structs, do it manually
			#new_struct.append(sub_field[2])
			#new_struct.append(sub_field[6])
			#new_struct.append(sub_field[7])

			#field = generate_arg(sub_field[2], sub_field[6], sub_field[7], is_out, arg_num, True)
			#if(field != None):
			#	F.write("W:: "+str(field[1]))

                        #new_struct.add_field(offset,
                        #                     self.generate_arg(sub_field[2],
                        #                                       sub_field[6],
                        #                                       sub_field[7],
                        #                                       is_out, addr=addr +
                        #                                       offset,
                        #                                       val=None,
                        #                                       arg_num=arg_num))
                #else:
                    
		   #mwmon.printer("Unsupported type: A struct has been returned as" +
                   #               "return value (EAX/RAX), or as register parameter (RCX/RDX/R8/R9).")
                
		'''
			return new_struct
		else:
			return None
	
	# -- Union
	elif arg_class == NKT_DBOBJCLASS_Union:
		
		# Fetch union info from db
		c.execute("select Id,Name,Size,Align,Flags from Unions where Id = %d" % (arg_typ))
			res = c.fetchone()
		
		if res is not None:
			# Generate union arg entry                
			new_union = generate_struct_or_union(arg_name,
										res[0],
										res[1],
										res[2],
										res[3],
										res[4],
										is_out,
										arg_num, "union")

		# Code for fecting union fields -> Maybe use to build union definitions?
		'''
                if addr is not None:
                    self.c.execute("select UnionId,Id,Name,Offset,Bits,Flags,TypeId,TypeClass " +
                                   "from UnionsMembers where UnionId =  %d order by Id ASC" % (arg_typ))
                    sub_fields = self.c.fetchall()
                    for sub_field in sub_fields:
                        offset = sub_field[3] / 8
                        new_union.add_field(offset,
                                            self.generate_arg(sub_field[2],
                                                              sub_field[6],
                                                              sub_field[7],
                                                              is_out,
                                                              addr=addr +
                                                              offset,
                                                              arg_num=arg_num))
                else:
                    mwmon.printer("Unsupported type: A union has been returned as" +
                                  "return value (EAX/RAX), or as register parameter (RCX/RDX/R8/R9).")
		'''
			return new_union
		else:
			return None

	# -- typdef
	# Typedefs in DB are in a chain, where the last entry contains the ACTUAL type
	# --> So we just get last entry. Getting all of them would make the final file even bigger 
        elif arg_class == NKT_DBOBJCLASS_Typedef:
            
	    # Fetch typedef info from db	
	    c.execute("select Id,Name,TypeId,TypeClass from TypeDefs where Id = %d" % (arg_typ))
            res = c.fetchone()
            
	    if res is not None:

		# Generate typedef arg entry
                t = generate_typedef(arg_name,
                            res[0], None,
                            #generate_arg(res[1],
                            #                  res[2],
                            #                  res[3],
                            #                  is_out,
                            #                  arg_num),
                            is_out,
                            arg_num)

		
		# Recursive call to get equivalent definition of typedef
		# -> False to specify that the call is recursive
		gen_arg = generate_arg(res[1],res[2],res[3],is_out,arg_num, False)

		#Use global list which gets emptied everytime a typedef chain has been resolved		
		global typedef_list
		
		#Append generated equivalent definition		
		typedef_list.append(gen_arg)
		
		# We are back to the root of the recursion
		# --> We get the first element in typedef_list, which will contain the basic type
		if(first_call == True):

			# Get first non None element in typedef_list
			first = []
			for elem in typedef_list:
				if elem != None:
					first = elem
					break

			# If no equivalent definition found, return original one
			if(first == []):
				return t

			#print first

			#Update name of argument 
			first[1] = t[1]
			
			#Empty typedef list			
			typedef_list = []
			return first
						

                return t
            else:
                return None

        # -- Array
	elif arg_class == NKT_DBOBJCLASS_Array:
            
	    # Fetch array info from db
	    c.execute("select Id,Max,Size,Align,TypeId,TypeClass from Arrays where Id = %d" % (arg_typ))
        res = c.fetchone()
            
	    if res is not None:

			#Generate array arg entry                
			the_arr = generate_array(arg_name,
									res[0],
									res[1],
									res[2],
									res[3],
									is_out,
									arg_num)

		# Code for fecting array fields -> Maybe use to build array definitions?
		'''
                if addr is not None:
                    size_of_element = res[2] / res[1]
                    for i in range(0, res[1]):
                        the_arr.add_field(i,
                                          self.generate_arg("",
                                                            res[4],
                                                            res[5],
                                                            is_out,
                                                            addr=addr,
                                                            val=None,
                                                            arg_num=arg_num))
                        addr += size_of_element
                else:
                    mwmon.printer("Unsupported type: An array has been returned as" +
                                  "return value (EAX/RAX), or as register parameter (RCX/RDX/R8/R9).")
		'''                
			return the_arr
        else:
            return None
	
	# -- Pointer
    elif arg_class == NKT_DBOBJCLASS_Pointer:
            
	    # Fetch pointer info from db
	    c.execute("select Id,Size,Align,TypeId,TypeClass from Pointers where Id = %d" % (arg_typ))
            res = c.fetchone()
            
	    if res is not None:

			# Generate pointer arg entry                
			the_pointer = generate_pointer(arg_name,
										arg_typ,
										res[1],
										res[2],
										res[3],
										res[4],
										is_out,
										arg_num)
            return the_pointer
        else:
             return None

	# -- Reference
    elif arg_class == NKT_DBOBJCLASS_Reference:
            
	    # Fetch reference info from db
	    c.execute("select Id,Size,Align,TypeId,TypeClass from XReferences where Id = %d" % (arg_typ))
            res = c.fetchone()
            
	    if res is not None:

			# Generate reference entry from db                
			the_pointer = generate_reference(arg_name,
                                        arg_typ,
                                        res[1],
                                        res[2],
										res[3],
										res[4],
										is_out,
                                        arg_num)
            return the_pointer
        else:
            return None

	# -- Enumeration
    elif arg_class == NKT_DBOBJCLASS_Enumeration:
            
	    # Fetch enumeration info from db
	    c.execute("select Id,Name,Size,Align from Enumerations where Id = %d" % (arg_typ))
            res = c.fetchone()
            
	    if res is not None:

			# Generate enumeration entry from db                
			return generate_enumeration(arg_name,
									res[0],
									res[1],
									res[2],
									is_out,
									arg_num)
        else:
            return None


#Retrieves args data list from db and stores it in args
def populate_args(func_id,func_class,func_name,func_flags, func_ret_typeid, func_ret_class,args,c):

	if func_id is None:
		return []
        
	#Fetch funcargs data from db
	c.execute("select Id,Name,TypeId,TypeClass,IsOutput from FunctionsArgs where FuncId = %d order by Id ASC" % (func_id))
    params = c.fetchall()

	#Start arg count from 0
	arg_num = 0
	for param in params:
		# Set is_out based on IsOutput field
		is_out = False if param[4] == 0 else True

		# Obtain arg data
		arg = generate_arg(param[1], param[2], param[3], is_out, arg_num, True)

		# Increase argument count
		arg_num += 1
		
		# Append arg to args list
		args.append(arg)


#Beginning of array of libcall structs
F.write(str('libcall_info_t pyreboxdb_info[] = {\n'))

#Connect to db
conn = sqlite3.connect("deviare32_populated.sqlite")
c = conn.cursor()

# Get Functions from db
query = ("select * from Functions")
c.execute(query)
results = c.fetchall()

#For every function
for entry in results:
	
	#Fetch function data obtained from DB
	func_id = entry[0]
    func_class = entry[1]
	func_name = entry[2]
    func_flags = entry[3]
    func_ret_typeid =entry[4]
    func_ret_class = entry[5]
 
	print func_name

	#Write func struct to file only if name different from None
	if(func_name != None):
    		
		#Init function args	
		args = []
		#Init retval
		ret = None

		# Obtain retval data
		ret = generate_arg("Return value", func_ret_typeid, func_ret_class, True, -1, True)
		if ret!=None:
			#Add double pointers
			ret_type_list = ret[2].split('|')
			if len(ret_type_list) == 3:
				ret[2] = ret_type_list[0] + "| " + "NKT_DBOBJCLASS_PointerPointer"

			#Remove quotation marks from data
			conc = ",".join(map(str, ret))+"\n"
		
		#Obtain args data
		populate_args(func_id,func_class,func_name,func_flags, func_ret_typeid, func_ret_class, args, c)

		#Start printing struct
		F.write(str('\t{ ')+'"'+str(func_name)+'"'+str(',')+str(len(args))+str(',')+'\n')
		F.write(str('\t{ ')+'\n')

		#Print ret value
		if ret!=None:
			#F.write(conc)
			conc = conc.split(",")

			#Begin argument
			F.write(str('\t\t{'))
						
			#Arg_num
			if conc[0] and conc[0]!=str('None'):
				F.write(conc[0]+str(', '))
			else:
				F.write(str('0, '))

			#Arg_name
			if conc[1] and conc[1]!=str('None'):
				F.write('"'+conc[1]+'"'+str(', '))
			else:
				F.write(str('0, '))

			#Arg_type
			if conc[2] and conc[2]!=str('None'):
				F.write(conc[2]+str(', '))
			else:
				F.write(str('0, '))

			#Arg_type_name
			if conc[3] and conc[3]!=str('None'):
				F.write('"'+conc[3]+'"'+str(', '))
			else:
				F.write(str('0, '))

			#Size
			if conc[4] and conc[4]!=str('None'):
				F.write(conc[4]+str(', '))
			else:
				F.write(str('0, '))

			#InOut
			if conc[5] and conc[5]!=str('None'):
				F.write(conc[5].rstrip()+str(' '))
			else:
				F.write(str('0'))

			F.write(str('},\n'))	

		else:
			F.write(str('{ 0 },\n'))

		#Print args
		for arg in args:

			if arg!=None:

				#Add double pointers
				arg_type_list = arg[2].split('|')

				if len(arg_type_list) == 3:
					arg[2] = arg_type_list[0] + "| " + "NKT_DBOBJCLASS_PointerPointer"
				
				#Remove quotation marks
				conc = ",".join(map(str, arg))+"\n"
				conc = conc.split(",")

				#Begin argument
				F.write(str('\t\t{'))
						
				#Arg_num
				if conc[0] and conc[0]!=str('None'):
					F.write(conc[0]+str(', '))
				else:
					F.write(str('0, '))

				#Arg_name
				if conc[1] and conc[1]!=str('None'):
					F.write('"'+conc[1]+'"'+str(', '))
				else:
					F.write(str('0, '))

				#Arg_type
				if conc[2] and conc[2]!=str('None'):
					F.write(conc[2]+str(', '))
				else:
					F.write(str('0, '))

				#Arg_type_name
				if conc[3] and conc[3]!=str('None'):
					F.write('"'+conc[3]+'"'+str(', '))
				else:
					F.write(str('0, '))

				#Size
				if conc[4] and conc[4]!=str('None'):
					F.write(conc[4]+str(', '))
				else:
					F.write(str('0, '))

				#InOut
				if conc[5] and conc[5]!=str('None'):
					F.write(conc[5].rstrip()+str(' '))
				else:
					F.write(str('0'))

				F.write(str('},\n'))				
		

			else:
				F.write(str('{ 0 },\n'))	

		#Print end of args array and end of struct
		F.write(str('\t}')+'\n');
		F.write(str('\t},')+'\n');			

#End of outermost array
F.write(str('};'));
F.close()
