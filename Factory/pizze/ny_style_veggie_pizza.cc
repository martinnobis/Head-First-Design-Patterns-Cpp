#include "ny_style_veggie_pizza.h"

NYStyleVeggiePizza::NYStyleVeggiePizza(std::string name, std::string dough, std::string sauce) :
        Pizza(name, dough, sauce) {
    toppings_.push_back("Mushrooms");
    toppings_.push_back("Capsicum");
    toppings_.push_back("Rucola");
        }