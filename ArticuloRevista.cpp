#include "ArticuloRevista.h"
#include <string>

using namespace std;

ArticuloRevista:: ArticuloRevista(string DOI, string titulo, DTFecha fecha, string revista, string extracto)
: Publicacion(DOI, titulo, fecha){
    revista = revista;
    extracto = extracto;
}

bool ArticuloRevista:: contienePalabra(string palabra){
    return this->extracto.find(palabra);
};