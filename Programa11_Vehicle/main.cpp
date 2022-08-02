#include <iostream>
#include "Vehicle.h"
using namespace std;

int main()
{
    Vehicle *Coches;
    int numeroVehiculos,indiceBarato;
    string marca,modelo;
    int precio;
    cout<<"Digite el numero de vehiculos:";
    cin>>numeroVehiculos;
    Coches = new Vehicle[numeroVehiculos];//Array

    for(int i=0;i<numeroVehiculos;i++){
        cout<<"\n\tType vehicle data "<<(i+1)<<":"<<endl;
        cin.ignore();//Free memory of the buffer //fflush
        cout<<"Digite la marca:";
        getline(cin,marca);
        cout<<"Digite el modelo:";
        getline(cin,modelo);
        cout<<"Digite el precio:";
        cin>>precio;

        Coches[i]= Vehicle(marca,modelo,precio);//Constructor
    }

    indiceBarato= Vehicle::indexMoreCheaper(Coches,numeroVehiculos);

    cout<<"\nLess expensive:";
    (Coches+indiceBarato)->showData();

    delete[] Coches;
    return 0;
}
