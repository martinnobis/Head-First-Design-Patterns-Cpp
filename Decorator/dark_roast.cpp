#include "dark_roast.h"

DarkRoast::DarkRoast() : Beverage("Dark Roast") { }

std::string DarkRoast::get_description(void) const {
    return get_name(size_) + ", " +  description_;
}

double DarkRoast::cost(void) const {
    switch(size_) {
    case Tall:
    return 0.99;
    case Grande:
    return 1.49;
    case Venti:
    return 1.99;
    }
}