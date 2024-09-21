#ifndef OBJECT_H
#define OBJECT_H

// Enum class to represent the types of objects in our simulation
// This is a type-safe enum in C++11 and later, preventing implicit conversions to int
enum class ObjectType { Human, Vehicle };

// The Object class represents entities in the city that the drone can detect
class Object {
public:
    // Constructor: creates a new Object with specified position and type
    // Parameters:
    //   - x: initial x-coordinate of the object
    //   - y: initial y-coordinate of the object
    //   - type: the type of the object (Human or Vehicle)
    Object(int x, int y, ObjectType type);

    // Moves the object to a new position within the map boundaries
    // Parameters:
    //   - maxX: the maximum x-coordinate (width of the map - 1)
    //   - maxY: the maximum y-coordinate (height of the map - 1)
    void move(int maxX, int maxY);

    // Returns the current x-coordinate of the object
    int getX() const;

    // Returns the current y-coordinate of the object
    int getY() const;

    // Returns the type of the object (Human or Vehicle)
    ObjectType getType() const;

private:
    int x, y;           // Current position of the object
    ObjectType type;    // Type of the object (Human or Vehicle)
};

#endif // OBJECT_H