#include "Publicacion.h"

using namespace std;

Publicacion:: Publicacion(string DOI, string titulo, DTFecha fecha){
    this->DOI = DOI;
    this->titulo = titulo;
    this->fecha = fecha;
}

Publicacion::~Publicacion() {
}

string Publicacion:: getDOI() const{
    return DOI;
}

DTFecha Publicacion::getFecha(){
    return this->fecha;
}

string Publicacion::getTitulo() const{
    return titulo;
}

set<Investigador*> Publicacion::getAutores() const{
    return autores;
}

void Publicacion::agregarAutor(Investigador* I){
    this->autores.insert(I);
}