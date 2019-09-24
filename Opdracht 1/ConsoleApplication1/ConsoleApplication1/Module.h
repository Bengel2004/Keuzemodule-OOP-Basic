#pragma once
#include <string>

#include "Student.h"
class Module {
private:
	std::string name;
	int ec;

public:
	Module(const std::string _name, float _ec) : name(_name), ec(_ec) { }

	std::string getName()
	{
		return name;
	}

	float getEc()
	{
		return ec;
	}
};

