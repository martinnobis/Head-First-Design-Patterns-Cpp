#ifndef _ESPRESSO_H_
#define _ESPRESSO_H_

#include "beverage.h"

class Espresso : public Beverage
{
  public:
    Espresso();
    std::string get_description(void) const;
    double cost(void) const;
};

#endif // _ESPRESSO_H_
