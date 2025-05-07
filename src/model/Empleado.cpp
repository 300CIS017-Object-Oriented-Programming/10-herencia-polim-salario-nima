#include "Empleado.h"

Empleado::Empleado(string _nombre, double _salarioBase) {
    nombre = _nombre;
    salarioBase = _salarioBase;
}

double Empleado::calcularSalario() {
    return salarioBase;
}

string Empleado::getNombre() {
    return nombre;
}