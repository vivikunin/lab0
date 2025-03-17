#include <string>
#include <set>
#include "DTFecha.h"
#include "DTRefer.h"

using namespace std;

class Investigador;

class Publicacion{
    private:
        string DOI;
        string titulo;
        DTFecha fecha;
        Investigador *autor;
    public:
        Publicacion(std::string, std::string, DTFecha);
        ~Publicacion();
        DTRefer getDT() const;
        virtual bool contienePalabra(string)=0;
};