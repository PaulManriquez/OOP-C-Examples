#include <iostream>
#include "Triangulo.h"
using namespace std;

int main()
{                                 //Numero de lados
    Triangulo *T1 = new Triangulo(3,5,6,7);
    cout<<"Numero de lados:"<<T1->getNLados()<<endl;
    cout<<"Area:"<<T1->AreaTriangulo()<<endl;

    return 0;
}
