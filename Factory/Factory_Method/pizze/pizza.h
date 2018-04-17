#ifndef _PIZZA_H_
#define _PIZZA_H_

#include <vector>
#include <string>

class Pizza {
    public:
    Pizza(std::string name, std::string dough, std::string sauce) :
        name_(name), dough_(dough), sauce_(sauce) { }
    Pizza() : name_("Unknown"), dough_("Unknown"), sauce_("Unknown") { }
    void Prepare(void) const;
    void Bake(void) const;
    void Cut(void) const;
    void Box(void) const;
    std::string get_name(void) const;
    void set_name(std::string);

    protected:
    std::string name_;
    std::string dough_;
    std::string sauce_;
    std::vector<std::string> toppings_;
};

#endif  // _PIZZA_H_