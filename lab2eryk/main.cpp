#include <iostream>
#include "sl.h"
#include "triangle.h"
using namespace std;

int main()
{
    slWindow(500, 500 , " Triangle ", false);
    slSetBackColor(1.0,1.0,1.0);  //kolor tla
    Triangle tr;

    while (!slGetKey(SL_KEY_ESCAPE && !slShouldClose())) {

        tr.Draw();
        slRender();  //wygenerowanie
    }

    slClose();
    return 0;
}
