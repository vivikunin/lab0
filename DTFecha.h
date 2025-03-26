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
        DTFecha();
        DTFecha(int, int, int);
        DTFecha(const DTFecha&);
        ~DTFecha();
        friend ostream& operator<<(ostream&, const DTFecha&);
        bool operator>=(const DTFecha&) const;
        DTFecha& operator=(const DTFecha&);
};

#endif