#include "Peste.h"

Peste::Peste(std::string soi, double greutate, short lungime) : _soi{soi}, _greutate{greutate}, _lungime{lungime}
{
    soi = _soi;
    greutate = _greutate;
    lungime = _lungime;
}

Peste::Peste()
{

}

Peste::~Peste()
{
    //dtor
}
