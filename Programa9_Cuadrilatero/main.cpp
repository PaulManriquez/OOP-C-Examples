//Construc a program OOP
//Sobrecarga overload constructors if 2 sides are the same we only use the first constructor else, the other
#include <iostream>
#include "Cuadrilater.h"

using namespace std;

int main()
{
    Cuadrilater *c1;

    float lado1,lado2;
    cout<<"Dijite lado1:";
    cin>>lado1;
    cout<<"\nDijite lado2:";
    cin>>lado2;

    if(lado1==lado2){
        c1 =new Cuadrilater(lado1/*O lado2*/);
    }else{
        c1 = new Cuadrilater(lado1,lado2);
    }
    cout<<"Perimetro:"<<c1->obtenerPerimetro()<<"\tArea:"<<c1->obtenerArea()<<endl;

    return 0;
}
