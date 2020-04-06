#include <iostream>
#include "Pescar.h"

using namespace std;

int main()
{
    Pescar pescar{{"mamaliga", 0.5}, {"rame", 0.5}, {"viermisori", 0.25}};
    pescar.IncarcaCarlig("mamaliga", 0.2);
}
