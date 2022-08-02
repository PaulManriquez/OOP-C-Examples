#include<iostream>
using namespace std;
class Persona{
//Atributos
private:
    string nombre,dni;
    int edad;

//Metodos
public:
    Persona(string _nombre,int _edad){//Constructor
        nombre=_nombre;
        edad = _edad;
    }
    Persona(string _dni){//2do constructor
        dni=_dni;
    }

    void correr(){
        cout<<"Soy"<<nombre<<",tengo"<<edad<<"anios"<<endl;
    }
    void correr(int km){//acepta 1 parametro
        cout<<"He corrido "<<km<<" Kilometros"<<endl;
    }

};
