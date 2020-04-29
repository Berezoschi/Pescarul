#ifndef MOMEALA_H
#define MOMEALA_H
#include <iostream>

enum Momeli
{
    mamaliga, rame, viermisori
};

class Momeala
{
    public:
        Momeli momeala;
        double cantitate;
        Momeala(Momeli, double);
        virtual ~Momeala();
};

#endif // MOMEALA_H
