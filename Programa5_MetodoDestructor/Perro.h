#include<iostream>
using namespace std;
class Perro{
//Atributos
    private:
     string nombre,raza;
//Metodos
 public:
    Perro(string _nombre,string _raza){
        nombre=_nombre;
        raza = _raza;
    }

    ~Perro(){}//Metodo destructor

    void mostrarDatos();
    void jugar();
};
