#include <iostream>
#include "Estado.h"
#include "Informe.h"
#include "Cliente.h"
#include "Adquisicion.h"
using namespace std;
#include <string>

int main()
{
    cout << "\nPrueba numero 1" << endl;
    Estado estado1;
    estado1.generar_fecha_salida();
    estado1.generar_fecha_llegada();

    return 0;
}