#include<iostream>
using namespace std;

class Tablero{

//Attributes
private:
    int x,y;
//Methods
public:
    Tablero(int x, int y){//Constructor
        this->x=x;
        this->y=y;
    }

    void MoveUp(int);
    void MoveDown(int);
    void MoveRight(int);
    void MoveLeft(int);
    int getX();
    int getY();
};
