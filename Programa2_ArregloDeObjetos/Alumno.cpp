
#include<iostream>
#include "Alumno.h"

using namespace std;

void Alumno::pedirDatos(){
    cout<<"Digite la calificacion de Mate:";
    cin>>calMate;
    cout<<"\nDigite la calificacion de programacion:";
    cin>>calProgra;
}

void Alumno::mostrarDatos(){
cout<<"Cal Mate:"<<calMate<<"\tCal Programacion:"<<calProgra<<endl;
cout<<"Promedio:"<<(calMate+calProgra/2);
}
