#pragma once
#include"Observer.h"
#include"Subject.h"
#include<string>
#include<iostream>
class RoomMate :public Observer
{
public:
	RoomMate(std::string name, std::string now, std::string action);
	void Updata(const std::string &msg);
	std::string getName();
private:
	std::string _name;
	std::string _action;
	std::string  _now;
};

RoomMate::RoomMate(std::string name, std::string now, std::string action)
{
	this->_name = name;
	this->_action = action;
	this->_now = now;
}
std::string RoomMate::getName()
{
	return _name;
}
void RoomMate::Updata(const std::string &msg)
{
	std::cout << "This is " << _name << std::endl;
	if (msg == "µãÃûÁË")
	{
		std::cout << "Action: " << _action << std::endl << std::endl;
	}
	else
	{
		std::cout << "go on: " << _now << std::endl << std::endl;
	}
}