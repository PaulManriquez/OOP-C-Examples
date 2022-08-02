#include <iostream>
#include "Vehicle.h"
using namespace std;

float Vehicle::getPrice(){
return precio;
}

void Vehicle::showData(){
cout<<"Precio:"<<precio<<"\tLabel:"<<marca<<"\tModel:"<<modelo<<endl;
}

int Vehicle::indexMoreCheaper(Vehicle Coches[],int n){
    int indice = 0;
    float precio;
    precio = Coches[0].getPrice();

    for(int i=1;i<n;i++){
        if(Coches[i].getPrice()<precio){
            precio=Coches[i].getPrice();
            indice=i;
        }
    }
    return indice;
}
