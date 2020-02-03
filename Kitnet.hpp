#ifndef Kitnet_hpp
#define Kitnet_hpp

#include "Apartamento.hpp"

#include <iostream>
using namespace std;

class Kitnet : public Apartamento
{
    private:
        bool cozInt;
    public:
        Kitnet ();
        Kitnet (int n, float m, bool v, bool ci);
        ~Kitnet();
        bool get_cozInt();
        void set_cozInt(bool x);
};

#endif 
