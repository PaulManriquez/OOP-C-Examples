#ifndef FELINO_H
#define FELINO_H

#include <iostream>
#include "Mamifero.h"
using namespace std;

class Felino:public Mamifero{
//Attributes
private:
    string nombreCirco;
//Methods
public:
    Felino(int anioNacimiento,string lugarNacimiento,string raza ,string nombreCirco)
            :Mamifero(anioNacimiento,lugarNacimiento,raza){//Constructor
    this->nombreCirco=nombreCirco;
    }

    Felino(int anioNacimiento,string lugarNacimiento,string raza)
            :Mamifero(anioNacimiento,lugarNacimiento,raza){//Constructor
    }

    ~Felino(){}//Destructor

    string ImprimirDieta(){
    return "La dieta del felino es a base de carne";
    }

    void setNombreCirco(string nuevoNombre){
    this->nombreCirco=nuevoNombre;
    }

    string getNombreCirco(){
    return nombreCirco;
    }

};
#endif // FELINO_H
