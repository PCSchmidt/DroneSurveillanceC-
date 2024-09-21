#include "Drone.h"
#include <cstdlib>

Drone::Drone(CityMap& map) : x(0), y(0), detectedObjects(0), cityMap(map) {}

void Drone::move() {
    int dx = rand() % 3 - 1;  // -1, 0, or 1
    int dy = rand() % 3 - 1;  // -1, 0, or 1

    x = std::max(0, std::min(cityMap.getWidth() - 1, x + dx));
    y = std::max(0, std::min(cityMap.getHeight() - 1, y + dy));
}

void Drone::detectObjects() {
    detectedObjects = 0;
    for (int dx = -1; dx <= 1; dx++) {
        for (int dy = -1; dy <= 1; dy++) {
            int checkX = x + dx;
            int checkY = y + dy;
            if (checkX >= 0 && checkX < cityMap.getWidth() &&
                checkY >= 0 && checkY < cityMap.getHeight() &&
                cityMap.isObjectAt(checkX, checkY)) {
                detectedObjects++;
            }
        }
    }
}

int Drone::getX() const { return x; }
int Drone::getY() const { return y; }
int Drone::getDetectedObjectsCount() const { return detectedObjects; }