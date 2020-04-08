#include <iostream>
#include "Pescar.h"

using namespace std;

int main()
{
    Pescar pescar{0.5, 0.5, 0.25};
    pescar.IncarcaCarlig("mamaliga", 0.2);
    if(pescar.IncarcaCarlig("mamaliga", 0.2) == true)
        pescar.PrindePeste("crap", 1.5, 35);
    pescar.IncarcaCarlig("viermisori", 0.1);
    if(pescar.IncarcaCarlig("viermisori", 0.1) == true)
        pescar.PrindePeste("caras", 0.3, 15);
    pescar.IncarcaCarlig("viermisori", 0.1);
    if(pescar.IncarcaCarlig("viermisori", 0.1) == true)
        pescar.PrindePeste("platica", 0.5, 20);
    pescar.IncarcaCarlig("viermisori", 0.1);
    if(pescar.IncarcaCarlig("viermisori", 0.1) == true)
        pescar.PrindePeste("caras", 0.7, 25);
    return 0;
}
