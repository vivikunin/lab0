#ifndef DTFECHA_H
#define DTFECHA_H

#include <string>
#include <set>

using namespace std;

class DTFecha{
    private: 
        int Dia;
        int Mes;
        int Anio;
    public:
        DTFecha(int, int, int);
        ~DTFecha();
        friend ostream& operator<<(ostream&, const DTFecha&);
};

#endif