#include <iostream>
using namespace std;
#ifndef POLIGONO_H
#define POLIGONO_H

class Poligono{
//Methods
public:
    virtual float perimetro()=0;
    virtual float area()=0;

};
#endif // POLIGONO_H
