#include <iostream>
#include "Estudiante.h"
using namespace std;

int main()
{
    Estudiante *estudiante1 = new Estudiante("16110770",8,22,"Cobos"); //Creacion de un nuevo objeto
    estudiante1->mostrarDatos();

    return 0;
}
