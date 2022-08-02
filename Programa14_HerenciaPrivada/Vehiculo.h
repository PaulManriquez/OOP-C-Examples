#include <iostream>
using namespace std;
//Guardian de inclusion multiple
#ifndef VEHICULO_H
#define VEHICULO_H

class Vehiculo{
//Atributos
private:
    string marca;
    string color;

protected:
    string modelo;

    string getModelo(){
    return modelo;
    }

//Methodes
public:
    Vehiculo(string marca, string color,string modelo){//Constructor
        this->marca=marca;
        this->color=color;
        this->modelo=modelo;
    }

    void setColor(string color){
        this->color=color;//Establecer nuevo color
    }
    string getMarca(){
    return marca;
    }

    string getColor(){
    return color;
    }

};
#endif
