#include "Pescar.h"
#include <iostream>

Pescar::Pescar(double mamaliga, double rame, double viermisori) : _mamaliga{"mamaliga", mamaliga}, _rame{"rame", rame}, _viermisori{"viermisori", viermisori}
{

}

bool Pescar::Succesul()
{
    bool incarcare = true;
    return incarcare;
}

bool Pescar::Esecul()
{
    bool incarcare = false;
    return incarcare;
}

bool Pescar::IncarcaCarlig(std::string m, double c)
{
    if(_cantitate >= c)
    {
        _cantitate = _cantitate - c;
        return Succesul();
    }
    else
        return Esecul();
}

void Pescar::PrindePeste(std::string soi, double greutate, short lungime)
{
    _soi = soi;
    _greutate = greutate;
    _lungime = lungime;
    pestiPrinsi.push_back(Peste(soi, greutate, lungime));
    for(int i=0; i<pestiPrinsi.size(); ++i)
    {
        std::cout << soi << " , greutate " << greutate << " kg, lungime " << lungime << " cm\n";
    }
}

Pescar::Pescar()
{

}

Pescar::~Pescar()
{
    //dtor
}
