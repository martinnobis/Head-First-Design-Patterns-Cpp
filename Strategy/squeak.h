#ifndef _SQUEAK_H_
#define _SQUEAK_H_

#include "quack_behaviour.h"

class Squeak : public QuackBehaviour {
 public:
    void Quack(void) const;
};

#endif  // _SQUEAK_H_
