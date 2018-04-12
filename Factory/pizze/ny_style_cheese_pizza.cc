#include "ny_style_cheese_pizza.h"

NYStyleCheesePizza::NYStyleCheesePizza(std::string name, std::string dough, std::string sauce) :
        Pizza(name, dough, sauce) {
    toppings_.push_back("Grated Reggiano Cheese");
        }