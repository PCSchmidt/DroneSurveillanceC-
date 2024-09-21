#include "Object.h"
#include <cstdlib>

Object::Object(int x, int y, ObjectType type) : x(x), y(y), type(type) {}

void Object::move(int maxX, int maxY) {
    int dx = rand() % 3 - 1;  // -1, 0, or 1
    int dy = rand() % 3 - 1;  // -1, 0, or 1

    x = std::max(0, std::min(maxX - 1, x + dx));
    y = std::max(0, std::min(maxY - 1, y + dy));
}

int Object::getX() const { return x; }
int Object::getY() const { return y; }
ObjectType Object::getType() const { return type; }