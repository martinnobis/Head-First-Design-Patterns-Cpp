#include "pizza_store.h"
#include "ny_style_pizza_store.h"

int main(void)
{
    NYStylePizzaStore ny_store;
    PizzaStore &store = ny_store;

    store.OrderPizza("cheese");
    store.OrderPizza("veggie");
    store.OrderPizza("clam");
    store.OrderPizza("pepperoni");
}
