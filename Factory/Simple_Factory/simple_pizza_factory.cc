#include <iostream>

#include "simple_pizza_factory.h"

#include "cheese_pizza.h"
#include "veggie_pizza.h"
#include "clam_pizza.h"
#include "pepperoni_pizza.h"

Pizza SimplePizzaFactory::CreatePizza(std::string type) const {
    Pizza pizza;

    std::cout << "Creating a " + type + " pizza!" << std::endl;
    if (type == "cheese") {
        pizza = CheesePizza();
    } else if (type == "veggie") {
        pizza = VeggiePizza();
    } else if (type == "clam") {
        pizza = ClamPizza();
    } else if (type == "pepperoni") {
        pizza = PepperoniPizza();
    }

    return pizza;
}