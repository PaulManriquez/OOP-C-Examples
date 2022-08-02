#include<iostream>
using namespace std;

class ClaseBase{
//Attributes
private:
    int numero;
//Methods
public:
    ClaseBase(int numero){//Constructor
    this->numero =numero;
    cout<<"Constructor de la base\n";
    }

    ~ClaseBase(){
    cout<<"Destructor de la clase base\n";
    }//Destructor

};
