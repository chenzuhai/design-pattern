#pragma once
#include<iostream>
class animal
{
public:
	~animal();
	virtual void yell() = 0;
protected:
	animal();
private:
};