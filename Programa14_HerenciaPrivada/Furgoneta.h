//Herencia protegida
#include <iostream>
#include "Vehiculo.h"
using namespace std;

class Furgoneta : protected Vehiculo{
//Atrtibuttes
private:
    int carga;
//Methods
public:
    Furgoneta(string marca,string color,string modelo,int carga)
    :Vehiculo(marca,color,modelo){
    this->carga=carga;
    }

    ~Furgoneta(){}

    int getCarga(){
    return carga;
    }

};

