#include "mocha.h"

Mocha::Mocha(std::shared_ptr<Beverage> bev) : beverage_(bev) { }

std::string Mocha::get_description(void) const {
    std::string description;
    description = beverage_->get_description() + ", Mocha";
    return description;
}

double Mocha::cost(void) const {
    return 0.20 + beverage_->cost();
}