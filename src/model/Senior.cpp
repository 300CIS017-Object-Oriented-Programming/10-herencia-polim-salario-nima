#include "Senior.h"

Senior::Senior(string nombre, double salarioBase)
    : Empleado(nombre, salarioBase) {}

double Senior::calcularSalario() {
    return salarioBase * 1.2;
}