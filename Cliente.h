#include <iostream>
#include <string> 
using namespace std;

class Cliente{
    string nombre;
    string direccion;
    string referencias; 
    
    public:
    Cliente();
    void verDireccion();
    void verNombre(); 
    void verReferencias();
    void actualizarReferencias();

};