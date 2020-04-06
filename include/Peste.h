#ifndef PESTE_H
#define PESTE_H
#include <iostream>


class Peste
{
    public:
        Peste();
        Peste(std::string, double, short);
        virtual ~Peste();

    private:
        std::string _soi;
        double _greutate;
        short _lungime;
};

#endif // PESTE_H
