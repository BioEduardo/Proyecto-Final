#ifndef INFORME_C
#define INFORME_C

#include <iostream>
#include "Estado.h"
#include "Fecha.h"

using namespace std;
#include <string>

class Informe{
    private:
        Fecha fecha_de_consulta;
        string tipo_de_producto;
        Estado estado;
    public:
    Informe() = default;
    Informe(Fecha fecha_de_consulta, string tipo_de_producto, Estado estado){
        this->fecha_de_consulta = fecha_de_consulta;
        this->tipo_de_producto = tipo_de_producto;
        this->estado = estado;
    }

    //int getDia(){return dia;}
    Fecha getFechaConsulta(){return fecha_de_consulta;}
    string getTipoDeProducto(){return tipo_de_producto;}

    void setTipoDeProducto(string tipo_de_producto){this->tipo_de_producto = tipo_de_producto;}

    void ver_fecha_de_consulta(){
        int d, m, a;
        //cout << "Seleccione la opcion que desea realizar: " ; cin >> op;
        cout << "La consulta del estado de su paquete se esta haciendo el dia: "; cin >> d;
        cout << "En el mes numero: "; cin >> m;
        cout << "En el anio: "; cin >> a;
        fecha_de_consulta.setDia(d);
        fecha_de_consulta.setMes(m);
        fecha_de_consulta.setAnio(a);
        cout << "Fecha en que se esta realizando la consulta: " << fecha_de_consulta.getDia() << "/" << fecha_de_consulta.getMes() << "/" << fecha_de_consulta.getAnio() << endl;
    }
    void ver_fecha_de_entrega(){
        cout << "Su paquete llegara en esta fecha: " << estado.getFechaEntrega().getDia() << "/" << estado.getFechaEntrega().getMes() << "/" << estado.getFechaEntrega().getAnio() << endl;
    }
    void notificar_condiciones(){
        cout << "Las condiciones de su paquete son las siguientes: " << estado.getCondiciones() << endl;
    }
    void notificar_paqueteria(){
        cout << "La paqueteria que se encuentra a cargo de su paquete es: " << estado.getPaqueteria() << endl;
    }
    void notificar_lugar(){
        if ((fecha_de_consulta.getDia() == estado.getFechaEntrega().getDia()) && (fecha_de_consulta.getMes() == estado.getFechaEntrega().getMes()) && (fecha_de_consulta.getAnio() == estado.getFechaEntrega().getAnio())){
            cout << "Felicidades. Su paquete le sera entregado hoy. Mantengase pendiente del portico de su casa" << endl;
        } 
        else
        {
            cout << "El producto se encuentra en: " << estado.getUbicacionProducto() << endl;
            cout << "Si tiene alguna pregunta, puede ponerse en contacto con la empresa" << endl;
        }
    }
};

#endif