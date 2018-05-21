#include <iostream>

#include "cheese_pizza.h"

void CheesePizza::Prepare(void)
{
    std::cout << "Preparing " + name_ << std::endl;
    dough_ = factory_->CreateDough();
    sauce_ = factory_->CreateSauce();
    cheese_ = factory_->CreateCheese();
    clam_ = factory_->CreateClams();
}
