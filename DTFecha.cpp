#include "DTFecha.h"
#include <iostream>

using namespace std;

ostream& operator<<(ostream& o, const DTFecha& fecha) {
    o << fecha.Dia << "/" << fecha.Mes << "/" << fecha.Anio;
    return o;
}