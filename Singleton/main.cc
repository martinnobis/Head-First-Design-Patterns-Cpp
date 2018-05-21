#include <iostream>

#include "chocolate_boiler.h"

int main(void)
{
    ChocolateBoiler &instance = ChocolateBoiler::GetInstance();
    instance.Fill();
    instance.Boil();
    instance.Drain();
    instance.Drain();
    instance.Boil();
    instance = ChocolateBoiler::GetInstance();
    instance.Drain();

    return 0;
}
