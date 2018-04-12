#include <iostream>

#include "pizza.h"

void Pizza::Prepare(void) const {
    std::cout << "Preparing the Pizza!" << std::endl;
}

void Pizza::Bake(void) const {
    std::cout << "Baking the Pizza!" << std::endl;
}

void Pizza::Cut(void) const {
    std::cout << "Cutting the Pizza!" << std::endl;
}

void Pizza::Box(void) const {
    std::cout << "Boxing the Pizza!" << std::endl;
}
