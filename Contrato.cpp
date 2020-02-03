#include "Contrato.hpp"

// Construtor padrão
Contrato :: Contrato ()
{
    numero = 0;
    preco = 0.00;
    data = "Vazio";
    dono = NULL;
    apto = NULL;
}

// Construtor alternativo
Contrato :: Contrato (int n, float p, Proprietario* x, Apartamento* a, string d)
{
    numero = n;
    data = d;
    preco = p;
    dono = x;
    apto = a;
}

// Destrutor
Contrato :: ~Contrato()
{
    cout << "Destruindo apartamento Numero= " << numero << endl;
    delete apto;
    delete dono;
}

// Método get número
int Contrato :: get_numerocont ()
{
    return numero;
}

// Método get preço
float Contrato :: get_preco()
{
    return preco;
}

// Método get apartamento
Apartamento* Contrato :: get_apto()
{
    return apto;
}

// Método get proprietario
Proprietario* Contrato :: get_proprietario()
{
    return dono;
}

// Método set número
void Contrato :: set_numero (int x)
{
    numero = x;
}

// Método set preço
void Contrato :: set_preco(float x)
{
    preco = x;
}

//Método exibe contrato
void Contrato ::  exibe_contrato()
{
    cout << "\n Contrato de numero: "<< numero << "\n Preço: " << preco << "\n Data: " << data << "\n Proprietario: ";
    dono->exibe_proprietario();
    cout << "\n Apartamento: ";
    apto->exibe_apto();
}
