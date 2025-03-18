#include "PaginaWeb.h"

using namespace std;

bool PaginaWeb:: contienePalabra(string palabra){
    return this->contenidoExtraido.find(palabra);
};