#ifndef OBJECT_H
#define OBJECT_H

enum class ObjectType { Human, Vehicle };

class Object {
public:
    Object(int x, int y, ObjectType type);
    void move(int maxX, int maxY);
    int getX() const;
    int getY() const;
    ObjectType getType() const;

private:
    int x, y;
    ObjectType type;
};

#endif // OBJECT_H