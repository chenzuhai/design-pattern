#pragma once
#include<iostream>
template <typename T>class CaffeineBeverage
{
public:
	void PrepareRecipe()  //冲泡咖啡因
	{
		BoilWater();      //把水煮沸
		Brew();			  //冲泡
		PourInCup();	  //把咖啡饮料倒进杯子
		AddCondiments();  //加调料
	}
	void BoilWater()
	{
		std::cout << "把水煮沸" << std::endl;
	}
	void Brew()
	{
		static_cast<T *>(this)->Brew();
	}
	void PourInCup()
	{
		std::cout << "把倒进杯子" << std::endl;
	}
	void AddCondiments()
	{
		static_cast<T *>(this)->AddCondiments();
	}
};