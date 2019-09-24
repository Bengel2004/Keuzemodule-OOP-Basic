#pragma once
#include <string>
#include "Persoon.h"

class Student : Persoon {
private:
	std::string name;
	int studentNr;

public:
	Student();
	Student(const std::string _name, float _nr) : name(_name), studentNr(_nr) { }

	std::string getName()
	{
		return name;
	}

	float getStudentNr()
	{
		return studentNr;
	}
};
