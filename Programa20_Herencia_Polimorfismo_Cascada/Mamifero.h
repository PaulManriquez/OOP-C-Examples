#include <iostream>
#ifndef MAMIFERO_H
#define MAMIFERO_H

using namespace std;

class Mamifero{
//Attributes
private:
    int anioNacimiento;
    string lugarNacimiento,raza;

//Methods
public:
    Mamifero(int anioNacimiento,string lugarNacimiento,string raza){//Constructor
    this->anioNacimiento=anioNacimiento;
    this->lugarNacimiento=lugarNacimiento;
    this->raza=raza;
    }
    ~Mamifero(){}//Destructor

    virtual string ImprimirDieta ()=0;

    int getAnioNacimiento(){
    return anioNacimiento;
    }

    string getLugarNacimiento(){
    return lugarNacimiento;
    }

    string getRaza(){
    return raza;
    }

};
#endif // MAMIFERO_H
