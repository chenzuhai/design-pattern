#pragma once
#include<iostream>
#include"CaffeineBeverage.h"
class Tea :public CaffeineBeverage<Tea>
{
public:
	void Brew()
	{
		std::cout << "ÓÃ·ĞË®½şÅİ²èÒ¶" << std::endl;
	}
	void AddCondiments()
	{
		std::cout << "¼ÓÄûÃÊ" << std::endl;
	}
};