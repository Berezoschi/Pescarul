#ifndef PESCAR_H
#define PESCAR_H
#include "Peste.h"
#include <iostream>
#include <vector>

enum Momeala
{
    mamaliga, rame, viermisori
};

class Pescar : public Peste
{
    public:
        Pescar();
        Pescar(Momeala, double);
        void IncarcaCarlig(Momeala, double);
        void PrindePeste(Peste);
        virtual ~Pescar();

    protected:
        std::vector<Peste>pestiPrinsi;

    private:
        Momeala _momeala;
        double _cantitate;
};

#endif // PESCAR_H
