#include "Libro.h"
#include <string>

using namespace std;

Libro:: Libro(string DOI, string titulo, DTFecha fecha, string editorial, set<string> palabrasDestacadas)
:Publicacion(DOI,titulo,fecha){
    this->editorial = editorial;
    this->palabrasDestacadas = palabrasDestacadas;
}

Libro::~Libro() {}

bool Libro:: contienePalabra(string palabra){
    bool encontro=false; 
    set<string>::iterator it = this->palabrasDestacadas.begin();
    while (!encontro && it != this->palabrasDestacadas.end()){
        encontro = (*it==palabra);
        it++;
    }   
    return encontro;
};

