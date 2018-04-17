#ifndef _NY_STLYE_PIZZA_STORE_H_
#define _NY_STLYE_PIZZA_STORE_H_

#include "pizza_store.h"
#include "pizze/pizza.h"
#include "ny_pizza_ingredient_factory.h"

class NYStylePizzaStore: public PizzaStore {
    protected:
    std::shared_ptr<Pizza> CreatePizza(std::string type) const;

    private:
    NYPizzaIngredientFactory factory_;
};

#endif  // _NY_STYLE_PIZZA_STORE_H_