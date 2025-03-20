#include "Publicacion.h"

using namespace std;

Publicacion:: Publicacion(string DOI, string titulo, DTFecha fecha){
    this->DOI = DOI;
    this->titulo = titulo;
    this->fecha = fecha;
}

string Publicacion:: getDOI(){
    return DOI;
}

DTFecha Publicacion::getFecha(){
    return this->fecha;
}

string Publicacion::getTitulo() const{
    return titulo;
}