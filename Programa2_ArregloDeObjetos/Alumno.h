class Alumno{
//Atributos
private:
    float calMate,calProgra,promedio;

//Metodos
public:
    Alumno(){//Constructor por defecto

    }
    Alumno(float _calMate,float _calProgra){
        calMate = _calMate;
        calProgra = _calProgra;
    }
    void pedirDatos();
    void mostrarDatos();

};
