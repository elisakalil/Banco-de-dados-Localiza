#include <iostream>
#include <typeinfo>
#include "Predio.hpp"
#include "Apartamento.hpp"
#include "Studio.hpp"
#include "Kitnet.hpp"
#include "Padrao.hpp"
#include "Contrato.hpp"
#include "Proprietario.hpp"

using namespace std;

int main()
{
    
    // Instanciando o prédio MANHATTAN LUXURY
    Predio ML ("MANHATTAN LUXURY", "1000 Central Park Blvd, NY, USA.");
    
    
    // Instanciando 3 aptos padrão, 4 kitnets e 2 studios, com seus respectivos dados e associando ao prédio
    Padrao* p1 = new Padrao (11, 11.1, true, 2, true);
    Padrao* p2 = new Padrao (12, 12.2, true, 2, false);
    Padrao* p3 = new Padrao (13, 13.3, true, 1, false);
    Kitnet* k1 = new Kitnet (21, 21.1, true, true);
    Kitnet* k2 = new Kitnet (22, 22.2, true, true);
    Kitnet* k3 = new Kitnet (23, 23.3, true, false);
    Kitnet* k4 = new Kitnet (24, 24.4, false, false);
    Studio* s1 = new Studio (31, 31.1, true, true);
    Studio* s2 = new Studio (32, 32.2, true, false);
    
    ML.addApartamento (p1);
    ML.addApartamento (p2);
    ML.addApartamento (p3);
    ML.addApartamento (k1);
    ML.addApartamento (k2);
    ML.addApartamento (k3);
    ML.addApartamento (k4);
    ML.addApartamento (s1);
    ML.addApartamento (s2);
    
    
    // Criando 5 proprietários com seus respectivos dados
     Proprietario* pr1 =new Proprietario ("Pedro", 123);
     Proprietario* pr2 = new Proprietario  ("Ana", 321);
     Proprietario* pr3 = new Proprietario  ("Kenia", 456);
     Proprietario* pr4 =new Proprietario  ("Luis", 654);
     Proprietario* pr5 =new Proprietario  ("Yuri", 789);
    
    
    // A administradora de vendas pode fechar até 15 contratos
         Contrato listaC[15];
         int nextC=0;
         
         Contrato c1 (1, 100.00 , pr5, p1, "01,01,2019");
             listaC[nextC] = c1;
             nextC++;
         Contrato c2 (2, 200.00, pr2, p2, "02,01,2019 ");
             listaC[nextC] = c2;
             nextC++;
         Contrato c3 (3, 300.00, pr3, p3, "03,01,2019");
             listaC[nextC] = c3;
             nextC++;
         Contrato c4 (4, 400.00, pr1, k1, "04,01,2019");
             listaC[nextC] = c4;
             nextC++;
         Contrato c5 (5, 500.00, pr2, k2, "05,01,2019");
             listaC[nextC] = c5;
             nextC++;
         Contrato c6 (6, 600.00, pr3, k3, "06,01,2019");
             listaC[nextC] = c6;
             nextC++;
         Contrato c7 (7, 700.00, pr4, s1, "07,01,2019");
             listaC[nextC] = c7;
             nextC++;
         Contrato c8 (8, 800.00, pr5, s2, "07,01,2019");
             listaC[nextC] = c8;
             nextC++;
       
    
    // Contando quantos apartamentos de cada tipo existem_______________________________________________
    int c_Studio, c_Kitnet, c_Padrao;
    c_Studio = 0; c_Kitnet = 0; c_Padrao=0;
    
    for (int i=0; i<15;i++)
        {
            if (typeid(*ML.getApartamento(i)) == typeid(Padrao))
                   {
                       c_Padrao++;
                   }
                   else if (typeid(*ML.getApartamento(i)) == typeid(Studio))
                   {
                       c_Studio++;
                   }
                   else if (typeid(*ML.getApartamento(i)) == typeid(Kitnet))
                   {
                       c_Kitnet++;
                   }
        }
    
        cout << "\n\n O Predio MANHATTAN LUXURY possui: ";
        cout << "[" << c_Studio << "]\t studios " << endl;
        cout  << "[" << c_Padrao << "]\t apartamentos padroes" <<endl;
        cout  << "[" << c_Kitnet << "]\tkitnets"<< endl;

   
    // Total de apartamentos vendidos________________________________________________________________
    cout << "\n\n O Predio MANHATTAN LUXURY vendeu um total de : \n";
    cout << "[" << nextC << "]\t apartamentos " << endl;
    
    // Contando quantos apartamentos foram vendidos____________________________________________________
           int cv_Studio, cv_Kitnet, cv_Padrao;
           cv_Studio = 0; cv_Kitnet = 0; cv_Padrao=0;
           
           for (int i=0; i<15;i++)
               {
                   if (listaC[i] == typeid(Padrao))
                          {
                              cv_Padrao++;
                          }
                          else if (listaC[i] == typeid(Studio))
                          {
                              cv_Studio++;
                          }
                          else if (listaC[i] == typeid(Kitnet))
                          {
                              cv_Kitnet++;
                          }
               }
           
               cout << "\n\n O Predio MANHATTAN LUXURY vendeu: ";
               cout << "[" << cv_Studio << "]\t studios " << endl;
               cout  << "[" << cv_Padrao << "]\t apartamentos padroes" <<endl;
               cout  << "[" << cv_Kitnet << "]\tkitnets"<< endl;
     
     
    // Listando dados dos apartamentos vendidos e seus contratos____________________________________________
        cout << "\n\n Exibindo lista de contratos: \n";
        for (int i=0; i<nextC; i++)
        {
            listaC[i].exibe_contrato();
        }
        

    // Lista de proprietarios de apartamentos padrao_______________________________________________________
    for (int i=0; i<15; i++)
    {
        if(listaC[i] == typeid(Padrao))
        {
            cout << "\n Proprietario:" << apto[i] -> get_nome() << "\n CPF:" << apto[i] -> get_identificador << endl;
        }
    }
    
    
    // Lista de proprietarios de apartamentos studio___________________________________________________
    for (int i=0; i<15; i++)
    {
        if(listaC[i] == typeid(Studio))
        {
            cout << "\n Proprietario:" << apto[i] -> get_nome() << "\n CPF:" << apto[i] -> get_identificador << endl;
        }
    }
    
    
    // Lista de proprietarios de apartamentos kitnet____________________________________________________
    for (int i=0; i<15; i++)
    {
        if(listaC[i] == typeid(Kitnet))
        {
            cout << "\n Proprietario:" << apto[i] -> get_nome() << "\n CPF:" << apto[i] -> get_identificador << endl;
        }
    }
    
    
    // Lista de apartamentos vendidos para um determinado proprietario_____________________________________
    for (int i=0; i<15; i++)
    {
        if(apto[i] -> get_vendido() == true && apto[i] -> get_identificador() == *ML.get_identificador(i))
        {
            cout << "\n Apartamento:" << apto[i] -> get_numero() << "\n Metragem:" << apto[i] -> get_metragem << endl;
        }
    }
    
    
}
//_________________________________________________________________________________________

//Criando Datas
//Data d1 (01,01,2019);
//Data d2 (02,01,2019);
//Data d3 (03,01,2019);
//Data d4 (04,01,2019);
//Data d5 (05,01,2019);
//Data d6 (06,01,2019);
//Data d7 (07,01,2019);
//Data d8 (07,01,2019);
