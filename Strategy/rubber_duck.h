#ifndef _MALLARD_DUCK_H_
#define _MALLARD_DUCK_H_

#include "duck.h"

class RubberDuck : public Duck {
 public:
    RubberDuck(std::shared_ptr<FlyBehaviour> fly,
        std::shared_ptr<QuackBehaviour> quack) : Duck(fly, quack) { }
};

#endif  // _MALLARD_DUCK_H_
