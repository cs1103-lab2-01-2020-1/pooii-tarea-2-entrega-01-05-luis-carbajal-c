#ifndef TAREA_3_USUARIO_H
#define TAREA_3_USUARIO_H

#include "Orden.h"

class Usuario {
private:
    string nombre;
    vector<Orden> ordenes;
public:
    Usuario(){};
    Usuario(string &nombre){
        this->nombre = nombre;
    }
    void agregar_orden(const Orden& orden) {
        ordenes.push_back(orden);
    }
    bool operator==(const Usuario &other) {
        return (nombre == other.nombre);
    }
    void imprimir_ordenes() {
        if (ordenes.empty()) cout << "El usuario no tiene ordenes" << endl << endl;
        else {
            for (int i = 0; i < ordenes.size(); ++i) {
                cout << "Orden " << i+1 << endl;
                cout << "-----------------------" << endl;
                cout << "Codigo: " << ordenes[i].get_codigo() << endl;
                cout << "Estado: " << ordenes[i].get_estado() << endl;
                cout << "Productos:" << endl;
                ordenes[i].imprimir_productos();
                cout << "Metodo de envio: " << ordenes[i].get_envio() <<endl;
                cout << "Costo de envio (basado en n de productos y metodo en envio): " << ordenes[i].get_costo() << endl;
                cout << endl;
            }
        }
    }
    void cancel_orden(int n) {
        ordenes[n-1].set_estado("CANCELADO");
    }
};

#endif //TAREA_3_USUARIO_H
