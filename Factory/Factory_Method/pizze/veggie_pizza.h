#ifndef _VEGGIE_PIZZA_H_
#define _VEGGIE_PIZZA_H_

#include "pizza.h"

class VeggiePizza : public Pizza
{
  public:
    VeggiePizza(std::string name, std::string dough, std::string sauce) : Pizza(name, dough, sauce) {}
};

#endif // _VEGGIEE_PIZZA_H_
