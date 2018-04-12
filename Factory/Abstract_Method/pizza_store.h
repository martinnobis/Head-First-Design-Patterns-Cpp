#ifndef _PIZZA_STORE_H_
#define _PIZZA_STORE_H_

#include <string>

#include "../pizze/pizza.h"

class PizzaStore {
    public:
    Pizza OrderPizza(std::string type) const;
    protected:
    virtual Pizza CreatePizza(std::string type) const = 0;
};

#endif  // _PIZZA_STORE_H_