#include <iostream>
#include "Punto.h"

using namespace std;

int main()
{
    //Manera estatica
    Punto p1(2,1);//Establecemos de primera el constructor
    cout <<"Valor de X:" <<p1.getX()<<endl;
    cout <<"Valor de Y:" <<p1.getY()<<endl;

    //Manera Dinamica
    Punto* p2 = new Punto();//Creacion de un objeto dinamico
    p2->setX(5);
    p2->setY(8);
    cout<<"Valor de X:"<<p2->getX()<<"Valor de Y:"<<p2->getY()<<"\n";
    return 0;
}
