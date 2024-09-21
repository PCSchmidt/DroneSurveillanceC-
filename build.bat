@echo off
g++ -std=c++17 main.cpp Drone.cpp CityMap.cpp Object.cpp -o DroneSurveillance
if %errorlevel% neq 0 (
    echo Compilation failed. Please make sure you have g++ installed and it's in your system PATH.
    pause
    exit /b %errorlevel%
)
echo Compilation successful. Run DroneSurveillance.exe to start the simulation.
pause