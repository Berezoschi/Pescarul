#ifndef PESCAR_H
#define PESCAR_H
#include "Peste.h"
#include "Momeala.h"
#include <iostream>
#include <vector>

class Pescar
{
    public:
        Pescar();
        Pescar(double, double, double);
        bool IncarcaCarlig(std::string, double);
        void PrindePeste(std::string, double, short);
        bool Succesul();
        bool Esecul();
        virtual ~Pescar();
        std::vector<Peste>pestiPrinsi;

    private:
        Momeala _mamaliga;
        Momeala _rame;
        Momeala _viermisori;
};

#endif // PESCAR_H
