#include <iostream>
#include "Tablero.h"
#include <conio.h>

using namespace std;

int main()
{
    Tablero *ob1;
    int x,y,option,n;
    int key;
    cout<<"Put x position:"; cin >>x;
    cout<<"Put y position:"; cin >>y;

    ob1=new Tablero(x,y);

    do{
        cout<<"\tMenu"<<endl;
        cout<<"1.-Move up \t2.-Move Down"<<endl;
        cout<<"3.-Move Right \t4.-Move Left"<<endl;
        cin>>option;

        if(option>=1 && option<=4){
            cout<<"Type how many position you want to move:";cin>>n;

        }

            switch(option){
            case 1:
                ob1->MoveUp(n);
                cout<<"X:"<<ob1->getX()<<"Y:"<<ob1->getY();
                break;
            case 2:
                ob1->MoveDown(n);
                cout<<"X:"<<ob1->getX()<<"Y:"<<ob1->getY();
                break;
            case 3:
                ob1->MoveRight(n);
                cout<<"X:"<<ob1->getX()<<"Y:"<<ob1->getY();
                break;
            case 4:
                ob1->MoveLeft(n);
                cout<<"X:"<<ob1->getX()<<"Y:"<<ob1->getY();
                break;
            default:
                cout<<"Option doesn't exist\n";
                break;
            }
                cout<<"Continue? press 1";
                cin>>key;
                system("cls");
    }while(key==1);

    return 0;
}
