#ifndef Contrato_hpp
#define Contrato_hpp

#include <iostream>
#include "Apartamento.hpp"
#include "Proprietario.hpp"
#include "Data.hpp"

using namespace std;

class Contrato
{
    private:
        int numero;
        float preco;
        string data;
        Proprietario* dono;
        Apartamento* apto;
    public:
        Contrato ();
        Contrato (int n, float p, Proprietario* x, Apartamento* a , string d);
        ~Contrato();
        int get_numerocont ();
        float get_preco();
        Apartamento* get_apto();
        Proprietario* get_proprietario();
        Data* get_data();
        void set_numero (int x);
        void set_preco (float x);
        void exibe_contrato ();
};
#endif
