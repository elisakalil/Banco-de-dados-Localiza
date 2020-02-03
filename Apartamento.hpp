#ifndef Apartamento_hpp
#define Apartamento_hpp

#include <iostream>
using namespace std;

class Apartamento
{
    protected:
        int numero;
        float metragem;
        bool vendido;
    
    public:
        Apartamento();
        Apartamento (int n, float m, bool v);
        virtual ~Apartamento();  
        int get_numero();
        float get_metragem();
        bool get_vendido();
        void set_numero(int x);
        void set_metragem(float x);
        void set_vendido(bool x);
        void status();
        virtual void exibe_apto();
};

#endif 
