#ifndef _QUACK_BEHAVIOUR_H_
#define _QUACK_BEHAVIOUR_H_

class QuackBehaviour {
    public:
        QuackBehaviour() { }
        virtual ~QuackBehaviour() { }
        virtual void Quack(void) const = 0;
};

#endif  // _QUACK_BEHAVIOUR_H_
