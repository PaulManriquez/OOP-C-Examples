#include <iostream>
#include "GatoDomestico.h"
#include "Felino.h"
using namespace std;

int main()
{
    GatoDomestico   *minino = new GatoDomestico(2015,"Mexico","Domestico","Paul");
    Felino          *estrellaCirco=new Felino(2012,"India","Vengala","Ataide");

    cout<<"Dietas"<<endl;
    cout<<"Gato:"<<minino->ImprimirDieta()<<endl;
    cout<<"Felino:"<<estrellaCirco->ImprimirDieta()<<endl;

    cout<<"Anio nacimiento\tLugar nacimiento"<<endl;
    cout<<"Gato:"<<minino->getAnioNacimiento()<<"\t"<<minino->getLugarNacimiento()<<endl;
    cout<<"Felino:"<<estrellaCirco->getAnioNacimiento()<<"\t"<<estrellaCirco->getLugarNacimiento()<<endl;

    cout<<"Cambiar nombre del duenio del gato"<<endl;
    string nuevoDuenio;
    cout<<"Digite el nombre del nuevo duenio:";
    getline(cin,nuevoDuenio);
    minino->setNombreDuenio(nuevoDuenio);
    cout<<"El nuevo duenio es:"<<minino->getNombreDuenio()<<endl;

    cout<<"Raza:"<<endl;
    cout<<"Gato:"<<minino->getRaza()<<endl;
    cout<<"Felino:"<<estrellaCirco->getRaza()<<endl;


    cout<<"Cambiar nombre del circo"<<endl;
    string nuevoCirco;
    cout<<"Nuevo nombre del circo:";
    getline(cin,nuevoCirco);
    estrellaCirco->setNombreCirco(nuevoCirco);
    cout<<"El nuevo nombre de circo es:"<<estrellaCirco->getNombreCirco()<<endl;

    delete minino;
    delete estrellaCirco;
    return 0;
}
