class Punto{
    //Atributos
private:
    int x,y;
    //Metodos
public:
    Punto(int _x,int _y){//Constructor1
        x=_x;
        y=_y;
    }
    Punto(){//Constructor 2
        x=y=0;
    }

    //Poder establecer el valor del atributo x y a trave de un metodo
    void setX(int valorX);//Establecer el valor de X
    void setY(int valorY);//Establecer el valor de Y
    int getX();//Retorna el valor de X
    int getY();//Retorna el valor de y


};
