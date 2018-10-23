#ifndef RECTANGLE_H
#define RECTANGLE_H
#include "point2d.h"

class Rectangle
{
private:
    Point2D p1;
    double width;
    double height;
public:
    Rectangle();
    Rectangle(Point2D p1,double width,double height);
    void area();
};

#endif // RECTANGLE_H
