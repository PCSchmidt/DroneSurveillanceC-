#ifndef CITYMAP_H
#define CITYMAP_H

#include <vector>
#include "Object.h"

class CityMap {
public:
    CityMap(int width, int height);
    void updateObjects();
    void display() const;
    bool isObjectAt(int x, int y) const;
    int getWidth() const;
    int getHeight() const;

private:
    int width, height;
    std::vector<Object> objects;
};

#endif // CITYMAP_H