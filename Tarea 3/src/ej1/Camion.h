#ifndef TAREA_3_CAMION_H
#define TAREA_3_CAMION_H

#include "Vehiculo.h"

class Camion : public Vehiculo {
public:
    Camion(){};
    string get_tipo() {
        return "Camion";
    }
};

#endif //TAREA_3_CAMION_H
