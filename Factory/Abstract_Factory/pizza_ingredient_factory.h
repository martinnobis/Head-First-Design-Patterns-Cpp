#ifndef _PIZZA_INGREDIENT_FACTORY_H_
#define _PIZZA_INGREDIENT_FACTORY_H_

#include <memory>

#include "ingredients/dough.h"
#include "ingredients/sauce.h"
#include "ingredients/cheese.h"
#include "ingredients/clams.h"

class PizzaIngredientFactory
{
  public:
    virtual std::shared_ptr<Dough> CreateDough(void) = 0;
    virtual std::shared_ptr<Sauce> CreateSauce(void) = 0;
    virtual std::shared_ptr<Cheese> CreateCheese(void) = 0;
    virtual std::shared_ptr<Clams> CreateClams(void) = 0;
};

#endif // _PIZZA_INGREDIENT_FACTORY_H_
