# Drone Surveillance C++ Project

This project demonstrates a visual simulation where a drone moves within a city map, detects objects (humans and vehicles), and provides real-time updates on the drone's position and detected objects.

## Features

- Drone movement within a city grid
- Object detection (humans and vehicles)
- Real-time updates on drone position and detected objects
- Visual representation of the city map
- Random movement of objects within the grid

## Building the Project

To build the project, follow these steps:

1. Ensure you have CMake installed on your system.
2. Create a build directory: `mkdir build && cd build`
3. Run CMake: `cmake ..`
4. Build the project: `cmake --build .`

## Running the Simulation

After building the project, run the executable:

```
./DroneSurveillance
```

The simulation will start, showing the city map with the drone ('D') and objects ('H' for humans, 'V' for vehicles) moving around. The drone's position and the number of detected objects will be displayed in real-time.

## Contributing

Feel free to fork this project and submit pull requests with improvements or additional features.