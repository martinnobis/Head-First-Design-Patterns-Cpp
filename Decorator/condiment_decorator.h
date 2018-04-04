#ifndef _CONDIMENT_DECORATOR_H_
#define _CONDIMENT_DECORATOR_H_

#include "beverage.h"

class CondimentDecorator: public Beverage {
    public:
    CondimentDecorator() : Beverage("Unknown Beverage") { }
    std::string get_description(void) const;
};

#endif