#ifndef _MOCHA_H_
#define _MOCHA_H_

#include <memory>

#include "condiment_decorator.h"
#include "beverage.h"

class Mocha : public CondimentDecorator
{

  public:
    Mocha(Beverage &);

    std::string get_description(void) const;
    double cost(void) const;

  private:
    Beverage &beverage_;
};

#endif // _MOCHA_H_
