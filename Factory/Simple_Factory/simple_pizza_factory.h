#ifndef _SIMPLE_PIZZA_FACTORY_H_
#define _SIMPLE_PIZZA_FACTORY_H_

#include <string>

#include "pizza.h"

class SimplePizzaFactory {
    public:
    Pizza CreatePizza(std::string) const;
};

#endif  // _SIMPLE_PIZZA_FACTORY_H_