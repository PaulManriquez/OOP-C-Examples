#include <iostream>
#include "Persona.h"
using namespace std;

int main()
{
    Persona *persona1=new Persona("Paul",24);
    persona1->correr();

    Persona *persona2=new Persona("D122");
    persona2->correr(4);
    return 0;
}
