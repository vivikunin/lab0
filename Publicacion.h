#ifndef PUBLICACION_H
#define PUBLICACION_H

#include <string>
#include <set>
#include "DTFecha.h"
#include "DTRefer.h"
#include "Investigador.h"

using namespace std;

class Publicacion{
    private:
        string DOI;
        string titulo;
        DTFecha fecha;
        Investigador *autor;
    public:
        Publicacion(std::string, std::string, DTFecha);
        ~Publicacion();
        DTFecha getFecha() const;
        DTRefer getDT() const;
        string getTitulo() const;
        virtual bool contienePalabra(string)=0;
};

#endif