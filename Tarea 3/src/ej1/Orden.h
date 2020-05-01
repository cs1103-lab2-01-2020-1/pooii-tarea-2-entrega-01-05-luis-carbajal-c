#ifndef TAREA_3_ORDEN_H
#define TAREA_3_ORDEN_H

#include <utility>

#include "../lib.h"
#include "Bicicleta.h"
#include "Camion.h"

class Orden {
private:
    vector<string> productos;
    long int codigo;
    string estado;
    double costo = 0;
    Vehiculo* envio = nullptr;
public:
    Orden(){
        srand(time(nullptr));
        codigo = 10000 + (rand() % (99999 - 10000 + 1));
        estado = "EN PROCESO";
    };
    void llenar_orden(int n){
        string producto;
        for (int i = 0; i < n; ++i) {
            cin >> producto;
            productos.push_back(producto);
        }
        costo += 0.5*n;
    }
    void metodo_envio(int n) {
        if (n == 1) {
            envio = new Bicicleta();
            costo += 2;
        }
        if (n == 2) {
            envio = new Camion();
            costo += 5;
        }
    }
    void imprimir_productos() {
        for (size_t i = 0; i < productos.size(); ++i) {
            cout << "- " << productos[i] << endl;
        }
    }
    long int get_codigo() {
        return codigo;
    }
    double get_costo() {
        return costo;
    }
    string get_estado() {
        return estado;
    }
    string get_envio() {
        //envio = new Camion();
        return envio->get_tipo();
    }
    void set_estado(string str) {
        estado = str;
    }
};

#endif //TAREA_3_ORDEN_H
