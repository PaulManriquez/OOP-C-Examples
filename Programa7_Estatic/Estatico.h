#include<iostream>
using namespace std;

class Estatico{
//Atributes
private:
    static int contador; //<<----
    //The static you need to initialize in the other file
public:
    Estatico(){//Constructor
    contador++;
    }

    int getContador(){
    return contador;
    }

    static int sumar(int n1, int n2){
        int suma= n1 + n2;
        return suma;
    }

};
