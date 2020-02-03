#include "Kitnet.hpp"

// Construtor Padrão
Kitnet :: Kitnet () : Apartamento()
{
    cozInt = false;
}

//Construtor alternativo
Kitnet :: Kitnet (int n, float m, bool v, bool ci) : Apartamento ( n, m, v)
{
    cozInt = ci;
}

// Destrutor
Kitnet :: ~Kitnet()
{
    cout << "Destruindo Apartamento Numero= " << numero << endl;
}

// Método get cozinha
bool Kitnet :: get_cozInt()
{
    return cozInt;
}

//Método set cozinha
void Kitnet :: set_cozInt(bool x)
{
    cozInt = x;
}
