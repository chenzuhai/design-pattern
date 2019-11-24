#include"Strategy.h"
#include"ConcreteStrategyA.h"
#include"ConcreteStrategyB.h"
#include"Context.h"
int main()
{
	Strategy* pstr = new ConcreteStrategyA();
	Context * pcon = new Context(pstr);
	pcon->DoAction();
	pstr = new ConcreteStrategyB();
	pcon = new Context(pstr);
	pcon->DoAction();
}