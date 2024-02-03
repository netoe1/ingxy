#include "ingxy.hpp"
#include <cmath>
Vector2::Vector2(double x = 0, double y = 0)
{
    this->x = x;
    this->y = y;
}

Vector3::Vector3(double x = 0, double y = 0, double z = 0)
{
    this->x = x;
    this->y = y;
    this->z = z;
}

static double distanceBetweenTwoPoints(Vector2 &p1, Vector2 &p2)
{
    return sqrt((p1.x - p2.x) * (p1.x - p2.x) + (p1.y - p2.y) * (p1.y - p2.y));
}