#ifndef DEPORTISTA_H
#define DEPORTISTA_H

#include <iostream>
using namespace std;

class Deportista{
//Attributes
private:
    string nombreEntrenador;
//Methods
public:
    Deportista(string nombreEntrenador){
    this->nombreEntrenador=nombreEntrenador;
    }
    ~Deportista(){}//Destructor

    void mostrarDatos(){
        cout<<"Nombre entrenador:"<<nombreEntrenador<<endl;
    }

    void setNEntrenador(string nNombre){
        this->nombreEntrenador=nNombre;
    }
    string getNEntrenador(){
        return nombreEntrenador;
    }
};
#endif // DEPORTISTA_H
