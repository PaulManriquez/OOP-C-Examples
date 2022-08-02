#include <iostream>
#include "Planta.h"
#include "AnimalCarniboro.h"
#include "AnimalHerbivoro.h"

using namespace std;

int main()
{
    Planta *planta1 = new Planta();
    planta1->alimentarse();

    AnimalCarniboro *AnC1=new AnimalCarniboro();
    AnC1->alimentarse();

    AnimalHerbivoro *AnH1=new AnimalHerbivoro();
    AnH1->alimentarse();
    return 0;
}
