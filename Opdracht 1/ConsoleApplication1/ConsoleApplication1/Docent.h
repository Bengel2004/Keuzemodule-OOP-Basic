#pragma once
#include <string>

class Docent {
private:
	std::string name;
	float salary;

public:
	// Je kan het dus of defineren door 
	// name(_name),
	// in de header te doen
	// of
	// this->name = _name;
	// in de haakjes te doen

	Docent();
	Docent(const std::string _name, float _salary) : name(_name), salary(_salary) {
		//this->name = _name;
		//this->salary = _salary;
	}

	std::string getName()
	{
		return name;
	}

	float getSalary()
	{
		return salary;
	}
};

