#pragma once
#include"Observer.h"
class Subject
{
public:
	virtual ~Subject() {};
	virtual void registerObserver(Observer* observer) = 0;
	virtual void removeObserver(Observer* observer) = 0;
	virtual void notifyObserver(const std::string &msg) = 0;
};