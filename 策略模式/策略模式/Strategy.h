#pragma once
#ifndef _STRATEGY_H_
#define _STRATEGY_H_

class Strategy
{
public:
	~Strategy();
	virtual void AlgrithmInterface() = 0;
protected:
	Strategy();
private:
};
#endif