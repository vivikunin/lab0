#include "DTRefer.h"
#include <iostream>

using namespace std;

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

