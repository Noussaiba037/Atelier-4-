#include <iostream>
#include "point.h"

using namespace std;

int main(){
    Point point1(3.5,4);
    cout<<"Coordonnees initials : ";
    point1.affiche();

    point1.deplace(5,9.5);
    cout<<"Les coordonnees apres la translation : ";
    point1.affiche();

    return 0;
}