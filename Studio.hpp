#ifndef Studio_hpp
#define Studio_hpp
#include "Apartamento.hpp"

#include <iostream>
using namespace std;

class Studio : public Apartamento
{
    
    private:
        bool sacada;
    
    public:
        Studio ();
        Studio (int n, float m, bool v, bool s);
        ~Studio();
        bool get_sacada();
        void set_scada(bool x);
};

#endif 
