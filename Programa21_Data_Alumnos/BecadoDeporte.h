#include <iostream>
#include "Alumno.h"
#include "Deportista.h"

using namespace std;

class BecadoDeporte:public Alumno, public Deportista{
//Attributes
private:
    float montoBeca;
//Methods
public:
    BecadoDeporte(string nombreCarrera,string nombreEntrenador,float montoBeca)
    :Alumno(nombreCarrera),Deportista(nombreEntrenador){
        this->montoBeca=montoBeca;
    }

    ~BecadoDeporte(){}//Destructor

    void mostrarDatos(){
        Alumno::mostrarDatos();
        Deportista::mostrarDatos();
        cout<<"Monto de beca:"<<montoBeca<<endl;
    }

    void setMontoBeca(float nMonto){
        float incremento=(montoBeca*nMonto)/100;
        this->montoBeca+=incremento;
    }

    float getMontoBeca(){
        return montoBeca;
    }

};
