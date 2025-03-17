#include <string>
#include <set>
#include "DTFecha.h"
#include "Publicacion.h"

using namespace std;

class Investigador{
    private: 
        string ORCID;
        string nombre;
        string institucion;
        set<Publicacion*> publicaciones;
    public:
        Investigador(string, string, string);
        ~Investigador();
        string toString() const;
        set<string> listarPublicaciones(DTFecha,string) const;
};