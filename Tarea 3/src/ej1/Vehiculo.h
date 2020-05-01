#ifndef TAREA_3_VEHICULO_H
#define TAREA_3_VEHICULO_H

#include "../lib.h"

class Vehiculo {
protected:
    string color;
public:
    Vehiculo(){};
    virtual string get_tipo() = 0;
};

#endif //TAREA_3_VEHICULO_H
