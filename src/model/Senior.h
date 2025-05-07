#ifndef SENIOR_H
#define SENIOR_H

#include "Empleado.h"

class Senior : public Empleado {
public:
    Senior(string nombre, double salarioBase);
    double calcularSalario();
};

#endif
