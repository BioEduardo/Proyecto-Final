#ifndef ESTADO_C
#define ESTADO_C

#include <iostream>
#include "Fecha.h"
using namespace std;

#include <string>

class Estado{
    private:
        Fecha fecha_de_salida;
        Fecha fecha_de_entrega;
        string paqueteria;
        string ubicacion_del_producto;
        string condiciones;
    public:
        Estado() = default;
        Estado(Fecha fecha_de_salida, Fecha fecha_de_entrega, string paqueteria, string ubicacion_del_producto, string condiciones){
            this->fecha_de_salida = fecha_de_salida;
            this->fecha_de_entrega = fecha_de_entrega;
            this->paqueteria = paqueteria;
            this->ubicacion_del_producto = ubicacion_del_producto;
            this->condiciones = condiciones;
        }
        
        Fecha getFechaSalida(){return fecha_de_salida;}
        Fecha getFechaEntrega(){return fecha_de_entrega;}
        string getPaqueteria(){return paqueteria;}
        string getUbicacionProducto(){return ubicacion_del_producto;}
        string getCondiciones(){return condiciones;}

        void setPaqueteria(string paqueteria){this->paqueteria = paqueteria;}

        void generar_fecha_salida(){
            int d, m, a;
            cout << "Indique la fecha en que el paquete salio" << endl;
            cout << "Dia: "; cin >> d;
            cout << "N. Mes: "; cin >> m;
            cout << "Anio: "; cin >> a;
            fecha_de_salida.setDia(d);
            fecha_de_salida.setMes(m);
            fecha_de_salida.setAnio(a);
            cout << "Se registro que la salida del paquete fue el dia " << fecha_de_salida.getDia() << " en el mes numero " << fecha_de_salida.getMes() << " del anio " << fecha_de_salida.getAnio() << endl;
        }
        void generar_fecha_llegada(){
            int d, m, a;
            cout << "Indique la fecha en que el paquete llegara a su destino" << endl;
            cout << "Dia: "; cin >> d;
            cout << "N. Mes: "; cin >> m;
            cout << "Anio: "; cin >> a;
            fecha_de_entrega.setDia(d);
            fecha_de_entrega.setMes(m);
            fecha_de_entrega.setAnio(a);
            cout << "El paquete llegara el dia " << fecha_de_entrega.getDia() << " en el mes numero " << fecha_de_entrega.getMes() << " del anio " << fecha_de_entrega.getAnio() << endl;
        }

        void actualizar_condiciones(){
            int op;
            cout << "Por favor, indique las nuevas condiciones en las que se encuentra el paquete\n";
            cout << "<1> El paquete esta en perfectas condiciones\n";
            cout << "<2> El paquete ha sufrido desperfectos\n";
            cout << "<3> El paquete se encuentra comprometido. Favor de ponerse en contacto con el proveedor\n";
            cout << "Si no desea actualizar las condiciones, seleccione un numero distinto a los anteriores\n";
            cout << "Seleccione la opcion que desea realizar: " ; cin >> op;

            switch (op)
            {
            case 1:
                condiciones = "El paquete esta en perfectas condiciones";
                break;
            case 2:
                condiciones = "El paquete ha sufrido desperfectos";
                break;
            case 3:
                condiciones = "El paquete se encuentra comprometido. Favor de ponerse en contacto con el proveedor";
                break;
            default:
                cout << "Las condiciones no se han actualizado" << endl;
                break;
            }
        }    

        void acutalizar_ubicacion(){
            int op;
            cout << "Seleccione el punto comun en el que se encuentra el paquete\n";
            cout << "<1> En la tienda\n";
            cout << "<2> En una paqueteria\n";
            cout << "<3> Siendo transportado\n";
            cout << "<4> Se ha perdido la ubicacion actual. Favor de ponerse en contacto con el proveedor\n";
            cout << "Si no desea actualizar la ubicacion, seleccione un numero distinto a los anteriores\n";
            cout << "Seleccione la opcion que desea realizar: " ; cin >> op;
            switch (op)
            {
            case 1:
                ubicacion_del_producto = "En la tienda";
                break;
            case 2:
                ubicacion_del_producto = "En una paqueteria";
                break;
            case 3:
                ubicacion_del_producto = "Siendo transportado";
                break;
            case 4:
                ubicacion_del_producto = "Se ha perdido la ubicacion actual";
                break;
            default:
                cout << "La ubicacion no se ha actualizado" << endl;
                break;
            }
        }
}; // Clase estado

#endif