#pragma once
#include<iostream>
template <typename T>class CaffeineBeverage
{
public:
	void PrepareRecipe()  //���ݿ�����
	{
		BoilWater();      //��ˮ���
		Brew();			  //����
		PourInCup();	  //�ѿ������ϵ�������
		AddCondiments();  //�ӵ���
	}
	void BoilWater()
	{
		std::cout << "��ˮ���" << std::endl;
	}
	void Brew()
	{
		static_cast<T *>(this)->Brew();
	}
	void PourInCup()
	{
		std::cout << "�ѵ�������" << std::endl;
	}
	void AddCondiments()
	{
		static_cast<T *>(this)->AddCondiments();
	}
};