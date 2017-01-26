// FiniteStateMachine.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Animation.h"
#include <thread>
#include <chrono>

int main() 
{
	Animation fsm; int i = 0;
	while (true) 
	{
		if (i == 0) 
		{
			fsm.jumping();
			std::this_thread::sleep_for(std::chrono::milliseconds(1000));
			i++;
		}
		else if (i == 1)
		{
			fsm.idle();
			std::this_thread::sleep_for(std::chrono::milliseconds(1000));
			i ++;
		}
		else if (i == 2)
		{
			fsm.climbing();
			std::this_thread::sleep_for(std::chrono::milliseconds(1000));
			i++;
		}
		else 
		{
			fsm.idle();
			std::this_thread::sleep_for(std::chrono::milliseconds(1000));
			i = 0;
		}
	}
}
