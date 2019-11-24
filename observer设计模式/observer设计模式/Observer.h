#pragma once
#include<string>
class Observer
{
public:
	virtual ~Observer() {};
	virtual void Updata(const std::string &msg) = 0;
	virtual std::string getName() = 0;
protected:
	Observer() {};
};






