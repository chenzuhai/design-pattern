#pragma once
#include<iostream>
#include"CaffeineBeverage.h"
class Coffee :public CaffeineBeverage<Coffee>
{
public:
	void Brew()
	{
		std::cout << "ÓÃ·ÐË®³åÅÝ¿§·È" << std::endl;
	}
	void AddCondiments()
	{
		std::cout << "¼ÓÌÇºÍÅ£ÄÌ" << std::endl;
	}
};