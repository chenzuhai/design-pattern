#pragma once
#include<iostream>
#include"CaffeineBeverage.h"
class milk :public CaffeineBeverage<milk>
{
public:
	void Brew()
	{
		std::cout << "����ˮ��ţ��" << std::endl;
	}
	void AddCondiments()
	{
		std::cout << "����" << std::endl;
	}
};