@echo off
REM This batch file compiles and runs the C++ Library Management System.

REM --- Step 1: Create output directories ---
if not exist "out" (
    echo creating 'out' directory for executable...
    mkdir out
)
if not exist "data" (
    echo creating 'data' directory for data files...
    mkdir data
)

REM --- Step 2: Compilation ---
echo.
echo compiling the project...
g++ main.cpp utils/LibraryUtils.cpp -o out/library_app.exe

REM --- Step 3: Check if compilation was successful ---
if errorlevel 1 (
    echo.
    echo ********** COMPILATION FAILED **********
    echo Please check for errors above.
    pause
    exit /b
)

REM --- Step 4: Execution ---
echo.
echo compilation successful!
echo starting the application...
echo ---------------------------------
out\library_app.exe

echo ---------------------------------
echo application finished.
pause