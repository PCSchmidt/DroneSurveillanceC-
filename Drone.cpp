#include "Drone.h"
#include <cstdlib>  // For rand() function

// Constructor: Initialize the Drone with a reference to the CityMap
Drone::Drone(CityMap& map) : x(0), y(0), detectedObjects(0), cityMap(map) {}

// Move the drone to a new position
void Drone::move() {
    // Generate random movement in x and y directions
    // dx and dy will be -1, 0, or 1
    int dx = rand() % 3 - 1;
    int dy = rand() % 3 - 1;

    // Update x position, ensuring it stays within map boundaries
    x = std::max(0, std::min(cityMap.getWidth() - 1, x + dx));
    
    // Update y position, ensuring it stays within map boundaries
    y = std::max(0, std::min(cityMap.getHeight() - 1, y + dy));
}

// Detect objects in the vicinity of the drone
void Drone::detectObjects() {
    // Reset the count of detected objects
    detectedObjects = 0;

    // Check a 3x3 grid around the drone's current position
    for (int dx = -1; dx <= 1; dx++) {
        for (int dy = -1; dy <= 1; dy++) {
            // Calculate the coordinates to check
            int checkX = x + dx;
            int checkY = y + dy;

            // Ensure we're not checking outside the map boundaries
            if (checkX >= 0 && checkX < cityMap.getWidth() &&
                checkY >= 0 && checkY < cityMap.getHeight()) {
                // If there's an object at this position, increment the count
                if (cityMap.isObjectAt(checkX, checkY)) {
                    detectedObjects++;
                }
            }
        }
    }
}

// Getter for x coordinate
int Drone::getX() const { return x; }

// Getter for y coordinate
int Drone::getY() const { return y; }

// Getter for the count of detected objects
int Drone::getDetectedObjectsCount() const { return detectedObjects; }