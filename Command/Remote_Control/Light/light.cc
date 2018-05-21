#include <iostream>

#include "light.h"

void Light::On(void) const
{
    std::cout << name_ << " light is on" << std::endl;
}

void Light::Off(void) const
{
    std::cout << name_ << " light is off" << std::endl;
}
