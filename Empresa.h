// Parte Individual
//Realizada por Yaritzi Itzayana Nicio Nicolás 
//A01745837

#ifndef EMPRESA_C
#define EMPRESA_C
#include <iostream>
#include <string> 
using namespace std;

class Empresa{
    string nombre;
    string ubicacion;
    string correo;
    string telefono;

    public:
    Empresa()= default;
    Empresa(string nombre, string ubicacion, string correo, string telefono){
        this->nombre = nombre;
        this->ubicacion = ubicacion;
        this->correo = correo;
        this->telefono = telefono;
    }
    
    string getNombre(){return nombre;}
    string getUbicacion(){return ubicacion;}
    string getCorreo(){return correo;}
    string getTelefono(){return telefono;}

    void setNombre(string nombre){this->nombre = nombre;}
    void setUbicacion(string ubicacion){this->ubicacion = ubicacion;}
    void setCorreo(string correo){this->correo = correo;}
    void setTelefono(string telefono){this->telefono = telefono;}
    
};//Clase Empresa

#endif