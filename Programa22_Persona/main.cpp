#include <iostream>
#include <conio.h>
#include"Persona.h"
#include"Futbolista.h"
#include"Entrenador.h"
#include"Medico.h"
using namespace std;

Persona *equipo[4];

void menu();
void viajarE();
void entrenamiento();
void partidoFutbolE();
void planificarEntrenamiento(){
    cout<<equipo[2]->getNombre()<<" "<<equipo[2]->getApellido()<<" ->"<<endl;
    ((Entrenador *)equipo[2])->planElEntrenamiento();

}

void Entrevistar(){
    cout<<equipo[0]->getNombre()<<" "<<equipo[0]->getApellido()<<" ->"<<endl;
    ((Futbolista *)equipo[0])->entrevista();
    cout<<equipo[1]->getNombre()<<" "<<equipo[1]->getApellido()<<" ->"<<endl;
    ((Futbolista *)equipo[1])->entrevista();
    //Down casting
}

void curarLesion(){
    cout<<equipo[3]->getNombre()<<" "<<equipo[3]->getApellido()<<" ->"<<endl;
    ((Medico *)equipo[3])->curarLesion();

}

int main()
{
    equipo[0]=new Futbolista("Gonzalo","Higuain",30,9,"Delantero");
    equipo[1]=new Futbolista("Paulo","Dibala",24,10,"Delantero");
    equipo[2]=new Entrenador("Massimiliano","Allegri",50,"Defensiva");
    equipo[3]=new Medico("Alex","Marroni",59,"Fisioterapeuta",20);

    menu();


    return 0;
}

void menu(){
int opcion;

do{
    cout<<"\tMenu"<<endl;
    cout<<"1.-Viaje en equipo\t2.-Entrenamiento"<<endl;
    cout<<"3.-Partido de futbol\t4.-Planificar entrenamiento"<<endl;
    cout<<"5.-Entrevista\t6.-Curar lesion"<<endl;
    cout<<"7.-Salir"<<endl;
    cout<<"Opcion:";
    cin>>opcion;

    switch(opcion){
    case 1:
        viajarE();
        break;
    case 2:
        entrenamiento();
        break;
    case 3:
        partidoFutbolE();
        break;
    case 4:
        planificarEntrenamiento();
        break;
    case 5:
        Entrevistar();
        break;
    case 6:
        curarLesion();
        break;
    case 7:
        break;
    default:
        cout<<"\nOpcion no valida"<<endl;

    }

    cout<<endl;
    system("pause");
    system("cls");

}while(opcion!=7);

}

void viajarE(){
    for(int i=0;i<4;i++){
        cout<<equipo[i]->getNombre()<<" "<<equipo[i]->getApellido()<<" ->"<<endl;
        equipo[i]->viajar();
    }
}

void entrenamiento(){

    for(int i=0;i<4;i++){
        cout<<equipo[i]->getNombre()<<" "<<equipo[i]->getApellido()<<" ->"<<endl;
        equipo[i]->entrenamiento();
    }
}

void partidoFutbolE(){

    for(int i=0;i<4;i++){
        cout<<equipo[i]->getNombre()<<" "<<equipo[i]->getApellido()<<" ->"<<endl;
        equipo[i]->partidoFutbol();
    }

}
