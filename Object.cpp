#include "Object.h"
#include <cstdlib>  // For rand() function

// Constructor: Initialize an Object with given position and type
Object::Object(int x, int y, ObjectType type) : x(x), y(y), type(type) {}

// Move the object to a new position
void Object::move(int maxX, int maxY) {
    // Generate random movement in x and y directions
    // dx and dy will be -1, 0, or 1
    int dx = rand() % 3 - 1;
    int dy = rand() % 3 - 1;

    // Update x position, ensuring it stays within map boundaries
    x = std::max(0, std::min(maxX - 1, x + dx));
    
    // Update y position, ensuring it stays within map boundaries
    y = std::max(0, std::min(maxY - 1, y + dy));
}

// Getter for x coordinate
int Object::getX() const { return x; }

// Getter for y coordinate
int Object::getY() const { return y; }

// Getter for object type
ObjectType Object::getType() const { return type; }