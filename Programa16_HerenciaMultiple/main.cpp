#include <iostream>
#include "HidroAvion.h"
using namespace std;

int main()
{
    HidroAvion *ob1=new HidroAvion("Perro2","HF22","123p2");
    ob1->mostrarDatos();
    putchar('\n');
    ob1->indicarAvion();
    putchar('\n');
    ob1->indicarBarco();
    delete ob1;
    return 0;
}
