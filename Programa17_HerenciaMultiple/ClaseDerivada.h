#include <iostream>
#include "ClaseBase1.h"
#include "ClaseBase2.h"
using namespace std;

class ClaseDerivada: public ClaseBase1,ClaseBase2{

//Attributes
protected:
    int x;
//Methods
public:
    ClaseDerivada(int x1,int x2,int x):ClaseBase1(x1),ClaseBase2(x2){//Constructor
    this->x = x;
    }

    ~ClaseDerivada(){}//Destructor

    int getX(){
    return x; //return ClaseBase1::x; return ClaseBase2::x;
                //Ambiguity Resolution<<-------------------
    }


};
