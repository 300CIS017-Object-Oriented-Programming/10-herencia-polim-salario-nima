#ifndef TECNICO_H
#define TECNICO_H

#include "Empleado.h"

class Tecnico : public Empleado {
public:
    Tecnico(string nombre, double salarioBase);
    double calcularSalario();
};

#endif