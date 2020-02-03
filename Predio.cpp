#include "Predio.hpp"


using namespace std;

// construtor default
Predio :: Predio()
{
    nome = "Nenhum";
    endereco = "Nenhum";
    for (int i=0; i<15; i++)
       {
           apto [i]= NULL;
       }
}

// construtor alternativo
Predio :: Predio (string n, string e)
{
    nome = n;
    endereco = e;
    for (int i=0; i<15; i++)
    {
        apto [i]= NULL;
    }
}

// destrutor
Predio :: ~Predio()
{
    cout << "Destruindo o predio: " << nome << endl;
   for (int i=0; i<15; i++)
    {
        delete apto [i];
    }
}

// método get nome
string Predio :: get_nome()
{
    return nome;
}

// método get endereço
string Predio :: get_endereco()
{
    return endereco;
}


// método exibe
void Predio :: exibe_predio ()
{
    cout << " \n Prédio: " << nome << " \n endereco: "<< endereco << endl;
}

// método para buscar a próxima posição livre
int Predio::prox_livre()
{
    int next= 0;
    while ( (next<15) && apto[next] != NULL )
    {
        next++;
    }
    return next;
}

// método para adicionar um apartamento de um tipo (padrão, studio ou kitnet)
void Predio::addApartamento(Apartamento* ap)
{
    int conta = 0;
    int proximo = prox_livre();
    if (proximo == 15)
    {
        cout << "\nNao ha mais apartamentos vagos\n";
        return;
    }
        else
        {
            for(int i = 0; i < proximo ; i++)
            {
                if(typeid(apto[proximo]) == typeid(ap))
                {
                    conta ++ ;
                }
                    if (conta >= 5)
                    {
                        cout << "Limite alcançado para este tipo de apartamento" << endl;
                    }
                    else
                    {
                        apto[proximo] = ap;
                    }
            }
        }
}

//metodo get apartamento baseado no numero, retornando o ponteiro do apto.
 Apartamento* Predio :: getApartamento (int numApto)
{
    int x = prox_livre();
    for( int i = 0 ; i < x ; i ++ )
    {
        if ( apto [i] -> get_numero() == numApto)
        return apto [i];
    }
    return NULL;
}

Apartamento* Predio :: getApartamento()
{
    return ap
}
