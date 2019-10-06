#pragma once
#include <string>
#include "Student.h"
#include "Docent.h"
#include <vector>
class Module {
private:
	std::string name;
	int ec;
	std::vector<std::string> studenten;
	std::string docent;

public:
	Module(const std::string _name, float _ec);
	std::string GetName();
	float GetEc();
	void SetStudent(Student _student);
	std::string GetStudent(int _index);

	void SetDocent(Docent _docent);
	std::string GetDocent();
};

