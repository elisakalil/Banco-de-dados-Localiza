#include "Proprietario.hpp"

// Construtor padrão
Proprietario :: Proprietario ()
{
    nome = "Nenhum";
    identificador= 0 ;
}

// Construtor alternativo
Proprietario :: Proprietario (string n, int i)
{
    n = nome;
    i = identificador;
}

// Destrutor
Proprietario :: ~Proprietario()
{
   cout << "Destruindo  Identificador = " << identificador << endl;
}

// Método get nome
string Proprietario :: get_nome ()
{
    return nome;
}
   
// Método get identificador
int Proprietario :: get_identificador ()
{
    return identificador;
}
       
// Método set nome
void Proprietario :: set_nome (string x)
{
    nome = x;
}
      
// Método set identificador
void Proprietario :: set_identificador (int x)
{
    identificador = x;
}

// Método exibe proprietario
void Proprietario :: exibe_proprietario ()
{
    cout << "Proprietario: " << nome << "CPF: " << identificador << endl;
}
