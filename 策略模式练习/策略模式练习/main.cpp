#include"动物.h"
#include"狗.h"
#include"猫.h"
#include"具体算法.h"
#include<iostream>
int main()
{
	animal *p_animal = new dog();
	Context *p_con = new Context(p_animal);
	p_con->Doaction();
	p_animal = new cat();
	p_con = new Context(p_animal);
	p_con->Doaction();
	
}