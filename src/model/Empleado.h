#ifndef EMPLEADO_H
#define EMPLEADO_H

#include <string>
using std::string;

class Empleado {
protected:
    string nombre;
    double salarioBase;

public:
    Empleado(string _nombre, double _salarioBase);
    virtual double calcularSalario();
    string getNombre();
    virtual ~Empleado() {}
};

#endif