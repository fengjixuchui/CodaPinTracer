# Arancino

## Dependencies

* [PIN 3.5](http://software.intel.com/sites/landingpage/pintool/downloads/pin-3.5-97503-gac534ca30-msvc-windows.zip) (porting by SEASON Lab)

* Visual Studio 2010 Express

* [Windows SDK 7.1](https://www.microsoft.com/en-us/download/details.aspx?id=8279)

* [Windows Driver Kit 7.1.0](https://www.microsoft.com/en-us/download/details.aspx?id=11800)

Visual Studio 2010 Express does not come with an x64 compiler, thus WinSDK is required. Also, the ATL libraries used by Scylla are not available in the Express release, so we require WinDDK as well.

If you are experiencing the following error message during the Windows SDK installation:

> Some Windows SDK components require the RTM .NET Framework 4. Setup detected a pre-release version of the .NET Framework 4. If you continue with Setup, these components will not be installed. [...]

Try this [workaround](https://stackoverflow.com/a/32322920) to trick the installer into thinking that a compatible version of .NET is installed. We used [Microsoft .NET Framework 4.6.2](https://www.microsoft.com/en-US/download/details.aspx?id=53344) in our tests.


## Compilation

**TODO the following instructions need to be updated to reflect the changes to paths**

In the following we assume that PIN is installed in **C:\\pin35**, while headers and libraries from Windows Driver Kit in **C:\\WinDDK\7600.16385.1**. If you chose different folders, please update the user-defined macros *PinFolder* and *WinDDK* from the **Locals** property page of the Visual Studio project(s).

1. Download the linked version of PIN

2. Unzip PIN to the root directory and rename the folder to **C:\\pin35**

3. Open the file **Arancino.sln** with Visual Studio 2010

4. Copy the folders **PINdemonium\\PINdemoniumDependencies** and **PINdemonium\\PINdemoniumResults** in **C:\\pin35\\**

5. Be sure that you are compiling in Release mode 

6. Compile the solution

7. **Optional** : Create a folder called **PINdemoniumPlugins** in **C:\\pin35\\**

```
  \---C
      \---pin
         \+---source
          |        
          |
          |
         \+---PINdemoniumResults
          |
          |
          |
          |
         \+---PINdemoniumDependencies 
          |             
          |                     \---config.json
          |         \---Yara
          |               \--yara_rules.yar
          |               \--rules
          |         \---Scylla
          |               \---ScyllaDLLRelease
          |                 \---ScyllaDLLx86.dll
          |               \---ScyllaDLLDebug
          |                 \---ScyllaDLLx86.dll
          |               \---ScyllaDumper.exe
          |
          |
          |
         \+---PINdemoniumPlugins
          |
          |
          |
          |
         \+---PINdemonium.dll
```

You will get a linking-time warning about ATL sections merged with different attributes. You can get rid of them by [changing the settings in atlbase.h](https://stackoverflow.com/questions/9559547/atl-library-warning-lnk4254-and-lnk4078), but they are [unlikely to cause any real problem](https://sourceforge.net/p/wtl/support-requests/2/).

## Usage

1. Run this command from the directory **C:\\pin35\\**

    ```
    pin.exe -t bluepill32.dll -antiev -antiev-sread -antiev-swrite -antiev-ins -- <path_to_the_exe_to_be_instrumented>
    ```
3. Put Arancino.json from Suppli folder to pin35 folder, create in **C:\\** a folder with name "Arancino" and inside this another folder called "results".

2. Check your result in **C:\\Arancino\\results\\< current_date_and_time >\**

## Debugger info for executable

1. Use following command line in order to enable debug:
    ```
    pin.exe -appdebug -t bluepill32.dll -debugger -antiev -antiev-sread -antiev-swrite -antiev-ins -- <path_to_the_exe_to_be_instrumented>
    ```

2. Open your debugger and use GDBServer(in attach mode) to attach pin, with localhost and port provided by Pin

For example with IDA:
Open IDA, start command line in order to put in pause pin, go on the debugger menu in IDA, attach, DBGServer debugger and insert localhost as address and port provided by pin as port!

## Debugger info for pintool

1. Use following command line in order to enable debug:
    ```
    pin.exe -pause_tool <num seconds> -t PINdemonium.dll -debugger -antiev -antiev-sread -antiev-swrite -antiev-ins -- <path_to_the_exe_to_be_instrumented>
    ```
2. Open your debugger and attach it to process with name equal to execuatable intrumented and not pin.exe

For example with IDA:
Open IDA, start command line in order to put in pause pin, go on the debugger menu in IDA, attach, localWindows debugger and select process with same name of executable intrumented. Wait until pin finishhis sleep and enjoy less anti debugger trick!

## Plugin System
PINdemonium provides a plugin system in order to extend the functionalities of the IAT fixing module.

To write your own plugin you have to:

1. Copy the sample project called **PINdemoniumPluginTemplate** located in **PINdemonium\\PINdemoniumPlugins\\**  wherever you want.

2. Change the name of the project with a name of your choice

3. Implement the function **runPlugin**

4. Compile the project

5. Copy the compiled Dll in **C:\\pin35\\PINdemoniumPlugins**

6. Launch PINdemonium with the flag **plugin** active followed by your plugin name (EX : -plugin PINdemoniumStolenAPIPlugin.dll)

Inside the template two helper function are provided:

- **readMemoryFromProcess** : this function reads the memory from the specified process, at the specified address and copies the read bytes into a buffer

- **writeMemoryToProcess** : this function writes the bytes contained inside a specified buffer into the process memory starting from a specified address

## Yara Rules
Every time a dump is taken yara is invoked and the rules contained inside **C:\pin\PINdemoniumDependencies\Yara\yara_rules.yar** are checked. The current rule comes from https://github.com/Yara-Rules/rules:
- **rules\evasion_packer**: Try to identify antiVM/antiDebug techniques and the presence of a known packer
- **rules\malware**: Try to identify the malware family of the unpacked stage
## Config
Config file located at C:\\pin35\\PINdemoniumDependencies\\config.json contains variables which allow to set the location of the outputs

## Results
Results are located at **C:\\pin35\\PINdemoniumResults\\< current_date_and_time >\\** and contains:
- **report_PINdemonium**: Json file which contains the most important information about the unpacking process;
- **log_PINdemonium.txt**: Log which contains useful debugging information

### Report Structure
```javascript
{  
  //Array containing information for each dump
   "dumps":[             
      {  
         "eip":4220719,            //EIP where the dump was taken     
         "start_address":4220439,  //start address of the Write-set block
         "end_address":4221043,    //end address of the Write-set block
         "heuristics":[
            { 
              //Yara Rules Heuristic
               "matched_rules":["ASProtectv12AlexeySolodovnikovh1"],
                "name":"YaraRulesHeuristic",
                "result":true
            },
            {  
              //Long Jump Heuristic
               "length":1801,         
               "name":"LongJumpHeuristic",
               "prev_ip":4218918,
               "result":true
            },
            {  
              //Entropy Heuristic
               "current_entropy":5.7026081085205078,    
               "difference_entropy_percentage":0.0014407391427084804,
               "name":"EntropyHeuristic",
               "result":false
            },
            {  
              //Jump Outer Section Heuristic
               "current_section":".data",     
               "name":"JumpOuterSectionHeuristic",
               "prev_section":".data",
               "result":false
            }
         ],
         "imports":[  
      //.... Imported functions....
         ],
         "intra_writeset":false,
         "number":0,
         "reconstructed_imports":0
       
      },
   ]
}
```
## Thanks

This work has been possible thanks to:

1. [NtQuery/Scylla](https://github.com/NtQuery/Scylla) 

2. [Yara-Rules/rules](https://github.com/Yara-Rules/rules)

3. [VirusTotal/yara](https://github.com/virustotal/yara)
