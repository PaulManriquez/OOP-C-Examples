#include<iostream>
using namespace std;

class Expediente{
//Atributos
private:
    int nExpediente;
//Metodos
public:
    Expediente(int nExpediente){//Constructor
    this->nExpediente=nExpediente;
    }
    Expediente(){//2do constructor
    }
    ~Expediente(){}//Destructor

    int getNExpediente(){
        return nExpediente;
    }

};
