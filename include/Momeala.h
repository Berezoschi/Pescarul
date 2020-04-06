#ifndef MOMEALA_H
#define MOMEALA_H
#include <iostream>


class Momeala
{
    public:
        Momeala();
        Momeala(std::string, double);
        virtual ~Momeala();

    private:
        std::string _momeala;
        double _cantitate;
};

#endif // MOMEALA_H
