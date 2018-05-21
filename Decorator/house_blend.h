#ifndef _HOUSE_BLEND_H_
#define _HOUSE_BLEND_H_

#include "beverage.h"

class HouseBlend : public Beverage
{
  public:
    HouseBlend();
    std::string get_description(void) const;
    double cost(void) const;
};

#endif // _HOUSE_BLEND_H_
