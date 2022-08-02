#include <iostream>
using namespace std;
class Cuadrilater{

//Atributes
private:
    float lado1,lado2;
//Methods
public:
    Cuadrilater(float lado1,float lado2){//1st constructor
    this->lado1=lado1;
    this->lado2=lado2;
    }
    Cuadrilater(float lado){//Second constructor
        this->lado1= this->lado2=lado;
    }
    ~Cuadrilater(){};//Destructor

    float obtenerPerimetro(){
    float perimetro = 2*(lado1+lado2);
    return perimetro;
    }
    float obtenerArea(){
    float area = lado1 * lado2;
    return area;
    }

};
