import subprocess
import sys

# Dependencies:
# - pefile
# - IDA Pro 6.8
# 

DLL_list = [
            "kernel32.dll",
            "kernelbase.dll",
            '''
            "user32.dll",
            "advapi32.dll",
            "bcrypt.dll",
            "crypt32.dll",
            "cryptbase.dll",
            "gdi32.dll",
            "ntdll.dll",
            "shell32.dll",
            '''
        ]

# Check Arguments to look for number of bits
if (len(sys.argv) != 2):
    print("Usage is: python GenerateExpRanges.py <32/64>")
    exit()

if(sys.argv[1]!="32" and sys.argv[1]!="64"):
    print("Usage is: python GenerateExpRanges.py <32/64>")
    exit()

# Retrieve Number of bits
bits = int(sys.argv[1])

if(bits == 32):
    Dlldir = "Program Files"
    ida = "idaw.exe"
    ext = ".idb"
else:
    Dlldir = "Program Files (x86)"
    ida = "idaw64.exe"
    ext = ".i64"

for DLL in DLL_list:
    # No difference between 32 and 64 bits as IDA, by default, loads the 32 bit version of a DLL even when running
    # in a 64 bit OS, as it's a 32 bit process.
    # TODO: Test in 64-bit OS
    
    subprocess.call(["C:\\"+Dlldir+"\\IDA 6.8\\"+ida, "-B", "-A", "C:\\Windows\\System32\\"+DLL, "-c", "-o"+DLL], shell=True)
    subprocess.call(["C:\\"+Dlldir+"\\IDA 6.8\\"+ida, "-A", "-SReadFuncts.py C:\\Windows\\System32\\"+DLL, (DLL.split(".")[0])+ext], shell=True)
    
    '''
    else:
        # Copy Dll from System32, otherwise IDA loads the 32 bit version
        #subprocess.call(["xcopy", "/Y", "C:\\Windows\\System32\\"+DLL], shell=True)
        subprocess.call(["C:\\"+Dlldir+"\\IDA 6.8\\"+ida, "-B", "-A", DLL, "-c", "-o"+DLL], shell=True)
        subprocess.call(["C:\\"+Dlldir+"\\IDA 6.8\\"+ida, "-A", "-SReadFuncts.py "+DLL, (DLL.split(".")[0])+ext], shell=True)
    '''