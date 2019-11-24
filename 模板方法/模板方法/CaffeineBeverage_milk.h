#pragma once
#include<iostream>
#include"CaffeineBeverage.h"
class milk :public CaffeineBeverage<milk>
{
public:
	void Brew()
	{
		std::cout << "ÓÃÎÂË®ÅİÅ£ÄÌ" << std::endl;
	}
	void AddCondiments()
	{
		std::cout << "¼ÓÌÇ" << std::endl;
	}
};