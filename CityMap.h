#ifndef CITYMAP_H
#define CITYMAP_H

#include <vector>
#include "Object.h"

// The CityMap class represents the environment of our simulation
// It contains and manages all the objects (humans and vehicles) in the city
class CityMap {
public:
    // Constructor: creates a new CityMap with specified dimensions
    // Parameters:
    //   - width: the width of the map
    //   - height: the height of the map
    CityMap(int width, int height);

    // Updates the positions of all objects on the map
    // This function is called in each iteration of the simulation
    void updateObjects();

    // Displays the current state of the map
    // This function prints the map to the console, showing the positions of all objects
    void display() const;

    // Checks if there is an object at the specified coordinates
    // Parameters:
    //   - x: the x-coordinate to check
    //   - y: the y-coordinate to check
    // Returns: true if an object is present at (x,y), false otherwise
    bool isObjectAt(int x, int y) const;

    // Returns the width of the map
    int getWidth() const;

    // Returns the height of the map
    int getHeight() const;

private:
    int width, height;          // Dimensions of the map
    std::vector<Object> objects; // Container for all objects in the city
};

#endif // CITYMAP_H