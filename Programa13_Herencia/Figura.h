#include<iostream>
using namespace std;

class Figura{
//Attributes
private:
    int nLados;
//Metodos
public:
    Figura(int nLados){//Constructor
    this->nLados=nLados;
    }
    int getNLados(){
    return nLados;
    }

};
