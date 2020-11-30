#ifndef ESTADO_C
#define ESTADO_C

#include <iostream>
#include "Fecha.h"
using namespace std;

#include <string>

// Parte en equipo

class Estado{
    private:
        Fecha fecha_salida;
        Fecha fecha_entrega_estimada;
        string paqueteria;
        string ubicacion_producto;
        string condiciones;
    public:
        Estado() = default;
        Estado(Fecha fecha_salida, Fecha fecha_entrega_estimada, string paqueteria, string ubicacion_producto, string condiciones){
            this->fecha_salida = fecha_salida;
            this->fecha_entrega_estimada = fecha_entrega_estimada;
            this->paqueteria = paqueteria;
            this->ubicacion_producto = ubicacion_producto;
            this->condiciones = condiciones;
        }
        void generar_fecha_salida(){

        }
        void generar_fecha_llegada(){

        }
};

#endif