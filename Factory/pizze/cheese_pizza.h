#ifndef _CHEESE_PIZZA_H_
#define _CHEESE_PIZZA_H_

#include "pizza.h"

class CheesePizza: public Pizza {
    public:
    CheesePizza(std::string name, std::string dough, std::string sauce) :
        Pizza(name, dough, sauce) { }
};

#endif  // _CHEESE_PIZZA_H_