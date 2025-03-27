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
        virtual DTRefer getDT();
        string getTitulo() const;
        string getDOI() const;
        const set<Investigador*>& getAutores() const;
        virtual bool contienePalabra(string)=0;
        void agregarAutor(Investigador* );
        
    protected:
        Publicacion(std::string, std::string, DTFecha);
};

#endif