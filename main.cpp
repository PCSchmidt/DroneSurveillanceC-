// Include necessary header files
#include <iostream>     // For input/output operations
#include <chrono>       // For time-related functions
#include <thread>       // For sleep_for function
#include "Drone.h"      // Our custom Drone class
#include "CityMap.h"    // Our custom CityMap class

int main() {
    // Create a 20x20 city map
    CityMap cityMap(20, 20);

    // Create a drone and place it on the city map
    Drone drone(cityMap);

    // Main simulation loop
    while (true) {
        // Update the positions of objects (humans and vehicles) on the map
        cityMap.updateObjects();

        // Move the drone to a new position
        drone.move();

        // Let the drone detect objects in its vicinity
        drone.detectObjects();

        // Display the current state of the city map
        cityMap.display();

        // Print the drone's current position and the number of objects it has detected
        std::cout << "Drone position: (" << drone.getX() << ", " << drone.getY() << ")" << std::endl;
        std::cout << "Detected objects: " << drone.getDetectedObjectsCount() << std::endl;

        // Pause the simulation for 500 milliseconds (0.5 seconds)
        // This slows down the simulation to make it visible to the human eye
        std::this_thread::sleep_for(std::chrono::milliseconds(500));
    }

    return 0;
}