#ifndef PESTE_H
#define PESTE_H
#include <iostream>


class Peste
{
    public:
        std::string soi;
        double greutate;
        short lungime;
        Peste(std::string, double, short);
        virtual ~Peste();
};

#endif // PESTE_H
