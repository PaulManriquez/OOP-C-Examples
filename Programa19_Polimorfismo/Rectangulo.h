#include <iostream>
#include "Poligono.h"
using namespace std;

class Rectangulo:public Poligono{
//Attributes
private:
    float base,altura;
//Mehods
public:
    Rectangulo(float base, float altura){
    this->base=base;
    this->altura=altura;
    }

    ~Rectangulo(){}

    float perimetro(){
    float per=2*base +2*altura;
    return per;
    }

    float area(){
    float areaR=base*altura;
    return areaR;
    }

};
