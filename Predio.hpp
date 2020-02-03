#ifndef Predio_hpp
#define Predio_hpp

#include <iostream>
#include <string.h>
#include "Apartamento.hpp"
#include "Padrao.hpp"

using namespace std;

class Predio
{
    private:
        string nome;
        string endereco;
        Apartamento* apto [15];
    
    public:
        Predio ();
        Predio (string n, string e);
        ~Predio();
        string get_nome();
        string get_endereco();
        int prox_livre();
        void exibe_predio ();
        void addApartamento (Apartamento* apto);
        Apartamento* getApartamento (int numApto);
    };
#endif 
