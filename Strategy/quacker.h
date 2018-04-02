#ifndef _QUACKER_H_
#define _QUACKER_H_

#include "quack_behaviour.h"

class Quacker : public QuackBehaviour {
    public:
        Quacker() { }
        ~Quacker() { }
        void Quack(void) const;
};

#endif  // _QUACKER_H_
