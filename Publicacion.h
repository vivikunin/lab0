#ifndef PUBLICACION_H
#define PUBLICACION_H

#include <string>
#include <set>
#include "DTFecha.h"
#include "DTRefer.h"
#include "Investigador.h"

using namespace std;

class Investigador;

class Publicacion{
    private:
        string DOI;
        string titulo;
        DTFecha fecha;
        set<Investigador*> autores;
    public:
        virtual ~Publicacion();
        DTFecha getFecha();
        DTRefer getDT() const;
        string getTitulo() const;
        string getDOI();
        virtual bool contienePalabra(string)=0;
    protected:
        Publicacion(std::string, std::string, DTFecha);
};

#endif