#ifndef INFORME_C
#define INFORME_C

#include <iostream>
#include "Estado.h"
using namespace std;
#include <string>

class Informe{
    private:
        string fecha_de_consulta;
        string tipo_de_producto;
    public:
    Informe() = default;
    Informe(string fecha_de_consulta, string tipo_de_producto){
        this->fecha_de_consulta = fecha_de_consulta;
        this->tipo_de_producto = tipo_de_producto;
    }
};

#endif