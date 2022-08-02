#include <iostream>
#include "Atletla.h"
using namespace std;
//Quien lo hizo en el menor tiempo posible
int main()
{
    int i,numberAt,lesstime;
    //------------
    int     nAtleta;
    string  Nombre;
    float   Time;
    //------------
    cout<<"\tTime race\n";
    cout<<"Digite el numero de participantes:";//Creacion de objetos
    cin >>numberAt;
    putchar('\n');

    Atleta *At;

    At = new Atleta[numberAt];

    for(i=0;i<numberAt;i++){
        cout<<"\nTeclea la informacion del participante "<<(i+1)<<":"<<endl;
        cin.ignore();//Free memory of the buffer //fflush
        cout<<"Digite numero de atleta:";
        cin >> nAtleta;
        cin.ignore();
        cout<<"Digite el nombre del atleta:";
        getline(cin,Nombre);
        cout<<"Digite el tiempo de carrera:";
        cin>>Time;
        At[i]= Atleta(nAtleta,Nombre,Time);//Constructor
    }

    lesstime= Atleta::MenorTiempo(At,numberAt);
    cout<<"\tMenor tiempo\n";
    (At+lesstime)->showData();

    delete []At;
    return 0;
}
