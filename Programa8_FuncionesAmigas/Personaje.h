#include<iostream>
using namespace std;

class Personaje{

    friend void modificar(Personaje &,int , int);//Friend Function, enable to modify atributes and methods through this function in main

//Atributes
private:
    int ataque;
    int defensa;
//Methods
public:
    Personaje(int ataque,int defensa){//Constructor
    this->ataque=ataque;
    this->defensa=defensa;
    }

    void mostrarDatos(){
        cout<<"Ataque="<<ataque;
        cout<<"\tDefensa="<<defensa<<endl;
    }

};
