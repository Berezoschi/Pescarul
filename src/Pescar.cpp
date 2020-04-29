#include "Pescar.h"
#include <iostream>

Pescar::Pescar(double cantM, double cantR, double cantV) : _mamaliga{"mamaliga", cantM}, _rame{"rame", cantR}, _viermisori{"viermisori", cantV}
{

}

bool Pescar::ScadeCantitate(Momeala* mom, double cant)
{
    if(mom -> cantitate > cant)
    {
        mom -> cantitate -= cant;
        return true;
    }
    return false;
}

bool Pescar::IncarcaCarlig(std::string tipMom, double cantM)
{
    if(_mamaliga.momeala == tipMom)
    {
        return ScadeCantitate(&_mamaliga, cantM);
    }

    if(_rame.momeala == tipMom)
    {
        return ScadeCantitate(&_rame, cantM);
    }
    if(_viermisori.momeala == tipMom)
    {
        return ScadeCantitate(&_viermisori, cantM);
    }
}

void Pescar::PrindePeste(std::string soi, double greutate, short lungime)
{
    Peste peste{soi, greutate, lungime};
    pestiPrinsi.push_back(peste);
    for(unsigned int i=0; i<pestiPrinsi.size(); ++i)
    {
        std::cout << soi << " , greutate " << greutate << " kg, lungime " << lungime << " cm\n";
    }
}

Pescar::~Pescar()
{
    //dtor
}
