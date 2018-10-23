#include "rectangle.h"
#include <iostream>
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

void Rectangle::area(){
    double ar =width*height;
    std::cout << "Pole : " << ar << std::endl;
}
