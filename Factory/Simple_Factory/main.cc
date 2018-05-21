#include <iostream>

#include "simple_pizza_factory.h"
#include "pizze/pizza.h"
#include "pizza_store.h"

int main(void)
{
    SimplePizzaFactory factory;
    PizzaStore store(factory);
    Pizza pizza;

    pizza = store.OrderPizza("cheese");
    // Do something with the pizza...
    pizza = store.OrderPizza("veggie");
    pizza = store.OrderPizza("clam");
    pizza = store.OrderPizza("pepperoni");

    return 0;
}
