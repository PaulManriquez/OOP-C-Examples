#include <iostream>
#include "Alumno.h"
using namespace std;

int main()
{
    Alumno alumnos[4];//Creacion de arreglo de objetos estatico
    Alumno *alumnos2= new Alumno[3];//Creacion de arreglo dinamico

    for(int i=0;i<3;i++){
        (alumnos2+i)->pedirDatos();//Dinamico
        //alumnos[i].pedirDatos();//Estatico
        cout<<endl;
    }

    cout<<"Mostrando las notas:"<<endl;
    for(int i=0;i<3;i++){
        (alumnos2+i)->mostrarDatos();
        cout<<endl;
    }

    return 0;
}
