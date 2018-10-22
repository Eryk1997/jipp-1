#include "triangle.h"
#include "sl.h"

Triangle::Triangle():p1(0,0),p2(0,100),p3(100,0),width(50),hight(50)
{
    /*  p1 = Point(0,0);
    p2 = Point(1,0);
    p3 = Point(0,1);
    */
}

/*
Triangle::Triangle(Point p1, Point p2, Point p3):p1(p1), p2(p2), p3(p3)
{
    this ->p1=p1;
    this ->p2=p2;
    this ->p3=p3;

}
*/
void Triangle::Draw(){
    double x=(p1.getX()+p2.getX()+p3.getX())/3;
    double y=(p1.getY()+p2.getY()+p3.getY())/3;
slSetForeColor(1.0,0.0,1.0,1.0);  //kolor trojkata
slTriangleFill(x,y,width,hight);          //rozmiar
}
