#include "CityMap.h"
#include <iostream>
#include <cstdlib>  // For rand() function

// Constructor: Initialize the CityMap with given dimensions and populate it with random objects
CityMap::CityMap(int w, int h) : width(w), height(h) {
    // Create 10 random objects (humans or vehicles) and place them on the map
    for (int i = 0; i < 10; i++) {
        // Generate random x and y coordinates within the map boundaries
        int x = rand() % width;
        int y = rand() % height;
        
        // Randomly decide if the object is a human or a vehicle
        ObjectType type = (rand() % 2 == 0) ? ObjectType::Human : ObjectType::Vehicle;
        
        // Create the object and add it to our vector of objects
        objects.emplace_back(x, y, type);
    }
}

// Update the positions of all objects on the map
void CityMap::updateObjects() {
    for (auto& obj : objects) {
        // Move each object to a new position
        obj.move(width, height);
    }
}

// Display the current state of the city map
void CityMap::display() const {
    // Create a 2D vector to represent the map grid
    std::vector<std::vector<char>> grid(height, std::vector<char>(width, '.'));

    // Place objects on the grid
    for (const auto& obj : objects) {
        // Use 'H' for humans and 'V' for vehicles
        grid[obj.getY()][obj.getX()] = (obj.getType() == ObjectType::Human) ? 'H' : 'V';
    }

    // Print the grid
    for (int y = 0; y < height; y++) {
        for (int x = 0; x < width; x++) {
            std::cout << grid[y][x] << ' ';
        }
        std::cout << std::endl;
    }
}

// Check if there's an object at the given coordinates
bool CityMap::isObjectAt(int x, int y) const {
    for (const auto& obj : objects) {
        if (obj.getX() == x && obj.getY() == y) {
            return true;
        }
    }
    return false;
}

// Getter for the map width
int CityMap::getWidth() const { return width; }

// Getter for the map height
int CityMap::getHeight() const { return height; }