#include <iostream>
#include "ClaseDerivada.h"
using namespace std;

int main()
{
    ClaseDerivada *ob1= new ClaseDerivada(5,10,2);
    cout<<"X:"<<ob1->getX()<<endl;

    delete ob1;
    return 0;
}
