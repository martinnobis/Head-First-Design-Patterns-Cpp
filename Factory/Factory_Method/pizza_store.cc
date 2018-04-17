#include "pizza_store.h"

Pizza PizzaStore::OrderPizza(std::string type) const {
    Pizza pizza;

    pizza = CreatePizza(type);

    pizza.Prepare();
    pizza.Bake();
    pizza.Cut();
    pizza.Box();
    return pizza;
}