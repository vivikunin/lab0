#include "Publicacion.h"

using namespace std;

Publicacion:: Publicacion(string DOI, string titulo, DTFecha fecha){
    set<Investigador*> autores;
    this->DOI = DOI;
    this->titulo = titulo;
    this->fecha = fecha;
    this->autores = autores;
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

DTRefer Publicacion:: getDT(){ 
    set <string> autoresDT;
    set <Investigador*>:: iterator it;
    for (it = this->getAutores().begin(); it!=this->getAutores().end(); it++){
        autoresDT.insert((*it)->getNombre());
    }    
    DTRefer resultado(this->getDOI(), this->getTitulo(), this->getFecha(), autoresDT);
    return resultado;
}