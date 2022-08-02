#include<iostream>
#include "Tablero.h"
using namespace std;

void Tablero::MoveUp(int n){
    y+=n;
}
void Tablero::MoveDown(int n){
    y-=n;
}
void Tablero::MoveRight(int n){
    x+=n;
}
void Tablero::MoveLeft(int n){
    x-=n;
}

int Tablero::getX(){
    return x;
}

int Tablero::getY(){
    return y;
}
