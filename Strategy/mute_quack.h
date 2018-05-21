#ifndef _MUTE_DUCK_H_
#define _MUTE_DUCK_H_

#include "quack_behaviour.h"

class MuteQuack : public QuackBehaviour
{
  public:
    void Quack(void) const;
};

#endif // _MUTE_DUCK_H_
