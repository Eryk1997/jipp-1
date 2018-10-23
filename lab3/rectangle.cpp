#include "rectangle.h"

Rectangle::Rectangle()
{
    p1=Point2D(0,0);
    width=10;
    height=10;
}
Rectangle::Rectangle(Point2D p1,double width,double height)
    :p1(p1),width(width),height(height)
{

}

double Rectangle::area(){
    return width*height;

}
