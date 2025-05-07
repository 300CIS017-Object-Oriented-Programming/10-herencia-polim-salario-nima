#ifndef VIEW_H
#define VIEW_H

#include <vector>
#include "../model/Empleado.h"

class View {
public:
    void mostrarNomina(std::vector<Empleado*> empleados);
};

#endif