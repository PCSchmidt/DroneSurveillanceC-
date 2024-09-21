#include "CityMap.h"
#include <iostream>
#include <cstdlib>

CityMap::CityMap(int w, int h) : width(w), height(h) {
    // Initialize with some random objects
    for (int i = 0; i < 10; i++) {
        int x = rand() % width;
        int y = rand() % height;
        ObjectType type = (rand() % 2 == 0) ? ObjectType::Human : ObjectType::Vehicle;
        objects.emplace_back(x, y, type);
    }
}

void CityMap::updateObjects() {
    for (auto& obj : objects) {
        obj.move(width, height);
    }
}

void CityMap::display() const {
    std::vector<std::vector<char>> grid(height, std::vector<char>(width, '.'));

    for (const auto& obj : objects) {
        grid[obj.getY()][obj.getX()] = (obj.getType() == ObjectType::Human) ? 'H' : 'V';
    }

    for (int y = 0; y < height; y++) {
        for (int x = 0; x < width; x++) {
            std::cout << grid[y][x] << ' ';
        }
        std::cout << std::endl;
    }
}

bool CityMap::isObjectAt(int x, int y) const {
    for (const auto& obj : objects) {
        if (obj.getX() == x && obj.getY() == y) {
            return true;
        }
    }
    return false;
}

int CityMap::getWidth() const { return width; }
int CityMap::getHeight() const { return height; }