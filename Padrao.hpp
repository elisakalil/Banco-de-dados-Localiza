#ifndef Padrao_hpp
#define Padrao_hpp

#include "Apartamento.hpp"

#include <iostream>
using namespace std;

class Padrao : public Apartamento
{
    
    private:
        int quartos;
        bool sacada;
    
    public:
        Padrao ();
        Padrao (int n, float m, bool v, int q, bool s);
        ~Padrao();
        int get_quartos();
        bool get_sacada();
        void set_quartos (int x);
        void set_sacada (bool x);       
};

#endif
