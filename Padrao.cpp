#include "Padrao.hpp"

//Construtor padrão
Padrao :: Padrao () : Apartamento()
{
    quartos=0;
    sacada=false;
}

// Construtor alternativo
Padrao :: Padrao (int n, float m, bool v, int q, bool s) : Apartamento (n, m, v)
{
    if(q>3)
    {
        cout << "Número de quartos excedidos, máximo 3" << endl;
        quartos = 3;
    }
    quartos=q;
    sacada=s;
}

// Destrutor
Padrao :: ~Padrao()
{
    cout << "Destruindo apartamento Numero= " << numero << endl;
}

// Método get quartos
int Padrao :: get_quartos()
{
    return quartos;
}

// Método get sacada
bool Padrao :: get_sacada()
{
    return sacada;
}

// Método set quartos
void Padrao :: set_quartos (int x)
{
    quartos = x;
}

// Método set sacada
void Padrao :: set_sacada (bool x)
{
    sacada = x;
}
