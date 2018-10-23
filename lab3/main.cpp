#include <iostream>
#include "rectangle.h"
#include "circle.h"
#include "triangle.h"

using namespace std;

int main()
{
    Rectangle R1;
    Triangle T1;
    Circle C1;
    cout << "R: " << R1.area() << " T: " << T1.area() << " C: " << C1.area() << endl;
    return 0;
}
