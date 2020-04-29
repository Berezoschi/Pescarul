#ifndef MOMEALA_H
#define MOMEALA_H
#include <iostream>


class Momeala
{
    public:
        Momeala(std::string, double);
        std::string momeala;
        double cantitate;
        virtual ~Momeala();
};

#endif // MOMEALA_H
