#include<iostream>
#include "Figura.h"
#include <math.h>

using namespace std;

                  //Hereda todo lo publico de la clase figura
class Triangulo : public Figura{
//Attributes
private:
    float lado1,lado2,lado3;
//Methods
public:                                                       //Inicializa nLados de la clase padre a Triangulo (Clase hija)
    Triangulo(int nLados,float lado1,float lado2,float lado3):Figura(nLados){//Constructor
        this->lado1 =lado1;
        this->lado3 =lado2;
        this->lado3 =lado3;
    }

    float AreaTriangulo(){
    float p=(lado1+lado2+lado3)/2;//Formula de herom , perimetro
    float area=sqrt(p *((p-lado1)*(p-lado2)*(p-lado3)) );
    return area;
    }

};
