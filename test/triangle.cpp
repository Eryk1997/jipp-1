#include "triangle.h"

Triangle::Triangle()
{
    p1=Point2D(0,0);
    p2=Point2D(100,0);
    p3=Point2D(0,100);
}
Triangle::Triangle(Point2D p1,Point2D p2,Point2D p3)
{
    this->p1=p1;
    this->p2=p2;
    this->p3=p3;
}
