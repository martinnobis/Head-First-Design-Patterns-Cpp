#ifndef _DUCK_H_
#define _DUCK_H_

#include <memory>

#include "fly_behaviour.h"
#include "quack_behaviour.h"

class Duck
{
  public:
    Duck(std::shared_ptr<FlyBehaviour> fly,
         std::shared_ptr<QuackBehaviour> quack) : fly_behaviour_(fly),
                                                  quack_behaviour_(quack) {}
    void Swim(void) const;
    void Display(void) const;
    void PerformQuack(void) const;
    void PerformFly(void) const;

    void SetFlyBehaviour(std::shared_ptr<FlyBehaviour>);
    void SetQuackBehaviour(std::shared_ptr<QuackBehaviour>);
    // OTHER duck-like methods..

  protected:
    std::shared_ptr<FlyBehaviour> fly_behaviour_;
    std::shared_ptr<QuackBehaviour> quack_behaviour_;
};

#endif // _DUCK_H_
