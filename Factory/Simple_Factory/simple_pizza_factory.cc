#include <iostream>

#include "simple_pizza_factory.h"

Pizza SimplePizzaFactory::CreatePizza(std::string type) const
{
    Pizza pizza;

    if (type == "cheese")
    {
        pizza = Pizza("Cheese", "Thick Crust", "No");
    }
    else if (type == "veggie")
    {
        pizza = Pizza("Veggie", "Thin Crust", "Tomato");
    }
    else if (type == "clam")
    {
        pizza = Pizza("Clam", "Thick Crust", "Tomato");
    }
    else if (type == "pepperoni")
    {
        pizza = Pizza("Pepperoni", "Thin Crust", "Spicy Tomato");
    }
    return pizza;
}
