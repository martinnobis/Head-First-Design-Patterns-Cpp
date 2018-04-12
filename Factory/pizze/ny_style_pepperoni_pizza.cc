#include "ny_style_pepperoni_pizza.h"

NYStylePepperoniPizza::NYStylePepperoniPizza(std::string name, std::string dough, std::string sauce) :
        Pizza(name, dough, sauce) {
    toppings_.push_back("Big Juicy Pepperonis");
        }