#include "Libro.h"
#include <string>

using namespace std;

bool Libro:: contienePalabra(string palabra){
    bool encontro=false; 
    auto it = this->palabrasDestacadas.begin();
    while (!encontro && it != this->palabrasDestacadas.end()){
        encontro = (*it==palabra);
        it++;
    }   
    return encontro;
};