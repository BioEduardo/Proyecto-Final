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
void pruebaCliente(){
    cout << "\nPrueba Cliente" << endl;
    cout << "La prueba de esta clase funciona como si fuera la pagina de configuracion en una tienda online" << endl;
    Cliente client1;
    client1.setNombre("Juan Perez");
    client1.setDireccion("Calle de los Robles No. 12 Col. Prados de Iztacala Atizapan Estado de Mexico" );
    client1.setReferencias("Entre Calle 2 y Calle 5");

    cout << "Nombre: " << client1.getNombre() << endl;
    cout << "Direccion: " << client1.getDireccion() << endl;
    cout << "Referencias actuales: " << client1.getReferencias() << endl;

    cout << "\n*****Actualizar referencias"<< endl;
    client1.actualizarReferencias();
}

void pruebaAdquisicion(){
    cout << "\nPrueba Adquisicion" << endl;
    Adquisicion adqui1;
    cout << "La prueba de esta clase funciona como si fuera el usuario que checa su pedido para confirmar que es lo que espera de su producto." << endl;
    cout << "Esta clase utiliza tambien la clase Empresa, por lo que se pondran los valores de una empresa." << endl;
    
    adqui1.setProducto("Libro El visitante de Stephen King");
    adqui1.setDescripcion("El visitante de Stephen King. Dimensiones 16 x 3.4 x 23.6 cm. Idioma Espaniol. Editorial Plaza y Janes");
    adqui1.setMonto(576);

    cout << "Producto: " << adqui1.getProducto() << endl;
    cout << "Descripcion: "<< adqui1.getDescripcion() << endl;
    cout << "Monto: " << adqui1.getMonto() << " pesos" << endl;
    adqui1.getdatosEmpresa();
    adqui1.cancelar_compra();
    cout << adqui1.getCancelacion(); 
    
}

void pruebaEmpresa(){
    cout << "\nPrueba Empresa" << endl;
    cout << "Los metodos de esta clase no pueden ser modificados a peticion del usuario" << endl;
    Empresa emprEj;
    emprEj.setNombre("eBay");
    emprEj.setUbicacion("San Jose California Estados Unidos");
    emprEj.setCorreo("atencioncliente@ebay.com");
    emprEj.setTelefono("1234567");
    cout << "Empresa: " << emprEj.getNombre() << endl;
    cout << "Ubicacion de la empresa: " << emprEj.getUbicacion() << endl;
    cout << "Correo de la empresa: " << emprEj.getCorreo() << endl;
    cout << "Numero telefonico de la empresa: " << emprEj.getTelefono() << endl;
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
    cout << "<6> Clase Empresa (Parte individual de Yaritzi Itzayana Nicio Nicolas - A01745837)\n";
    cout << "<7> para salir del programa\n";

    while (op != 7)
    {   
        cout << "\n\n ------ Opcion inicial: "; cin >> op;

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
            pruebaCliente();
            break;
        case 5:
            pruebaAdquisicion();
            break;
        case 6:
            pruebaEmpresa();
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