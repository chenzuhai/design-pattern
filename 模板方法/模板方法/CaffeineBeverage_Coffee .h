#pragma once
#include<iostream>
#include"CaffeineBeverage.h"
class Coffee :public CaffeineBeverage<Coffee>
{
public:
	void Brew()
	{
		std::cout << "�÷�ˮ���ݿ���" << std::endl;
	}
	void AddCondiments()
	{
		std::cout << "���Ǻ�ţ��" << std::endl;
	}
};