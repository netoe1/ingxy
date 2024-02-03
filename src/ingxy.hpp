#ifndef INGXY_HPP
#define INGXY_HPP
class Vector2
{
public:
    double x;
    double y;

    Vector2(double x, double y);
    static double distanceBetweenTwoPoints(Vector2& p1, Vector2 &p2);
};

class Vector3
{
public:
    double x;
    double y;
    double z;

    Vector3(double x, double y, double z);
};
#endif