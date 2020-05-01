#ifndef TAREA_3_FUNCIONES_H
#define TAREA_3_FUNCIONES_H

#include "lib.h"
#include "ej1/Usuario.h"

//ej3
template <typename T>
void print_list(list<T> lista) {
    cout << "[";
    for (auto i = lista.begin(); i != lista.end(); ++i) {
        cout << *i;
        if (distance(i, lista.end()) > 1) cout << ", ";
    }
    cout << "]";
    cout << endl;
}

//ej1
void menu();
int op();
void registrar_usuario(vector<Usuario> &users);
void realizar_orden(vector<Usuario> &users);
bool validar_usuario(Usuario &user, vector<Usuario> &users);
void consultar_orden(vector<Usuario> &users);
void cancelar_orden(vector<Usuario> &users);

#endif //TAREA_3_FUNCIONES_H
