#include <iostream>
#include "Turismo.h"
#include "Deportivo.h"
#include "Furgoneta.h"

using namespace std;

int main()
{
    Turismo *T1=new Turismo("Toyota","Azul","GH89",4);
    cout<<"Color:"<<T1->getColor()<<endl;
    T1->setColor("Negro");
    cout<<"Color:"<<T1->getColor()<<endl;
    cout<<"Modelo:"<<T1->returnModel()<<endl;


    cout<<"\nHerencia privada"<<endl;
    Deportivo *D1 =new Deportivo("Audi","Blanco","KP98",8);
    cout<<"Cilindros:"<<D1->getCilindros()<<endl;
    //cout<<"Marca:"<<D1->getMarca()<<endl;

    Furgoneta *F1=new Furgoneta("Kia","Verde","K223",1200);
    cout<<"\nCarga:"<<F1->getCarga()<<endl;
    delete T1;
    delete D1;
    delete F1;
    return 0;
}
