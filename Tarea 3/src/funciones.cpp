#include "funciones.h"



int op() {
    int op;
    cout << "1.- Registrar usuario" << endl;
    cout << "2.- Realizar orden" << endl;
    cout << "3.- Consultar ordenes" << endl;
    cout << "4.- Cancelar orden" << endl;
    cout << "5.- Salir" << endl;
    cout << "\nSeleccione un numero: ";
    cin >> op;
    cout << endl;
    return op;
}

void registrar_usuario(vector<Usuario> &users) {
    string nombre;
    cout << "Nombre: "; cin >> nombre;
    Usuario user(nombre);
    if (users.empty()) {
        users.push_back(user);
        cout << "Usuario registrado." << endl << endl;
    }
    else {
        int cond = 0;
        for (size_t i = 0; i < users.size(); ++i) {
            if (user == users[i]) {
                cout << "El usuario ya existe." << endl << endl;
                cond = 1;
                break;
            }
        }
        if (cond == 0) {
            users.push_back(user);
            cout << "Usuario registrado." << endl << endl;
        }
    }
}

bool validar_usuario(Usuario &user, vector<Usuario> &users) {
    for (size_t i = 0; i < users.size(); ++i) {
        if (user == users[i]) return true;
    }
    return false;
}

void realizar_orden(vector<Usuario> &users) {
    string nombre;
    cout << "Nombre: "; cin >> nombre;
    Usuario user(nombre);
    if (validar_usuario(user, users)) {
        for (int i = 0; i < users.size(); ++i) {
            if (user == users[i]) {
                int n;
                Orden orden;
                cout << "Numero de productos: "; cin >> n; cout << endl;
                cout << "Productos a ordenar: " << endl;
                orden.llenar_orden(n);
                int temp;
                do {
                    cout << "Escoger metodo de envio: Bicicleta (1), Camion (2) " << endl;
                    cin >> temp;
                } while (temp != 1 && temp != 2);
                orden.metodo_envio(temp);
                users[i].agregar_orden(orden);
                cout << "Se ha realizado la orden." << endl << endl;
                break;
            }
        }
    }
    else cout << "El usuario no existe" << endl << endl;
}

void consultar_orden(vector<Usuario> &users) {
    string nombre;
    cout << "Nombre: "; cin >> nombre;
    Usuario user(nombre);
    if (validar_usuario(user, users)) {
        for (int i = 0; i < users.size(); ++i) {
            if (users[i] == user) {
                users[i].imprimir_ordenes();
                break;
            }
        }
    }
    else cout << "El usuario no existe" << endl << endl;
}

void cancelar_orden(vector<Usuario> &users) {
    string nombre;
    cout << "Nombre: "; cin >> nombre;
    Usuario user(nombre);
    if (validar_usuario(user, users)) {
        int n;
        cout << "Numero de orden a cancelar: "; cin >> n;
        cout << endl;
        for (int i = 0; i < users.size(); ++i) {
            if (users[i] == user) {
                users[i].cancel_orden(n);
                cout << "Orden cancelada." << endl << endl;
                break;
            }
        }
    }
    else cout << "El usuario no existe" << endl << endl;
}

void menu() {
    int n;
    vector<Usuario> users;
    while (n != 5) {
        n = op();
        switch(n){
            case 1: registrar_usuario(users); break;
            case 2: realizar_orden(users); break;
            case 3: consultar_orden(users); break;
            case 4: cancelar_orden(users); break;
            case 5: break;
            default: break;
        }
    }
}
