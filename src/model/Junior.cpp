#include "Junior.h"

Junior::Junior(string nombre, double salarioBase)
    : Empleado(nombre, salarioBase) {}

double Junior::calcularSalario() {
    return salarioBase;
}