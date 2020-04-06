#ifndef PESCAR_H
#define PESCAR_H
#include "Peste.h"
#include "Momeala.h"
#include <iostream>
#include <vector>

class Pescar : public Momeala
{
    public:
        Pescar();
        Pescar(Momeala, Momeala, Momeala);
        void IncarcaCarlig(Momeala);
        void PrindePeste(Peste);
        virtual ~Pescar();
        std::vector<Peste>pestiPrinsi;

    private:
        Momeala _m1;
        Momeala _m2;
        Momeala _m3;
};

#endif // PESCAR_H
