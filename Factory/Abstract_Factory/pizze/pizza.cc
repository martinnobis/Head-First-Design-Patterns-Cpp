#include <iostream>

#include "pizza.h"

void Pizza::Bake(void) const {
    std::cout << "Bake for 12 minutes at 300" << std::endl;
}

void Pizza::Cut(void) const {
    std::cout << "Cutting the Pizza!" << std::endl;
}

void Pizza::Box(void) const {
    std::cout << "Boxing the Pizza!" << std::endl;
}

std::string Pizza::get_name(void) const {
    return name_;
}

void Pizza::set_name(std::string name) {
    name_ = name;
}
