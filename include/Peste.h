#ifndef PESTE_H
#define PESTE_H
#include <iostream>


class Peste
{
    public:
        Peste();
        Peste(std::string, double, short);
        std::string soi;
        double greutate;
        short lungime;
        virtual ~Peste();
};

#endif // PESTE_H
