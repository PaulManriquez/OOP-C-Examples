#include <iostream>
using namespace std;
//Father

class Avion{
//Attributes
private:
    string modelo;
//Methods
public:
    Avion(string modelo){//Constructor
    this->modelo=modelo;
    }

    ~Avion(){}//Destructor

    void indicarAvion(){
    cout<<"Desplazamiento por aire"<<endl;
    }

    string getModelo(){
    return modelo;
    }

};
