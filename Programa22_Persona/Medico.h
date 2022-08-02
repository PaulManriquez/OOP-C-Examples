#include <iostream>
#include "Persona.h"
using namespace std;

class Medico:public Persona{
//Attributes
private:
    string titulacion;
    int aniosExperiencia;

//Methods
public:
    Medico(string nombre,string apellido,int edad,string titulacion,int aniosExperiencia)
    :Persona(nombre,apellido,edad){
        this->titulacion=titulacion;
        this->aniosExperiencia=aniosExperiencia;
    }

    ~Medico(){}//Destructor

    void partidoFutbol(){
        cout<<"Cura jugadores"<<endl;
    }
    void entrenamiento(){
        cout<<"Asistencia en el entrenamiento"<<endl;
    }

    void curarLesion(){
        cout<<"Curar lession"<<endl;
    }

};
