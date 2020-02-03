#include "Data.hpp"
using namespace std;

// Construtor default
Data :: Data()
{
dia=0;
mes=0;
ano=0;
}

// Construtor alternativo
Data :: Data (int d, int m, int a)
{
    set_dia(d);
    set_mes(m);
    set_ano(a);
}

// Método get dia
int Data::get_dia()
{
return dia;
}

// Método get mes
int Data :: get_mes()
{
return mes;
}

//Método get ano
int Data::get_ano()
{
return ano;
}

//Método set dia
void Data::set_dia(int d)
{
    if (d>=1 && d<=31)
    {
        dia = d;
    }
}

//Método set mes
void Data::set_mes(int m)
{
    if (m>=1 && m<=12)
       {
           mes = m;
       }
}

//Método set ano
void Data::set_ano(int a)
{
        ano = a;
}

//Destrutor Data
Data :: ~Data ()
{
    //cout << "Destruindo data " << dia << "/" << mes <<  "/" << ano << endl;
}

