# Drone Surveillance C++ Project

This project demonstrates a visual simulation where a drone moves within a city map, detects objects (humans and vehicles), and provides real-time updates on the drone's position and detected objects.

## Features

- Drone movement within a city grid
- Object detection (humans and vehicles)
- Real-time updates on drone position and detected objects
- Visual representation of the city map
- Random movement of objects within the grid

## Building the Project

To build the project, you'll need Microsoft Visual C++ compiler (MSVC). This comes with Visual Studio or the Build Tools for Visual Studio.

### Using the build script

1. Open a Developer Command Prompt for VS (this ensures the necessary environment variables are set).
2. Navigate to the project directory.
3. Run the `build_msvc.bat` file.

### Manual compilation

If you prefer to compile manually, open a Developer Command Prompt for VS, navigate to the project directory, and run:

```
cl /EHsc /std:c++17 main.cpp Drone.cpp CityMap.cpp Object.cpp /Fe:DroneSurveillance.exe
```

## Running the Simulation

After building the project, run the executable:

```
DroneSurveillance.exe
```

The simulation will start, showing the city map with the drone ('D') and objects ('H' for humans, 'V' for vehicles) moving around. The drone's position and the number of detected objects will be displayed in real-time.

## Contributing

Feel free to fork this project and submit pull requests with improvements or additional features.