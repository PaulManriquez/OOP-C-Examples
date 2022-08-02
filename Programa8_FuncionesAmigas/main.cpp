#include <iostream>
#include "Personaje.h"
using namespace std;

void modificar(Personaje &p,int atack, int def){
    p.ataque = atack;
    p.defensa=def;
}

int main()
{
    Personaje *principal= new Personaje(100,90);
    principal->mostrarDatos();
    putchar('\n');

    //Using the function
    modificar(*principal,60,50);
    principal->mostrarDatos();


    return 0;
}
