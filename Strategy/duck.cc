#include "duck.h"

void Duck::Swim(void) const
{
    // implements swim
}

void Duck::Display(void) const
{
    // implements swim
}

void Duck::PerformQuack(void) const
{
    quack_behaviour_->Quack();
}

void Duck::PerformFly(void) const
{
    fly_behaviour_->Fly();
}

void Duck::SetFlyBehaviour(std::shared_ptr<FlyBehaviour> fly)
{
    fly_behaviour_ = fly;
}
void Duck::SetQuackBehaviour(std::shared_ptr<QuackBehaviour> quack)
{
    quack_behaviour_ = quack;
}
