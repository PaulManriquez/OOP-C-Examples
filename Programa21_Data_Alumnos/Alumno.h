#ifndef ALUMNO_H
#define ALUMNO_H

#include <iostream>
using namespace std;

class Alumno{
//Attributes
private:
    string nombreCarrera;
//Methods
public:
    Alumno(string nombreCarrera ){//Constructor
        this->nombreCarrera=nombreCarrera;
    }
    ~Alumno(){}//Destructor

    void mostrarDatos(){
        cout<<"Nombre carrera"<<nombreCarrera<<endl;
    }

    void setNombreCarrera(string newNombreC){
        this->nombreCarrera=newNombreC;
    }

    string getNombreCarrera(){
        return nombreCarrera;
    }

};
#endif // ALUMNO_H
