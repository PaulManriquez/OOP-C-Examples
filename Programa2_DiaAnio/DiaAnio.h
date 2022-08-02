class DiaAnio{
    //Atributos
private:
    int mes,dia;
    //Metodos
public:
    DiaAnio(int _mes,int _dia){//Constructor
        mes=_mes;
        dia=_dia;
    }
                //Recibe un objeto dinamico
    bool igual(DiaAnio &d);
    void visualizar();

};
