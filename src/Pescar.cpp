#include "Pescar.h"

void Pescar::IncarcaCarlig(Momeala momeala, double cantitate)
{
    _momeala = momeala;
    _cantitate = cantitate;
}

void Pescar::PrindePeste(Peste peste)
{
    pestiPrinsi.push_back(peste);
}

Pescar::Pescar(Momeala momeala, double cantitate) : _momeala{momeala}, _cantitate{cantitate}
{

}

Pescar::Pescar()
{
    //ctor
}

Pescar::~Pescar()
{
    //dtor
}
