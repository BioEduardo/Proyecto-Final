#include <iostream>
#include <string> 
using namespace std;

class Cliente{
    string nombre;
    string direccion;
    string referencias; 
    
    public:
    Cliente() = default;
    Cliente(string nombre, string direccion, string referencias){
        this->nombre = nombre;
        this->direccion = direccion;
        this->referencias = referencias;
    }

    string getNombre(){return nombre;}
    string getDireccion(){return direccion;}
    string getReferencias(){return referencias;}


    void setNombre(string nombre){this->nombre = nombre;}
    void setDireccion(string direccion){this->direccion = direccion;}
    void setReferencias(string referencias){this->referencias = referencias;}

    void actualizarReferencias(){
        int opcion;
        cout << "Desea actualizar las referencias" << endl;
        cout << "<1> Si, deseo actualizar las referencias " << endl; 
        cout << "<2> No, mis referencias estan actualizadas" << endl;
        cout << "Seleccione la opcion que desea realizar: " ; cin >> opcion;


        switch (opcion)
            {
            case 1:
                cout << "Referencias: " ; cin >> referencias;
                cout << "Las referencias se han actualizado";
                break;
            case 2:
                cout << "Las referencias estan actualizadas" << endl;
                break;
            default:
                cout << "No se han actualizado las referencias" << endl;
            break;
            }
    }
};//Clase Alumno
