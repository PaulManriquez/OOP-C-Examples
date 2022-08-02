#ifndef GATODOMESTICO_H
#define GATODOMESTICO_H
#include <iostream>
#include "Felino.h"
using namespace std;

class GatoDomestico:public Felino{
//Attributes
private:
    string nombreDuenio;
//Methods
public:
    GatoDomestico(int anioNacimiento,string lugarNacimiento,string raza,string nombreDuenio)
    :Felino(anioNacimiento,lugarNacimiento,raza){
    this->nombreDuenio=nombreDuenio;
    }

    ~GatoDomestico(){}//Destructor

    string ImprimirDieta(){
    return "La dieta del gato es con whiskas";
    }

    void setNombreDuenio(string nuevoNDuenio){
    this->nombreDuenio=nuevoNDuenio;
    }

    string getNombreDuenio(){
    return nombreDuenio;
    }

};
#endif
