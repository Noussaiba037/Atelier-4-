#ifndef _DECL_CLASSE_
#define _DECL_CLASSE_

using namespace std;

class Point
{
private:
    float x;
    float y;
public:
    Point(float coorX, float coorY);
    void deplace(float transX, float transY);
    void affiche();
};


#endif