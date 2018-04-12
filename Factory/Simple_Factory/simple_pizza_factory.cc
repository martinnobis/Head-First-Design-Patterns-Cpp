#include <iostream>

#include "simple_pizza_factory.h"

#include "../pizze/cheese_pizza.h"
#include "../pizze/veggie_pizza.h"
#include "../pizze/clam_pizza.h"
#include "../pizze/pepperoni_pizza.h"

Pizza SimplePizzaFactory::CreatePizza(std::string type) const {
    Pizza pizza;

    if (type == "cheese") {
        pizza = CheesePizza("Cheese", "Thick Crust", "No");
    } else if (type == "veggie") {
        pizza = VeggiePizza("Veggie", "Thin Crust", "Tomato");
    } else if (type == "clam") {
        pizza = ClamPizza("Clam", "Thick Crust", "Tomato");
    } else if (type == "pepperoni") {
        pizza = PepperoniPizza("Pepperoni", "Thin Crust", "Spicy Tomato");
    }

    return pizza;
}