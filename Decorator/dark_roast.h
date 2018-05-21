#ifndef _DARK_ROAST_H_
#define _DARK_ROAST_H_

#include "beverage.h"

class DarkRoast : public Beverage
{
  public:
    DarkRoast();
    std::string get_description(void) const;
    double cost(void) const;
};

#endif // _DARK_ROAST_H_
