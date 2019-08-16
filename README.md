# CodaPinTracer

Lightweight WINAPI tracer based on Pin

## Dependencies

* [PIN 3.5](http://software.intel.com/sites/landingpage/pintool/downloads/pin-3.5-97503-gac534ca30-msvc-windows.zip) (porting by SEASON Lab)

* Visual Studio 2010 Express

* [Windows SDK 7.1](https://www.microsoft.com/en-us/download/details.aspx?id=8279)

Visual Studio 2010 Express does not come with an x64 compiler, thus WinSDK is required.

If you are experiencing the following error message during the Windows SDK installation:

> Some Windows SDK components require the RTM .NET Framework 4. Setup detected a pre-release version of the .NET Framework 4. If you continue with Setup, these components will not be installed. [...]

Try this [workaround](https://stackoverflow.com/a/32322920) to trick the installer into thinking that a compatible version of .NET is installed. We used [Microsoft .NET Framework 4.6.2](https://www.microsoft.com/en-US/download/details.aspx?id=53344) in our tests.


## Compilation

**TODO the following instructions need to be updated to reflect the changes to paths**

In the following we assume that PIN is installed in **C:\\pin35**. If you chose different folders, please update the user-defined macros *PinFolder* and *WinDDK* from the **Locals** property page of the Visual Studio project(s).

1. Download the linked version of PIN

2. Unzip PIN to the root directory and rename the folder to **C:\\pin35**

3. Place the CodaPinTracer.json configuration file inside **C:\\pin35**

4. Open the file *CodaPinTracer.sln** with Visual Studio 2010

5. Be sure that you are compiling in Release mode 

6. Compile the solution

```
  \---C
      \---pin35
         \+---source
          |        
          |
          |
         \+---CodaPinTracer.json
          |
          |
          |
         \+---CodaPinTracer32.dll
```

You will get a linking-time warning about ATL sections merged with different attributes. You can get rid of them by [changing the settings in atlbase.h](https://stackoverflow.com/questions/9559547/atl-library-warning-lnk4254-and-lnk4078), but they are [unlikely to cause any real problem](https://sourceforge.net/p/wtl/support-requests/2/).

## Usage

1. Run this command from the directory **C:\\pin35\\**

    ```
    pin.exe -t CodaPinTracer32.dll -trace -- <path_to_the_exe_to_be_instrumented>
    ```
3. Create in **C:\\pin35** a folder with name "Results".

2. Check your result in **C:\\pin35\\Results\\< current_date_and_time >\\TRACER**

## Debugger info for executable

1. Use following command line in order to enable debug:
    ```
    pin.exe -appdebug -t CodaPinTracer32.dll -debugger -- <path_to_the_exe_to_be_instrumented>
    ```

2. Open your debugger and use GDBServer(in attach mode) to attach pin, with localhost and port provided by Pin

For example with IDA:
Open IDA, start command line in order to put in pause pin, go on the debugger menu in IDA, attach, DBGServer debugger and insert localhost as address and port provided by pin as port!

## Debugger info for pintool

1. Use following command line in order to enable debug:
    ```
    pin.exe -pause_tool <num seconds> -t CodaPinTracer3232.dll -debugger -- <path_to_the_exe_to_be_instrumented>
    ```
2. Open your debugger and attach it to process with name equal to execuatable instrumented and not pin.exe

For example with IDA:
Open IDA, start command line in order to put in pause pin, go on the debugger menu in IDA, attach, localWindows debugger and select process with same name of executable intrumented.
