#include <iostream>

#include "pizza.h"

// TODO(MN): check out page 128 for pizza class

void Pizza::Prepare(void) const {
    std::cout << "Preparing " + name_ << std::endl;
    std::cout << "Tossing dough" << std::endl;
    std::cout << "Adding sauce..." << std::endl;
    std::cout << "Adding toppings..." << std::endl;
    for (auto it = toppings_.begin(); it != toppings_.end(); ++it) {
        std::cout << "    " + *it << std::endl;
    }
}

void Pizza::Bake(void) const {
    std::cout << "Bake for 12 minutes at 300" << std::endl;
}

void Pizza::Cut(void) const {
    std::cout << "Cutting the Pizza!" << std::endl;
}

void Pizza::Box(void) const {
    std::cout << "Boxing the Pizza!" << std::endl;
}
