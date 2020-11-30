#ifndef FECHA_C
#define FECHA_C
#include <iostream>
using namespace std;

class Fecha{
    private:
    int dia;
    int mes;
    int anio;

    public:
    Fecha() = default;
    Fecha(int Dia, int Mes, int Anio) : dia{Dia}, mes{Mes}, anio{Anio}
    {
    }

    int getDia(){return dia;}
    int getMes(){return mes;}
    int getAnio(){return anio;}

    void setDia(int dia){this->dia=dia;}
    void setMes(int mes){this->mes=mes;}
    void setMes(int anio){this->anio=anio;}

}; //Clase fecha

#endif