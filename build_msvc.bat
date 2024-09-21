@echo off
cl /EHsc /std:c++17 main.cpp Drone.cpp CityMap.cpp Object.cpp /Fe:DroneSurveillance.exe
if %errorlevel% neq 0 (
    echo Compilation failed. Please make sure you're running this script from a Developer Command Prompt for VS.
    pause
    exit /b %errorlevel%
)
echo Compilation successful. Run DroneSurveillance.exe to start the simulation.
pause