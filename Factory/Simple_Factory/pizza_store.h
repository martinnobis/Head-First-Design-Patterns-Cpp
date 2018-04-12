#ifndef _PIZZA_STORE_H_
#define _PIZZA_STORE_H_

#include <string>

#include "../pizze/pizza.h"
#include "simple_pizza_factory.h"

class PizzaStore {
    public:
    PizzaStore(SimplePizzaFactory&);
    Pizza OrderPizza(std::string type) const;
    private:
    const SimplePizzaFactory& factory_;
};

#endif  // _PIZZA_STORE_H_