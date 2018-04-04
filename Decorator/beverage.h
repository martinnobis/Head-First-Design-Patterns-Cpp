#ifndef _BEVERAGE_H_
#define _BEVERAGE_H_

#include <string>

class Beverage {

    public:
    Beverage(std::string);
    virtual double cost(void) const = 0;
    std::string get_description(void) const;

    protected:
    std::string description_;
};

#endif