#include <iostream>
#include "Atletla.h"
using namespace std;

float Atleta::getTime(){
return TimeRace;
}

void Atleta::showData(){
    cout<<"No Atleta:"<<nAtleta<<"\tNombre:"<<nombre<<"\tTiempo de carrera:"<<TimeRace<<endl;
}

int Atleta::MenorTiempo(Atleta At[],int n){
    int indice = 0;
    float timee;
    timee = At[0].getTime();

    for(int i=1;i<n;i++){
        if(At[i].getTime()<timee){
            timee=At[i].getTime();
            indice=i;
        }
    }
    return indice;
}
