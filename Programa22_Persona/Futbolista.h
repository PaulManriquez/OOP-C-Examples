#include <iostream>
#include "Persona.h"
using namespace std;

class Futbolista: public Persona{
//Attributes
private:
    int dorsal;
    string posicion;

//Methods
public:
    Futbolista(string nombre,string apellido,int edad,int dorsal,string posicion)
    :Persona(nombre,apellido,edad){
        this->dorsal=dorsal;
        this->posicion=posicion;
    }
    ~Futbolista(){}//Destructor

    void partidoFutbol(){
        cout<<"Juega el partido de futbol"<<endl;
    }
    void entrenamiento(){
        cout<<"Entrena"<<endl;
    }
    void entrevista(){
        cout<<"Da una entrevista"<<endl;
    }

};
