#include "Apartamento.hpp"

//construtor padrao
Apartamento :: Apartamento ()
{
    numero = 0;
    metragem = 0.00;
    vendido = false;
}

//construtor alternativo
Apartamento :: Apartamento (int n, float m, bool v)
{
    numero = n;
    metragem = m;
    vendido = v;
}

//destrutor (virtual)
Apartamento :: ~Apartamento()
{
    cout << "Destruindo apartamento Numero= " << numero << endl;
}

//método para pegar número
int Apartamento :: get_numero()
{
    return numero;
}

// método para pegar metragem
float Apartamento :: get_metragem()
{
    return metragem;
}

// método pegar vendido
bool Apartamento :: get_vendido()
{
    return vendido;
}

// método set número
void Apartamento :: set_numero(int x)
{
    numero = x;
}

// método set metragem
void Apartamento :: set_metragem(float x)
{
    metragem = x;
}

// método set vendido
void Apartamento :: set_vendido(bool x)
{
    vendido = x;
}

// método exibe apartamento
void Apartamento :: exibe_apto()
{
    if ( vendido == true )
    {
        cout << " \n Apartamento: \n" << numero << " \n metragem: \n"<< metragem << "\n Status: vendido \n " <<  endl;
    }
        else
        {
            cout << " \n Apartamento: \n" << numero << " \n metragem: \n"<< metragem << "\n Status: não vendido \n " << endl;
        }
}
 
