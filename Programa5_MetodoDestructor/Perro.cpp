#include<iostream>
#include "Perro.h"

using namespace std;

void Perro::mostrarDatos(){
    cout<<"Nombre:"<<nombre;
    cout<<"\nRaza:"<<raza;
}

void Perro::jugar(){
    cout<<"\nPerro "<<nombre<<" Esta jugando"<<endl;
}
