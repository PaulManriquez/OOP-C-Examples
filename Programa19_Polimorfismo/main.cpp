#include <iostream>
#include "Poligono.h"
#include "Rectangulo.h"
#include "Triangulo.h"
using namespace std;

int main()
{
    Poligono *poligonos[2];//Creacion de objetos
                                //base/altura
    poligonos[0]= new Rectangulo(7,4);
    poligonos[1]= new Triangulo(3,4,4);

    for(int i=0;i<2;i++){
        cout<<"Area:"<<poligonos[i]->area()<<endl;
        cout<<"Perimetro:"<<poligonos[i]->perimetro()<<endl;

    }

    return 0;
}
