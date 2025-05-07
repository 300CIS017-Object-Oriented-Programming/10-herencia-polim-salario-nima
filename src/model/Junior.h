#ifndef JUNIOR_H
#define JUNIOR_H

#include "Empleado.h"

class Junior : public Empleado {
public:
    Junior(string nombre, double salarioBase);
    double calcularSalario();
};

#endif