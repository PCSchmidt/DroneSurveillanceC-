# Drone Surveillance C++ Project

This project demonstrates a visual simulation where a drone moves within a city map, detects objects (humans and vehicles), and provides real-time updates on the drone's position and detected objects.

## Project Structure

The project consists of the following files:

- `main.cpp`: The entry point of the program. It sets up the simulation and runs the main loop.
- `Drone.h` and `Drone.cpp`: Define and implement the Drone class, which represents the drone in the simulation.
- `CityMap.h` and `CityMap.cpp`: Define and implement the CityMap class, which represents the city environment.
- `Object.h` and `Object.cpp`: Define and implement the Object class, which represents humans and vehicles in the city.
- `CMakeLists.txt`: CMake configuration file (not used in the current build process).
- `build.bat`: Batch file for building the project using MSVC compiler.

## Features

- Drone movement within a city grid
- Object detection (humans and vehicles)
- Real-time updates on drone position and detected objects
- Visual representation of the city map
- Random movement of objects within the grid

## Building the Project

To build the project, you'll need Microsoft Visual C++ compiler (MSVC). This comes with Visual Studio or the Build Tools for Visual Studio.

1. Open a "Developer Command Prompt for VS 2022" (or your version of Visual Studio)
2. Navigate to the project directory
3. Run the build script:
   ```
   build.bat
   ```

## Running the Simulation

After building the project:

1. In the same Developer Command Prompt, run:
   ```
   DroneSurveillance.exe
   ```

2. The simulation will start, showing:
   - A grid representing the city map
   - 'D' for the drone
   - 'H' for humans
   - 'V' for vehicles
   - '.' for empty spaces

3. Below the map, you'll see the drone's current position and the number of objects it has detected.

4. The simulation updates in real-time. To stop it, press Ctrl+C.

## Customizing the Simulation

You can modify various aspects of the simulation:
- Change the map size in `main.cpp`
- Adjust the number of objects or their movement patterns in `CityMap.cpp`
- Modify the drone's detection range in `Drone.cpp`

## Contributing

Feel free to fork this project and submit pull requests with improvements or additional features. If you're new to C++, this project serves as a good starting point to understand basic concepts like classes, object-oriented programming, and simple simulations.

Enjoy exploring and expanding upon this Drone Surveillance simulation!