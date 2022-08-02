#include <iostream>
using namespace std;

class Vehicle{
//Attributes
private:
    string marca,modelo;
    float precio;

//Methods
public:
    Vehicle(string marca,string modelo,float precio){//Constructor
    this->marca=marca;
    this->modelo=modelo;
    this->precio=precio;
    }

    Vehicle(){}//default constructor
    ~Vehicle(){}//default deconstructor


    float getPrice();
    void  showData();
    static int indexMoreCheaper(Vehicle Coches[],int n);

};
