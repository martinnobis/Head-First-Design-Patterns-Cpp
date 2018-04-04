#include "house_blend.h"

HouseBlend::HouseBlend() : Beverage("House Blend") { }

std::string HouseBlend::get_description(void) const {
    return description_;
}

double HouseBlend::cost(void) const {
    return 1.99;
}