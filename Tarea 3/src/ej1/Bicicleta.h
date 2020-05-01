#ifndef TAREA_3_BICICLETA_H
#define TAREA_3_BICICLETA_H

#include "Vehiculo.h"

class Bicicleta : public Vehiculo {
public:
    Bicicleta(){};
    string get_tipo() {
        return "Bicicleta";
    }
};

#endif //TAREA_3_BICICLETA_H
