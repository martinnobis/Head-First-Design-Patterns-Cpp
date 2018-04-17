#ifndef _CHEESE_PIZZA_H_
#define _CHEESE_PIZZA_H_

#include <memory>

#include "pizza.h"
#include "../pizza_ingredient_factory.h"

class CheesePizza : public Pizza {
    public:
    CheesePizza(std::shared_ptr<PizzaIngredientFactory> factory) : factory_(factory) { }

    void Prepare(void);

    private:
    std::shared_ptr<PizzaIngredientFactory> factory_;
};

#endif  // _CHEESE_PIZZA_H_