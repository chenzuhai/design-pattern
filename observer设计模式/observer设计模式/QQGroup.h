#pragma once
#include"Observer.h"
#include"Subject.h"
#include<list>
#include<iostream>
class QQGroup :public Subject
{
public:
	QQGroup();
	void registerObserver(Observer* observer);
	void removeObserver(Observer* observer);
	void notifyObserver(const std::string &msg);
private:
	std::list<Observer*>* _observers;
};

QQGroup::QQGroup()
{
	_observers = new std::list<Observer*>();
}
void QQGroup::registerObserver(Observer* observer)
{
	_observers->push_back(observer);
}
void QQGroup::removeObserver(Observer* observer)
{
	if (_observers->size() > 0)
		_observers->remove(observer);
}
void QQGroup::notifyObserver(const std::string &msg)
{
	std::cout << "ÈºÏûÏ¢:" << msg << std::endl;
	std::list<Observer*>::iterator iter=_observers->begin();
	for (; iter != _observers->end(); iter++)
	{
		(*iter)->Updata(msg);
	}
}