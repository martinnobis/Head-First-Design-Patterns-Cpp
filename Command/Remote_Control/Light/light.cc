#include <iostream>

#include "light.h"

void Light::On(void) const {
    std::cout << "Light is on" << std::endl;
}

void Light::Off(void) const {
    std::cout << "Light is off" << std::endl;
}
