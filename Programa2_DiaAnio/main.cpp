#include <iostream>
#include "DiaAnio.h"
using namespace std;

int main()
{
    DiaAnio *hoy;
    DiaAnio *cumple;
    int d,m;

    cout<<"Introduzca la fecha de hoy,dia:";
    cin>>d;
    cout<<"\nIntroduzca el numero de, mes:";
    cin>>m;
    hoy= new DiaAnio(d,m);//Objeto constructor
    //En el objeto hoy ya se le asignaron esos valores
    //-------------------------------------------------
    cout<<"Introduzca la fecha de su cumpleanios,dia:";
    cin>>d;
    cout<<"\nIntroduzca el numero de mes de cumpleanios, mes:";
    cin>>m;
    cumple= new DiaAnio(d,m);//Objeto constructor

    //--------------Mostrando las fechas
    hoy->visualizar();
    cout<<endl;
    cumple->visualizar();
    cout<<endl;
    //-------------------------------------------
    //hoy->igual //El metodo recibe un objeto que se le pasa por medio de un puntero
    if(hoy->igual(*cumple)){
        cout<<"Feliz cumpleanios!"<<endl;
    }else{
        cout<<"Tenga un buen dia"<<endl;
    }


    return 0;
}
