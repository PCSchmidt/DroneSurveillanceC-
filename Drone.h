#ifndef DRONE_H
#define DRONE_H

#include "CityMap.h"

// The Drone class represents a drone in our simulation
// It can move around the city map and detect objects
class Drone {
public:
    // Constructor: initializes a new Drone object
    // Parameters:
    //   - map: a reference to the CityMap the drone will operate in
    Drone(CityMap& map);

    // Moves the drone to a new position on the map
    void move();

    // Detects objects in the vicinity of the drone
    void detectObjects();

    // Returns the current X-coordinate of the drone
    int getX() const;

    // Returns the current Y-coordinate of the drone
    int getY() const;

    // Returns the number of objects the drone has detected
    int getDetectedObjectsCount() const;

private:
    int x, y;               // Current position of the drone on the map
    int detectedObjects;    // Number of objects detected by the drone
    CityMap& cityMap;       // Reference to the CityMap the drone is operating in
};

#endif // DRONE_H