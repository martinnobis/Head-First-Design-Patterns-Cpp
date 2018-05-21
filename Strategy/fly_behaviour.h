#ifndef _FLY_BEHAVIOUR_H_
#define _FLY_BEHAVIOUR_H_

class FlyBehaviour
{
  public:
	FlyBehaviour() {}
	virtual ~FlyBehaviour() {}
	virtual void Fly(void) const = 0;
};

#endif // _FLY_BEHAVIOUR_H_
