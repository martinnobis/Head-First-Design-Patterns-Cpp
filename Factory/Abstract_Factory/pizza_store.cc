#include "pizza_store.h"

#include <iostream>

std::shared_ptr<Pizza> PizzaStore::OrderPizza(std::string type) const {
    std::shared_ptr<Pizza> pizza = CreatePizza(type);
    pizza->Prepare();
    pizza->Bake();
    pizza->Cut();
    pizza->Box();

    return pizza;
}