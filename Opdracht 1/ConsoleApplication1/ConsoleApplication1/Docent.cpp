#include "pch.h"
#include "Docent.h"

Docent::Docent() {}

Docent::Docent(const std::string _name, int _age, float _salary)
{
	this->name = _name;
	this->age = _age;
	this->salary = _salary;
}

float Docent::getSalary()
{
	return salary;
}




