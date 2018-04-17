#include "ny_pizza_ingredient_factory.h"

#include "ingredients/reggiano_cheese.h"
#include "ingredients/thin_crust_dough.h"
#include "ingredients/marinara_sauce.h"
#include "ingredients/fresh_clams.h"

std::shared_ptr<Dough> NYPizzaIngredientFactory::CreateDough(void) {
    return std::shared_ptr<ThinCrustDough>(new ThinCrustDough);
}

std::shared_ptr<Sauce> NYPizzaIngredientFactory::CreateSauce(void) {
    return std::shared_ptr<MarinaraSauce>(new MarinaraSauce);
}

std::shared_ptr<Cheese> NYPizzaIngredientFactory::CreateCheese(void) {
    return std::shared_ptr<ReggianoCheese>(new ReggianoCheese);
}

std::shared_ptr<Clams> NYPizzaIngredientFactory::CreateClams(void) {
    return std::shared_ptr<FreshClams>(new FreshClams);
}