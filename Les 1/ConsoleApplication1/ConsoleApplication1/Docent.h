#pragma once
#include <string>
#include "Persoon.h"

class Docent : public Persoon {
private:
	float salary;

public:
	// Je kan het dus of defineren door 
	// name(_name),
	// in de header te doen
	// of
	// this->name = _name;
	// in de haakjes te doen

	Docent();
	Docent(const std::string _name, int _age, float _salary);

	float getSalary();
};

