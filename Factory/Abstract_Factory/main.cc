#include <iostream>

#include "pizze/pizza.h"
#include "pizza_store.h"
#include "ny_style_pizza_store.h"

int main(void) {
    std::cout << "Hello, World!" << std::endl;

    NYStylePizzaStore ny_pizza_store;
    PizzaStore& store = ny_pizza_store;

    std::shared_ptr<Pizza> pizza = store.OrderPizza("cheese");
    return 0;
}