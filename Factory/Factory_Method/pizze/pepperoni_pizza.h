#ifndef _PEPPERONI_PIZZA_H_
#define _PEPPERONI_PIZZA_H_

#include "pizza.h"

class PepperoniPizza: public Pizza {
    public:
    PepperoniPizza(std::string name, std::string dough, std::string sauce) :
        Pizza(name, dough, sauce) { }
};

#endif  // _PEPPERONI_PIZZA_H_