#ifndef _MOCHA_H_
#define _MOCHA_H_

#include <memory>

#include "condiment_decorator.h"
#include "beverage.h"

class Soy : public CondimentDecorator
{

  public:
    Soy(Beverage &);

    std::string get_description(void) const;
    double cost(void) const;

  private:
    Beverage &beverage_;
};

#endif // _MOCHA_H_
