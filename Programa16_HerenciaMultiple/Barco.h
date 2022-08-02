#include <iostream>
using namespace std;
//Father
class Barco{
//Attributes
private:
    string nombre;
//Methods
public:
    Barco(string nombre){//Constructor
    this->nombre=nombre;
    }
    ~Barco(){}//Destructor

    void indicarBarco(){
    cout<<"Desplazamiento por agua"<<endl;
    }
    string getNombre(){
    return nombre;
    }

};
