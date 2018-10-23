#ifndef TRIANGLE_H
#define TRIANGLE_H
#include "point2d.h"

class Triangle
{
private:
    Point2D p1;
    double width;
    double height;
public:
    Triangle();
    Triangle(Point2D p1,double width, double height);
    double area();
};

#endif // TRIANGLE_H
