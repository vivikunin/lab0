#ifndef LIBRO_H
#define LIBRO_H

#include <string>
#include <set>
#include "Publicacion.h"

using namespace std;

class Libro: public Publicacion{
    private:
        string editorial;
        set<string> palabrasDestacadas;
    public:
        Libro(string, string, DTFecha,string, set<string>);
        ~Libro();
        virtual bool contienePalabra(std::string);
};

#endif