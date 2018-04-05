#include <iostream>
#include <string>

#include "beverage.h"

#include "house_blend.h"
#include "espresso.h"
#include "dark_roast.h"

#include "condiment_decorator.h"
#include "mocha.h"
#include "soy.h"
#include "whip.h"

int main(void) {
    Espresso es;
    Beverage& beverage = es;
    std::cout << "$" + std::to_string(beverage.cost()) << std::endl;
    std::cout << beverage.get_description() << std::endl;

    // Cannot reassign references in C++
    DarkRoast dr;
    Beverage& beverage2 = dr;
    Mocha m = Mocha(beverage2);
    Beverage& beverage3 = m;
    std::cout << "$" + std::to_string(beverage3.cost()) << std::endl;
    std::cout << beverage3.get_description() << std::endl;
}