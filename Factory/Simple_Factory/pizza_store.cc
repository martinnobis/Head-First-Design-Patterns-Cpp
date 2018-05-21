#include "pizza_store.h"

PizzaStore::PizzaStore(SimplePizzaFactory &factory) : factory_(factory)
{
}

Pizza PizzaStore::OrderPizza(std::string type) const
{
    Pizza pizza;

    pizza = factory_.CreatePizza(type);

    pizza.Prepare();
    pizza.Bake();
    pizza.Cut();
    pizza.Box();
    return pizza;
}
