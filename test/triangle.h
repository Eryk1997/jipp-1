#ifndef TRIANGLE_H
#define TRIANGLE_H
#include "point2d.h"

class Triangle
{
private:
    Point2D p1;
    Point2D p2;
    Point2D p3;
public:
    Triangle();
    Triangle(Point2D p1,Point2D p2,Point2D p3);
};

#endif // TRIANGLE_H
