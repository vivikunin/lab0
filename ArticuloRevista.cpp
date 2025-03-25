#include "ArticuloRevista.h"
#include <string>

using namespace std;

ArticuloRevista:: ArticuloRevista(string DOI, string titulo, DTFecha fecha, string revista, string extracto)
: Publicacion(DOI, titulo, fecha){
    this->revista = revista;
    this->extracto = extracto;
}

bool ArticuloRevista:: contienePalabra(string palabra){
    return this->extracto.find(palabra);
}

ArticuloRevista::~ArticuloRevista() {}

DTRefer ArticuloRevista::getDT(){
    set <string> autoresDT;
    set <Investigador*>:: iterator it;
    for (it = this->getAutores().begin(); it!=this->getAutores().end(); it++){
        autoresDT.insert((*it)->getNombre());
    }    
    DTRefer resultado(this->getDOI(), this->getTitulo(), this->getFecha(), autoresDT);
    return resultado;
}