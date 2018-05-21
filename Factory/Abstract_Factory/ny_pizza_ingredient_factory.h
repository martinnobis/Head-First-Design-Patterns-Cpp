#ifndef _NY_PIZZA_INGREDIENT_FACTORY_H_
#define _NY_PIZZA_INGREDIENT_FACTORY_H_

#include "pizza_ingredient_factory.h"

class NYPizzaIngredientFactory : public PizzaIngredientFactory
{
  public:
    // From PizzaIngredientFactory interface
    std::shared_ptr<Dough> CreateDough(void);
    std::shared_ptr<Sauce> CreateSauce(void);
    std::shared_ptr<Cheese> CreateCheese(void);
    std::shared_ptr<Clams> CreateClams(void);
};

#endif // _NY_PIZZA_INGREDIENT_FACTORY_H_
