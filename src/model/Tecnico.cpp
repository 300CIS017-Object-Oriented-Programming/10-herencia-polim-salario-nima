#include "Tecnico.h"

Tecnico::Tecnico(string nombre, double salarioBase)
    : Empleado(nombre, salarioBase) {}

double Tecnico::calcularSalario() {
    return salarioBase * 1.25;
}