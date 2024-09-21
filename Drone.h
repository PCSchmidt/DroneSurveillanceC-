#ifndef DRONE_H
#define DRONE_H

#include "CityMap.h"

class Drone {
public:
    Drone(CityMap& map);
    void move();
    void detectObjects();
    int getX() const;
    int getY() const;
    int getDetectedObjectsCount() const;

private:
    int x, y;
    int detectedObjects;
    CityMap& cityMap;
};

#endif // DRONE_H