#include "triangle.h"

Triangle::Triangle()
{
    p1=Point2D(0,0);
    width=100; // postawa
    height=100;
}
Triangle::Triangle(Point2D p1,double width, double height)
    :p1(p1),width(width),height(height)
{
}
double Triangle::area(){
    return width*height/2;
}
