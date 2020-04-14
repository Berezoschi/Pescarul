#include "Pescar.h"
#include <iostream>

Pescar::Pescar(double cantM, double cantR, double cantV) : _mamaliga{"mamaliga", cantM}, _rame{"rame", cantR}, _viermisori{"viermisori", cantV}
{

}

bool Pescar::IncarcaCarlig(std::string mom, double cant)
{
    if(_momeala == mom, _cantitate >= cant)
    {
        return true;
        _cantitate = _cantitate - cant;
    }
    else
    {
        return false;
    }
}

void Pescar::PrindePeste(std::string soi, double greutate, short lungime)
{
    Peste peste{soi, greutate, lungime};
    pestiPrinsi.push_back(peste);
    for(unsigned int i=0; i<pestiPrinsi.size(); ++i)
    {
        std::cout << _soi << " , greutate " << _greutate << " kg, lungime " << _lungime << " cm\n";
    }
}

Pescar::Pescar()
{

}

Pescar::~Pescar()
{
    //dtor
}
