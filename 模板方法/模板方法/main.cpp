#include<iostream>
#include"CaffeineBeverage.h"
#include"CaffeineBeverage_Coffee .h"
#include"CaffeineBeverage_Tea.h"
#include"CaffeineBeverage_milk.h"
int main()
{
	std::cout << "³å±­¿§·È" << std::endl;
	Coffee c;
	c.PrepareRecipe();
	std::cout << std::endl;
	std::cout << "³å±­²è" << std::endl;
	Tea t;
	t.PrepareRecipe();
	std::cout << std::endl;
	std::cout << "³åÅ£ÄÌ" << std::endl;
	milk m;
	m.PrepareRecipe();
	return 0;
}