#include <iostream>
#include "Barco.h"
#include "Avion.h"
using namespace std;
//Son
                  //---Herencia multiple----
class HidroAvion:public Barco,public Avion{
//Attributes
private:
    string codigo;
//Methods
public:
    HidroAvion(string nombre,string modelo, string codigo):Barco(nombre),Avion(modelo){
    this->codigo=codigo;
    }

    ~HidroAvion(){}//Destructor

    string getCodigo(){
    return codigo;
    }

    void mostrarDatos(){
    cout<<"Nombre:"<<getNombre()<<"\tModelo:"<<getModelo()<<"\tCodigo:"<<codigo<<endl;
    }

};
