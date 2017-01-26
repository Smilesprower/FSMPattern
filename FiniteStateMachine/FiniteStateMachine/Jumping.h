#pragma once
#include "State.h"

class Animation;
class Idle;
class Jumping : public State
{
public:
	Jumping() {};
	~Jumping() {};
	void idle(Animation* a)
	{
		std::cout << "Going from Jumping to Idling" << std::endl;
		a->setCurrent(new Idle());
		delete this;
	}
};


