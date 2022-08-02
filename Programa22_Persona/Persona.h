#ifndef PERSONA_H
#define PERSONA_H

#include <iostream>
using namespace std;

class Persona{
//Attributes
protected:
    string nombre,apellido;
    int edad;
//Methods
public:
    Persona(string nombre, string apellido,int edad){//Constructor
        this->nombre=nombre;
        this->apellido=apellido;
        this->edad;
    }
    ~Persona(){}//Destructor

    void viajar(){
        cout<<"Viajar"<<endl;
    }

    virtual void partidoFutbol()=0;

    virtual void entrenamiento()=0;

    string getNombre(){
        return nombre;
    }

    string getApellido(){
        return apellido;
    }

    int getEdad(){
        return edad;
    }

};
#endif // PERSONA_H
