#include "Studio.hpp"

// Construtor padrão
Studio :: Studio () : Apartamento()
{
    sacada = false;
}

// Construtor alternativo
Studio :: Studio (int n, float m, bool v, bool s) : Apartamento( n, m, v )
{
    sacada = s;
}

// Destrutor
Studio :: ~Studio()
{
     cout << "Destruindo apartamento Numero= " << numero << endl;
}

// Método get sacada
bool Studio :: get_sacada()
{
    return sacada;
}

// Método set sacada
void Studio :: set_scada(bool x)
{
    sacada = x;
}
