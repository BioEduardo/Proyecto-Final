#include <iostream>
#include "Estado.h"
#include "Informe.h"
#include "Cliente.h"
#include "Adquisicion.h"
using namespace std;
#include <string>

void pruebaFecha(){
    cout << "\nPrueba Fecha" << endl;
    cout << "Para comprobar e utilizar todos los metodos de esta clase, se definira y desplegara la fecha de la independencia de Mexico" << endl;
    Fecha festivo;
    festivo.setDia(10);
    festivo.setMes(9);
    festivo.setAnio(1810);
    cout << "Fecha: El dia es " << festivo.getDia() << ", el numero de mes " << festivo.getMes() << ", el anio " << festivo.getAnio() << endl;
}
void pruebaEstado(){
    string cambio;
    cout << "\nPrueba Estado" << endl;
    cout << "La prueba de esta clase funciona como si usted fuera un trabajador que debe realizar lo que cada funcion le indica. Se utilizaron todos los metodos y atributos de la clase Estado" << endl;
    Estado est1;
    cout << "\n****Generar una fecha de salida" << endl;
    est1.generar_fecha_salida();
    cout << "\n****Generar una fecha de llegada" << endl;
    est1.generar_fecha_llegada();
    cout << "\n****Actualizar las condiciones" << endl;
    est1.actualizar_condiciones();
    cout << "La condicion en que sen encuentra el paquete es: " << est1.getCondiciones() << endl;
    cout << "\n****Actualizar las ubicaciones" << endl;
    est1.acutalizar_ubicacion();
    cout << "La ubicacion en la que se encuentra el paquete es: " << est1.getUbicacionProducto() << endl;
    cout << "\n****Probar que los metodos set y get de paqueteria funcionen perfectamente" << endl;
    cout << "Nueva paqueteria "; cin >> cambio;
    est1.setPaqueteria(cambio);
    cout << "La paqueteria actual es " << est1.getPaqueteria() << endl;
}
void pruebaInforme(){
    string producto;
    cout << "\nPrueba Informe" << endl;
    cout << "La prueba de esta clase funciona como si usted fuera un usuario que desea ver como se esta desarrollando el envio." << endl;
    cout << "Se desarrollo una clase de Estado previa, con la que Informe trabajara, para mayor comodidad. Se utilizaron todos los metodos y atributos de la clase Informe" << endl;
    Estado estEjemplo{{30,11,2020},{1,1,2021},"FedEx","En la tienda","El paquete esta en perfectas condiciones"};
    Informe compre{{2,11,2020},"Alimento",estEjemplo};
    cout << "\n****Ver la fecha en que se hacer la consulta" << endl;
    cout << "La fecha que se tiene contemplada es 30/11/2020. Ingrese la fecha en la que se encuentra actualmente" << endl;
    compre.ver_fecha_de_consulta();
    cout << "\n****Ver la fecha de entrega" << endl;
    compre.ver_fecha_de_entrega();
    cout << "\n****Notificar las condiciones del pedido" << endl;
    compre.notificar_condiciones();
    cout << "\n****Notificar la paqueteria por la que se esta transportando" << endl;
    compre.notificar_paqueteria();
    cout << "\n****Notificar el lugar en el que se encuentra el pedido" << endl;
    compre.notificar_lugar();
    cout << "\n****Probar que los get y set del tipo de producto funcionen con normalidad" << endl;
    cout << "Nuevo tipo de producto: "; cin >> producto;
    compre.setTipoDeProducto(producto);
    cout << "El tipo de producto ahora es " << compre.getTipoDeProducto() << endl;

}
int main()
{
    int op;
    cout << "    Selecciona la Clase que desee probar\n";
    cout << "<1> Clase Fecha (Parte individual de Eduardo Joel Cortez Valente - A01746664)\n";
    cout << "<2> Clase Estado\n";
    cout << "<3> Clase Informe\n";
    cout << "<4> Clase Cliente\n";
    cout << "<5> Clase Adquisicion\n";
    cout << "<6> YARI AQUI PONES LA CLASE DE TU TRABAJO INDIVIDUAL :)\n";
    cout << "<7> para salir del programa\n";

    while (op != 7)
    {   
        cout << "\n ------ Opcion inicial: "; cin >> op;

        switch (op) {
        case 1:
            pruebaFecha();
            break;
        case 2:
            pruebaEstado();
            break;
        case 3:
            pruebaInforme();
            break;
        case 4:
            break;
        case 5:
            break;
        case 6:
            break;
        case 7:
            break;
        default:
            cout << "\nSelecciona una opcion inicial valida de las 7 disponibles\n";
            break;
        }
    }
    return 0;
}