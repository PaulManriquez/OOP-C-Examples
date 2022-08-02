#include <iostream>
#include "Alumno.h"
#include "Deportista.h"
#include "BecadoDeporte.h"
using namespace std;

int main()
{
    Alumno *alumnoJuan=new Alumno("Informatica");
    Alumno *alumnoPedro=new Alumno("Systemas");
    Deportista *deporLuis=new Deportista("Popeye");
    BecadoDeporte *bdAna=new BecadoDeporte("Administracion","Pedro",1200);
    BecadoDeporte *bdCarmen=new BecadoDeporte("Contabilidad","La roca",1350);

    cout<<"Mostrando datos"<<endl;
    cout<<"Mostrando datos de alumnoJuan:"<<endl;
    alumnoJuan->mostrarDatos();
    cout<<"Mostrando datos de alumno pedro"<<endl;
    alumnoPedro->mostrarDatos();
    cout<<"Mostrando datos de depor Luis"<<endl;
    deporLuis->mostrarDatos();
    cout<<"Mostrando Datos de bdAna"<<endl;
    bdAna->mostrarDatos();
    cout<<"Mostrando Datos de bdCarmen"<<endl;
    bdCarmen->mostrarDatos();
    //--------------------------------------------
    string nuevaCarrera;
    cout<<"Digite la nueva carrera de Juan:"<<endl;
    getline(cin,nuevaCarrera);
    alumnoJuan->setNombreCarrera(nuevaCarrera);

    cout<<"Digite la nueva carrera de Ana:"<<endl;
    getline(cin,nuevaCarrera);
    bdAna->setNombreCarrera(nuevaCarrera);

    cout<<"\nLa nueva carrera de alumno Juan es:"<<alumnoJuan->getNombreCarrera()<<endl;
    cout<<"La nueva carrera de Ana es:"<<bdAna->getNombreCarrera()<<endl;

    string nuevoEntrenador;
    cout<<"Digite el nombre del nuevo entrenador:"<<endl;
    getline(cin,nuevoEntrenador);
    deporLuis->setNEntrenador(nuevoEntrenador);
    cout<<"Digite el nombre del nuevo entrenador Carmen:"<<endl;
    getline(cin,nuevoEntrenador);
    bdCarmen->setNEntrenador(nuevoEntrenador);
    cout<<"\nEl nuevo entrenador de deporLuis es:"<<deporLuis->getNEntrenador()<<endl;
    cout<<"\nEl nuevo entrenador de Carmen es:"<<bdCarmen->getNEntrenador()<<endl;

    float incremento;
    cout<<"\nDigite el incremento de bdAna:";
    cin>>incremento;
    bdAna->setMontoBeca(incremento);
    cout<<"Digite el incremento de bdCarmen:";
    cin>>incremento;
    bdCarmen->setMontoBeca(incremento);
    cout<<"El nuevo monto beca de Ana es:"<<bdAna->getMontoBeca()<<endl;
    cout<<"El nuevo monto beca de Carmen es:"<<bdCarmen->getMontoBeca()<<endl;


    delete alumnoJuan;
    delete alumnoPedro;
    delete deporLuis;
    delete bdAna;
    delete bdCarmen;
    return 0;
}
