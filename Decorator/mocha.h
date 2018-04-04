#ifndef _MOCHA_H_
#define _MOCHA_H_

#include <memory>

#include "condiment_decorator.h"
#include "beverage.h"

class Mocha : public CondimentDecorator {

    public:
    Mocha(std::shared_ptr<Beverage>);

    std::string get_description(void) const;
    double cost(void) const;

    private:
    std::shared_ptr<Beverage> beverage_;

};

#endif