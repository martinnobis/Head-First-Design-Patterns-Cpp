#include "soy.h"

Soy::Soy(Beverage &bev) : beverage_(bev) {}

std::string Soy::get_description(void) const
{
    std::string description;
    description = beverage_.get_description() + ", Soy";
    return description;
}

double Soy::cost(void) const
{
    Size size = beverage_.get_size();
    switch (size)
    {
    case Tall:
        return 0.10 + beverage_.cost();
    case Grande:
        return 0.20 + beverage_.cost();
    case Venti:
        return 0.30 + beverage_.cost();
    }
}
