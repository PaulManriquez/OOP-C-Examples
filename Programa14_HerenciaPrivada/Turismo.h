#include <iostream>
#include "Vehiculo.h"
using namespace std;
                //Herencia publica
class Turismo: public Vehiculo{
//Atributos
private:
    int numeroPuertas;
//Methods
public:
    Turismo(string marca, string color, string modelo,int numeroPuertas)
    :Vehiculo(marca,color,modelo){

    this->numeroPuertas=numeroPuertas;
    }
    ~Turismo(){}

    int getNPuertas(){
    return numeroPuertas;
    }

    string returnModel(){//Como hereda de la clase padre hacemos aqui una funcion publica para usar la protegida de la clase padre
    string mensaje=getModelo();
    return mensaje;
    }


};

