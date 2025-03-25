#include "DTRefer.h"
#include <iostream>
#include <set>

using namespace std;

DTRefer::DTRefer(string DOI, string titulo, DTFecha fecha, set<string> autores){
    this->DOI = DOI;
    this->titulo = titulo;
    this->fecha = fecha;
    this->autores = autores;
}

DTRefer::~DTRefer() {}

ostream& operator<<(ostream &o, const DTRefer &datos){
    o<<datos.DOI << "->"<< datos.titulo << "("<< datos.fecha <<")/";
    set<string>::iterator it;
    for (it = datos.autores.begin(); it != datos.autores.end(); ++it) {
        if (it!= datos.autores.begin()){
            o << ",";
        }
        o << *it;
    }
    return o;
}

