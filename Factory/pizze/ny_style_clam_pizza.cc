#include "ny_style_clam_pizza.h"

NYStyleClamPizza::NYStyleClamPizza(std::string name, std::string dough, std::string sauce) :
        Pizza(name, dough, sauce) {
    toppings_.push_back("Big Juicy Clams");
        }