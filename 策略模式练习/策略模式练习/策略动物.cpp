#include"动物.h"
#include"狗.h"
#include"猫.h"
#include"具体算法.h"
#include<iostream>
using namespace std;
animal::animal()
{}
animal::~animal()
{}
cat::cat()
{}
cat::~cat()
{}
void cat::yell()
{
	cout << "miaow" << endl;
}
dog::dog()
{}
dog::~dog()
{}
void dog::yell()
{
	cout << "bark" << endl;
}
Context::Context(animal *_animal)
{
	this->_animal = _animal;
}
Context::~Context()
{
	delete this->_animal;
}
void Context::Doaction()
{
	this->_animal->yell();
}