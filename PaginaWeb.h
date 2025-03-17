#include <string>
#include "Publicacion.h"

using namespace std;

class PaginaWeb: public Publicacion{
    private:
        string url;
        string contenidoExtraido;
    public:
        PaginaWeb(string, string, DTFecha,string, string);
        ~PaginaWeb();
        virtual bool contienePalabra(std::string);
};

