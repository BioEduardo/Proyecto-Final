#ifndef ADQUISICION_C
#define ADQUISICION_C
#include <iostream>
#include <string>
#include "Empresa.h"
using namespace std;

class Adquisicion{
    string producto;
    string descripcion;
    int monto;
    string cancelacion;
    Empresa datos_de_empresa;

    public:
    Adquisicion()=default;
    Adquisicion(string producto, string descripcion, int monto, string cancelacion, Empresa datos_de_empresa){
        this->producto = producto;
        this->descripcion = descripcion;
        this->monto = monto;
        this->cancelacion = cancelacion; 
        this->datos_de_empresa = datos_de_empresa;
    }
      

    void setProducto(string producto){this->producto = producto;}
    void setDescripcion(string dscripcion){this->descripcion = descripcion;}
    void setMonto(int Monto){this->monto = monto;}

    string getProducto(){return producto;}
    string getDescripcion(){return descripcion;}
    int  getMonto(){return monto;}
    string getCancelacion(){return cancelacion;}
    Empresa getdatosEmpresa(){return datos_de_empresa;}
    
    void cancelar_compra(){
        int opcion;
        cout << "Desea cancelar la compra\n";
        cout << "<1> Si, cancelar compra\n";
        cout << "<2> No, seguire esperando mi compra\n";
        cout << "Seleccione la opcion:  " ; cin >> opcion;
    
        switch (opcion)
            {
            case 1:
                cancelacion = "El pedido se ha cancelado\n";
                break;
            case 2:
                cancelacion = "Seguira esperando el pedido\n";
                break;
            default:
                cout << "No ha cancelado ningun pedido" << endl;
            break;
            }
    }


};// Clase Adquisicion 

#endif