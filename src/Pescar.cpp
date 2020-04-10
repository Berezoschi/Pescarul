#include "Pescar.h"
#include <iostream>

Pescar::Pescar(double cantM, double cantR, double cantV) : _mamaliga{"mamaliga", cantM}, _rame{"rame", cantR}, _viermisori{"viermisori", cantV}
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

bool Pescar::IncarcaCarlig(std::string mom, double cant)
{
    std::string x;
    double y;

    if(mom == "mamaliga")
    {
        _mamaliga = {x, y};
        if(cant <= y)
            {
                y = y - cant;
                return Succesul();
            }
                return Esecul();
    }

    if(mom == "rame")
    {
        _rame = {x, y};
        if(cant <= y)
        {
            y = y - cant;
            return Succesul();
        }
        return Esecul();
    }

    if(mom == "viermisori")
    {
        _viermisori = {x, y};
        if(cant <= y)
        {
            y = y - cant;
            return Succesul();
        }
        return Esecul();
    }
}

void Pescar::PrindePeste(std::string soiP, double greutateP, short lungimeP)
{
    pestiPrinsi.push_back(Peste{soiP, greutateP, lungimeP});
    for(unsigned int i=0; i<pestiPrinsi.size(); ++i)
    {
        std::cout << soiP << " , greutate " << greutateP << " kg, lungime " << lungimeP << " cm\n";
    }
}

Pescar::Pescar()
{

}

Pescar::~Pescar()
{
    //dtor
}
