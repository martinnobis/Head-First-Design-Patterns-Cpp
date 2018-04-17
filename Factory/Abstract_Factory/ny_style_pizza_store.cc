#include <iostream>

#include "ny_style_pizza_store.h"
#include "pizze/cheese_pizza.h"
#include "ny_pizza_ingredient_factory.h"

std::shared_ptr<Pizza> NYStylePizzaStore::CreatePizza(std::string type) const {
    std::shared_ptr<PizzaIngredientFactory> factory = std::shared_ptr<NYPizzaIngredientFactory>(new NYPizzaIngredientFactory);
    std::shared_ptr<Pizza> pizza;

    if (type == "cheese") {
        pizza = std::make_shared<CheesePizza>(factory);
        pizza->set_name("New York Style Cheese Pizza");
    }

    return pizza;
}
