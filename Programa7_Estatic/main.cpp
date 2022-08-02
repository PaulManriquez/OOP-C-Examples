#include <iostream>
#include "Estatico.h"
using namespace std;

int main()
{
   // Estatico *ob1 = new Estatico();
   // Estatico *ob2 = new Estatico();
   // Estatico *ob3 = new Estatico();

    //It will apper in console the number 3 because in the constructor we have a counter of type
    //Static thus all the subsequents objects share this and every time it is executed add 1 per object
    //in this case 3 because we have 3 objects.
    //cout<<ob1->getContador()<<endl;
    cout<<"La suma es: "<<Estatico::sumar(3,5); //<<--No es necesario tener un objeto instanciado para usar ese metodo de la clase
    return 0;
}
