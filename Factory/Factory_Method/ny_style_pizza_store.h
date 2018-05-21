#ifndef _NY_STLYE_PIZZA_STORE_H_
#define _NY_STLYE_PIZZA_STORE_H_

#include "pizza_store.h"

class NYStylePizzaStore : public PizzaStore
{
  public:
    Pizza CreatePizza(std::string type) const;
};

#endif // _NY_STYLE_PIZZA_STORE_H_
