#include <iostream>
#include "point.h"

using namespace std;

Point::Point(float coorX, float coorY)
       : x(coorX), y(coorY) {
}

void Point::deplace(float transX, float transY){
    x = x + transX;
    y = y + transY;
}
void Point::affiche(){
    cout<<"( "<<x<<" ; "<<y<<" )"<<endl;
}