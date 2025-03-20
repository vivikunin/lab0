#include "Investigador.h"
#include <string>
#include "Publicacion.h"

using namespace std;

string Investigador:: getORCID(){
    return ORCID;
}

string Investigador:: toString() const{
    return this->ORCID + "->" + this->nombre + "/" + this->institucion;
}

set<string> Investigador:: listarPublicaciones(DTFecha desde,string palabra) const{
    set<string> resultado;
    set<Publicacion*>::iterator it;
    for (it = this->publicaciones.begin(); it!=this->publicaciones.end(); it++){
        if((*it)->getFecha()>=desde){
            if((*it)->contienePalabra(palabra)){
                resultado.insert((*it)->getTitulo()); 
            }
        }
    }
    return resultado;
}

