#include <iostream>
#include "Animal.h"
using namespace std;

class AnimalCarniboro:public Animal{
//Methods
public:
    void alimentarse(){
    cout<<"El animal carnivoro se alimenta de carne"<<endl;
    }

};
