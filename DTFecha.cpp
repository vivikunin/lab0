#include "DTFecha.h"
#include <iostream>

using namespace std;

ostream& operator<<(ostream& o, const DTFecha& fecha) {
    o << fecha.Dia << "/" << fecha.Mes << "/" << fecha.Anio;
    return o;
}

bool DTFecha::operator>=(const DTFecha &fecha) const{
    bool resultado = false;
    if (Anio < fecha.Anio) resultado = true;
    else if (Anio == fecha.Anio) {
        if (Mes < fecha.Mes) resultado = true;
        else if (Mes == fecha.Mes) {
            if (Dia <= fecha.Dia) resultado = true;
        }
    }
    return resultado;
}