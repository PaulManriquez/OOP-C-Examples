//Herencia privada
#include <iostream>
#include "Vehiculo.h"
using namespace std;
                    //Herencia privada
class Deportivo : private Vehiculo{
//Attributes
private:
    int cilindros;

//Methods
public:
    //Constructor
    Deportivo(string marca,string color,string modelo,int cilindros):Vehiculo(marca,color,modelo){
    this->cilindros=cilindros;
    }

    ~Deportivo(){}//Destructor

    int getCilindros(){
    return cilindros;
    }




};
