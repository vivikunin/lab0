#include <string>
#include <set>
#include "DTFecha.h"

using namespace std;

class DTRefer{
    private: 
        string DOI;
        string titulo;
        DTFecha fecha;
        set<string> autores;
    public:
        DTRefer(string, string, DTFecha, set<string>);
        ~DTRefer();
};