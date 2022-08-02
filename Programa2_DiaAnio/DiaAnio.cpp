#include <iostream>
#include "DiaAnio.h"

using namespace std;
                            //recibe un objeto de tipo clase DiaAnio
bool DiaAnio::igual(DiaAnio &d){
       //dia accede al atributo dia de este objeto
    if(dia==d.dia && mes==d.mes){
            //d.dia accede al atributo del objeto INSTANCIADO
        return true;
    }else{
        return false;
    }

}

void DiaAnio::visualizar(){
    cout<<"Mostrando los datos:"<<endl;
    cout<<"Mes:"<<mes<<"\nDia:"<<dia<<endl;
}
