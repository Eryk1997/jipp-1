#include <iostream>
#include "rectangle.h"
#include "circle.h"
#include "triangle.h"
#include "square.h"
using namespace std;

int main()
{
    double r;
    cout << "Podaj promien: " ;
    cin >> r;
    Rectangle R1;
    Triangle T1;
    Circle C1({0,0},r);
    Square S1;
    cout << "R: " << R1.area() << " T: " << T1.area() << " C: " << C1.area() << endl;
    cout << "S: " << S1.area() << endl;
    cout << "POROWNANIE" <<endl;
    cout << T1.hasGreaterArea(C1) << endl;

    cout << "WAGA " << endl;
    cout << "R1: " <<  sizeof(R1) << endl;
    cout << "S1: " <<  sizeof(S1) << endl;
    cout << "T1: " <<  sizeof(T1) << endl;
    cout << "C1: " <<  sizeof(C1) << endl;
    return 0;
}
