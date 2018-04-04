#include "beverage.h"

Beverage::Beverage(std::string desc) : description_(desc) { }

std::string Beverage::get_description(void) const {
    return description_;
}