#include <iostream>
using namespace std;

#include <string>

// Parte en equipo

class Estado{
    private:
        string fecha_salida;
        string fecha_entrega_estimada;
        string paqueteria;
        string ubicacion_producto;
        string condiciones;
    public:
        Estado() = default;
        Estado(string fecha_salida, string fecha_entrega_estimada, string paqueteria, string ubicacion_producto, string condiciones){
            this->fecha_salida = fecha_salida;
            this->fecha_entrega_estimada = fecha_entrega_estimada;
            this->paqueteria = paqueteria;
            this->ubicacion_producto = ubicacion_producto;
            this->condiciones = condiciones;
        }
        void generar_fecha_salida(){
            string dia, mes, anio;
            cout << "Dia en que saldra el paquete: "; cin >> dia;
            cout << "Mes en que saldra el paquete: "; cin >> mes;
            cout << "Anio en que saldra el paquete: "; cin >> anio;
            fecha_salida = dia + " de " + mes + " del " + anio;
            cout << fecha_salida << endl;
        }
        void generar_fecha_llegada(){
            string dia, mes, anio;
            cout << "Dia estimado en que llegara el paquete: "; cin >> dia;
            cout << "Mes estimado en que llegara el paquete: "; cin >> mes;
            cout << "Anio estimado en que llegara el paquete: "; cin >> anio;
            fecha_entrega_estimada = dia + " de " + mes + " del " + anio;
            cout << fecha_entrega_estimada << endl;
        }
};

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

int main()
{
    cout << "\nPrueba numero 1" << endl;
    Estado estado1;
    estado1.generar_fecha_salida();
    estado1.generar_fecha_llegada();

    return 0;
}