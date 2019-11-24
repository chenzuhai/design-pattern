#pragma once
#include"Strategy.h"
class Context
{
public:
	Context(Strategy*);
	~Context();
	void DoAction();
private:
	Strategy* _strategy;
};