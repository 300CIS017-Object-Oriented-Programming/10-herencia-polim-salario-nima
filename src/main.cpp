#include <iostream>
#include <vector>
#include "model/Junior.h"
#include "model/Senior.h"
#include "model/Tecnico.h"
#include "model/Tester.h"
#include "view/View.h"

int main() {
    std::vector<Empleado*> empleados;
    empleados.push_back(new Junior("Miguel", 1500));
    empleados.push_back(new Junior("Luis", 1200));
    empleados.push_back(new Senior("Carlos", 2500));
    empleados.push_back(new Senior("Luisa", 3100));
    empleados.push_back(new Tecnico("Pedro", 2000));
    empleados.push_back(new Tecnico("Gabriel", 2100));
    empleados.push_back(new Tester("Isabela", 1000));
    empleados.push_back(new Tester("Andres", 1600));

    View vista;
    vista.mostrarNomina(empleados);

    for (Empleado* emp : empleados) {
        delete emp;
    }

    return 0;
}