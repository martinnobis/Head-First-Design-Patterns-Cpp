#ifndef _CLAM_PIZZA_H_
#define _CLAM_PIZZA_H_

#include "pizza.h"

class ClamPizza: public Pizza {
    public:
    ClamPizza(std::string name, std::string dough, std::string sauce) :
        Pizza(name, dough, sauce) { }
};

#endif  // _CLAM_PIZZA_H_