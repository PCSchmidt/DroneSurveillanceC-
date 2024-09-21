#include <iostream>
#include <chrono>
#include <thread>
#include "Drone.h"
#include "CityMap.h"

int main() {
    CityMap cityMap(20, 20);  // Create a 20x20 city map
    Drone drone(cityMap);

    while (true) {
        cityMap.updateObjects();  // Move objects randomly
        drone.move();  // Move the drone
        drone.detectObjects();  // Detect objects
        cityMap.display();  // Display the current state

        // Print drone position and detected objects
        std::cout << "Drone position: (" << drone.getX() << ", " << drone.getY() << ")" << std::endl;
        std::cout << "Detected objects: " << drone.getDetectedObjectsCount() << std::endl;

        std::this_thread::sleep_for(std::chrono::milliseconds(500));  // Pause for 500ms
    }

    return 0;
}