#ifndef _RED_HEAD_DUCK_H_
#define _RED_HEAD_DUCK_H_

#include "duck.h"

class RedHeadDuck : public Duck {
    public:
    RedHeadDuck(std::shared_ptr<FlyBehaviour> fly,
        std::shared_ptr<QuackBehaviour> quack) : Duck(fly, quack) { }
};

#endif  // _READ_HEAD_DUCK_H_
