#include"����.h"
#include"��.h"
#include"è.h"
#include"�����㷨.h"
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