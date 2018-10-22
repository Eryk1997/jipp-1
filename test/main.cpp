#include <iostream>
#include "trojkat.h"
#include "sl.h"

using namespace std;

int main()
{


    slWindow(500,500, "Trojkat", false);
    slSetBackColor(0.0,0.0,0.0);
    Trojkat tr;

    while(!slShouldClose() && !slGetKey(SL_KEY_ESCAPE) ){
        tr.Rysuj();
        slRender();
    }
    slClose();
    return 0;
}
