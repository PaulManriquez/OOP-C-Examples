#include <iostream>
#include "Perro.h"

using namespace std;

int main()
{
    string name,raza;
    cout<<"Digite el nombre del perro:";
    cin>>name;
    cout<<"Digite la raza del perro:";
    cin>>raza;
    Perro *perro1 = new Perro(name,raza);
    perro1->mostrarDatos();
    perro1->jugar();
    //perro1->~Perro();//Calling the Destructor
    delete perro1;//Another form
    return 0;
}
