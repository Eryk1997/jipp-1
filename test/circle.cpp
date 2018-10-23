#include "circle.h"

Circle::Circle()
{
    p1=Point2D(0,0);
    r=1;
}
Circle::Circle(Point2D p1,double r)
    :p1(p1),r(r)
{
}
