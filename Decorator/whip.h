#ifndef _WHIP_H_
#define _WHIP_H_

#include <memory>

#include "condiment_decorator.h"
#include "beverage.h"

class Whip : public CondimentDecorator
{

  public:
    Whip(Beverage &);

    std::string get_description(void) const;
    double cost(void) const;

  private:
    Beverage &beverage_;
};

#endif // _WHIP_H_
