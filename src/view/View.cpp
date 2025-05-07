#include "View.h"
#include <iostream>
using std::cout;
using std::endl;

void View::mostrarNomina(std::vector<Empleado*> empleados) {
    double total = 0;
    for (Empleado* emp : empleados) {
        double salario = emp->calcularSalario();
        cout << emp->getNombre() << " gana: $" << salario << endl;
        total += salario;
    }
    cout << "Total a pagar: $" << total << endl;
}