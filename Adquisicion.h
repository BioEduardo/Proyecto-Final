#include <iostream>
#include <string>
using namespace std;

class Adquisiscion{
    string producto;
    string descripcion;
    string monto;
    string empresa;

    public:
    Adquisiscion()=default;
    void cancelarCompra();
    void verEspecificaciones();
    void contactarALaEmpresa();
};

