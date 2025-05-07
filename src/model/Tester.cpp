#include "Tester.h"

Tester::Tester(string nombre, double salarioBase)
    : Empleado(nombre, salarioBase) {}

double Tester::calcularSalario() {
    return salarioBase * 1.05;
}