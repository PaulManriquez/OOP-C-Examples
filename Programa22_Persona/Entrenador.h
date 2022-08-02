#include <iostream>
#include "Persona.h"
using namespace std;

class Entrenador:public Persona{
//Attributes
private:
    string estrategia;
//Methods
public:
    Entrenador(string nombre,string apellido,int edad,string estrategia)
    :Persona(nombre,apellido,edad){
        this->estrategia=estrategia;
    }
    ~Entrenador(){}//Destructor


    void partidoFutbol(){
        cout<<"Dirige el partido"<<endl;
    }
    void entrenamiento(){
        cout<<"Entrena al equipo"<<endl;
    }

    void planElEntrenamiento(){
        cout<<"Planifica el entrenamiento"<<endl;
    }

};
