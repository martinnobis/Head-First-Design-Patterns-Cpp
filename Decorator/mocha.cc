#include "mocha.h"

Mocha::Mocha(Beverage &bev) : beverage_(bev) {}

std::string Mocha::get_description(void) const
{
    std::string description;
    description = beverage_.get_description() + ", Mocha";
    return description;
}

double Mocha::cost(void) const
{
    Size size = beverage_.get_size();
    switch (size)
    {
    case Tall:
        return 0.20 + beverage_.cost();
    case Grande:
        return 0.30 + beverage_.cost();
    case Venti:
        return 0.40 + beverage_.cost();
    }
}
