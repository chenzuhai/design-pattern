#pragma once
#include"����.h"
class Context
{
public:
	Context(animal* _animal);
	~Context();
	void Doaction();
private:
	animal* _animal;
};