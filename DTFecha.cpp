#include "DTFecha.h"
#include <iostream>

using namespace std;

DTFecha::DTFecha(){
    this->Dia = 0;
    this->Mes = 0;
    this->Anio = 0;
}

DTFecha::DTFecha(int dia, int mes, int anio){
    this->Dia = dia;
    this->Mes = mes;
    this->Anio = anio;
}

DTFecha:: DTFecha(DTFecha &fecha){
    this->Dia = fecha.Dia;
    this->Mes = fecha.Mes;
    this->Anio = fecha.Anio;
}

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

DTFecha DTFecha::operator=(DTFecha &fecha){
    this->Dia = fecha.Dia;
    this->Mes = fecha.Mes;
    this->Anio = fecha.Anio;
    return *this;
}