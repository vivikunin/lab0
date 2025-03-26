#ifndef ARTICULOREVISTA_H  
#define ARTICULOREVISTA_H

#include <string>
#include <set>
#include "Publicacion.h"
#include "DTFecha.h"
#include "DTRefer.h"


using namespace std;

class ArticuloRevista: public Publicacion {
    private:
        string revista;
        string extracto;
    public:
        ArticuloRevista(string, string, DTFecha, string, string);
        ~ArticuloRevista();
        virtual bool contienePalabra(std::string);
        //DTRefer getDT() ;
};

#endif