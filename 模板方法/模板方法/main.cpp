#include<iostream>
#include"CaffeineBeverage.h"
#include"CaffeineBeverage_Coffee .h"
#include"CaffeineBeverage_Tea.h"
#include"CaffeineBeverage_milk.h"
int main()
{
	std::cout << "�屭����" << std::endl;
	Coffee c;
	c.PrepareRecipe();
	std::cout << std::endl;
	std::cout << "�屭��" << std::endl;
	Tea t;
	t.PrepareRecipe();
	std::cout << std::endl;
	std::cout << "��ţ��" << std::endl;
	milk m;
	m.PrepareRecipe();
	return 0;
}