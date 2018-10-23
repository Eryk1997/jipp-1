#ifndef CIRCLE_H
#define CIRCLE_H
#include "point2d.h"

class Circle
{
private:
    Point2D p1;
    double r;
public:
    Circle();
    Circle(Point2D,double);
};

#endif // CIRCLE_H
