@echo off
setlocal

set "GCC=C:\msys64\ucrt64\bin\gcc.exe"
if not exist "%GCC%" (
    echo GCC was not found at %GCC%
    echo Install the MSYS2 UCRT64 toolchain or update .vscode\settings.json.
    exit /b 1
)

"%GCC%" "%~1" -std=c17 -Wall -Wextra -o "%~dpn1.exe"
if errorlevel 1 exit /b %errorlevel%

"%~dpn1.exe"
endlocal
