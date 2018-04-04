#include "espresso.h"

Espresso::Espresso() : Beverage("Espresso") { }

std::string Espresso::get_description(void) const {
    return description_;
}

double Espresso::cost(void) const {
    return 1.99;
}