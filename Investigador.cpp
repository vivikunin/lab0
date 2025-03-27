#include "Investigador.h"
#include <string>
#include <set>
#include "Publicacion.h"

using namespace std;

Investigador::Investigador(string ORCID, string nombre, string institucion){
    this->ORCID = ORCID;
    this->nombre = nombre;
    this->institucion = institucion;
    set<Publicacion*> publicaciones;
    this->publicaciones=publicaciones;
}

Investigador::~Investigador(){}

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

string Investigador::getNombre() const{
    return nombre;
}

void Investigador::agregarPublicacion(Publicacion* P){
    this->publicaciones.insert(P);
}

void Investigador::eliminarPublicacion(Publicacion* P){
    this->publicaciones.erase(P);
}