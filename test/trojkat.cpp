#include "trojkat.h"
#include "sl.h"
Trojkat::Trojkat()
{
    p1 = Point2D(0,0);
    p2 = Point2D(0,1);
    p3 = Point2D(1,0);
}

void Trojkat::Rysuj(){


    slSetForeColor(0.5,0.0,0.0,0.5);
    //slTriangleFill(100.0,450.0,50.0,50.0);
 slTriangleFill(10.0,10.0,20.0,20.0);
    //slTriangleFill();
}
