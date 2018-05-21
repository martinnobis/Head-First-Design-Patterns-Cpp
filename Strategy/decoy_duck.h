#ifndef _DECOY_DUCK_H_
#define _DECOY_DUCK_H_

#include "duck.h"

class DecoyDuck : public Duck
{
  public:
    DecoyDuck(std::shared_ptr<FlyBehaviour> fly,
              std::shared_ptr<QuackBehaviour> quack) : Duck(fly, quack) {}
};

#endif // _DECOY_DUCK_H_
