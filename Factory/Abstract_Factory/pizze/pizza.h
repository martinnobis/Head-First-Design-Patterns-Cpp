#ifndef _PIZZA_H_
#define _PIZZA_H_

#include <vector>
#include <string>

#include "../ingredients/dough.h"
#include "../ingredients/sauce.h"
#include "../ingredients/veggies.h"
#include "../ingredients/clams.h"
#include "../ingredients/cheese.h"

class Pizza {
    public:
    virtual void Prepare(void) = 0;
    void Bake(void) const;
    void Cut(void) const;
    void Box(void) const;
    std::string get_name(void) const;
    void set_name(std::string);

    protected:
    std::string name_;
    std::shared_ptr<Dough> dough_;
    std::shared_ptr<Sauce> sauce_;
    std::shared_ptr<Cheese> cheese_;
    std::vector<Veggies> veggies_;
    std::shared_ptr<Clams> clam_;
};

#endif  // _PIZZA_H_