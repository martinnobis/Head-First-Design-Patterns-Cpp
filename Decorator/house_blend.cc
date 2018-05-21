#include "house_blend.h"

HouseBlend::HouseBlend() : Beverage("House Blend") {}

std::string HouseBlend::get_description(void) const
{
    return get_name(size_) + ", " + description_;
}

double HouseBlend::cost(void) const
{
    switch (size_)
    {
    case Tall:
        return 1.99;
    case Grande:
        return 2.49;
    case Venti:
        return 2.99;
    }
}
