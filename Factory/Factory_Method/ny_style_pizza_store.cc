#include <iostream>

#include "ny_style_pizza_store.h"

#include "pizze/ny_style_cheese_pizza.h"
#include "pizze/ny_style_veggie_pizza.h"
#include "pizze/ny_style_clam_pizza.h"
#include "pizze/ny_style_pepperoni_pizza.h"

Pizza NYStylePizzaStore::CreatePizza(std::string type) const {
    Pizza pizza;

    std::cout << "Creating a NY style " + type + " pizza!" << std::endl;
    if (type == "cheese") {
        pizza = NYStyleCheesePizza();
    } else if (type == "veggie") {
        pizza = NYStyleVeggiePizza();
    } else if (type == "clam") {
        pizza = NYStyleClamPizza();
    } else if (type == "pepperoni") {
        pizza = NYStylePepperoniPizza();
    }

    return pizza;
}