#pragma once
#include<iostream>
#include"CaffeineBeverage.h"
class Tea :public CaffeineBeverage<Tea>
{
public:
	void Brew()
	{
		std::cout << "�÷�ˮ���ݲ�Ҷ" << std::endl;
	}
	void AddCondiments()
	{
		std::cout << "������" << std::endl;
	}
};