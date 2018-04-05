#ifndef _BEVERAGE_H_
#define _BEVERAGE_H_

#include <string>

enum Size { Tall, Grande, Venti };

const std::string get_name(Size);

class Beverage {
    public:
    Beverage(std::string);
    virtual double cost(void) const = 0;
    virtual std::string get_description(void) const;
    void set_size(Size);
    Size get_size(void) const;

    protected:
    std::string description_;
    Size size_;
};

#endif