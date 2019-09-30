#pragma once
#include <string>
#include "Persoon.h"

class Student : public Persoon {
private:
	int studentNr;

public:
	Student();
	Student(const std::string _name, int _age, int _nr);

	float GetStudentNr();
};
