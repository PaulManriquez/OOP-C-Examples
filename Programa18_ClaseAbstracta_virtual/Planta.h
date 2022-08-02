#include <iostream>
#include "SerVivo.h"
using namespace std;

class Planta: public SerVivo{
//Method
public:
    void alimentarse(){
    cout<<"La planta se alimenta por medio de la fotosintesis"<<endl;
    }

};


