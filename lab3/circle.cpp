#include "circle.h"

Circle::Circle()
{
    center=Point2D(0,0);
    r=1;
}
Circle::Circle(Point2D center,double r)
    :center(center),r(r)
{
}

double Circle::area(){
return r*r*3.14;
}
