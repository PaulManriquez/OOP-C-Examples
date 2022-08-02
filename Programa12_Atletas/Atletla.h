#include <iostream>
using namespace std;

class Atleta{
//Attributes
private:
    int nAtleta;
    string nombre;
    float TimeRace;
//Metodos
public:
    Atleta(int nAtleta, string nombre,float TimeRace ){//Constructor
    this->nAtleta=nAtleta;
    this->nombre=nombre;
    this->TimeRace=TimeRace;
    }

     Atleta(){}//Default constructor
    ~Atleta(){}//Destructor

    float   getTime();
    void    showData();
    static int MenorTiempo(Atleta At[],int n);
};
