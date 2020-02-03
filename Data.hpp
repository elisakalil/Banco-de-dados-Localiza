#ifndef Data_hpp
#define Data_hpp

#include <stdio.h>

class Data
{
    private:
        int dia, mes, ano;
    public:
        Data();
        Data (int d, int m, int a);
        ~Data ();
        int get_dia();
        int get_mes();
        int get_ano();
        void set_dia (int d);
        void set_mes (int m);
        void set_ano (int a);
};

#endif
