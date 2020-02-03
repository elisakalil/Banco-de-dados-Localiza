#ifndef Proprietario_hpp
#define Proprietario_hpp

#include <iostream>
using namespace std;

class Proprietario
{
    private:
        string nome;
        int identificador;
    public:
        Proprietario ();
        Proprietario  (string n, int i);
        ~Proprietario ();
        string get_nome ();
        int get_identificador ();
        void set_nome (string x);
        void set_identificador (int x);
        void exibe_proprietario ();
    
};
#endif 
