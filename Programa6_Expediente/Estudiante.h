#include<iostream>
using namespace std;
#include "Expediente.h"
#include "Direccion.h"
class Estudiante{
//Atributos
private:
    string codigo;
    float promedio;
    Expediente exp;//Objeto de la clase expediente
    Direccion  dir;//Objeto de la clase expediente
//Metodos
public:                                        //Toma el objeto y lo llena con ese parametro
    Estudiante(string codigo,float promedio,int nExpediente,string direccion)
    :exp(nExpediente), dir(direccion){//Constructor
    this->codigo=codigo;
    this->promedio=promedio;
    }

    void mostrarDatos(){
    cout<<"Codigo:"<<codigo<<endl;
    cout<<"Promedio:"<<promedio<<endl;
    cout<<"Num de expediente:"<<exp.getNExpediente()<<endl;
    cout<<"Direccion:"<<dir.getDirection()<<endl;
    }

};
