#include "pch.h"
#include "Module.h"


Module::Module(const std::string _name, float _ec) : name(_name), ec(_ec) { }

std::string Module::GetName()
{
	return name;
}

float  Module::GetEc()
{
	return ec;
}

void Module::SetDocent(Docent _docent)
{
	docent = _docent.GetName();
}
std::string Module::GetDocent()
{
	return docent;
}

void Module::SetStudent(Student _student)
{
	studenten.push_back(_student.GetName());
}
std::string Module::GetStudent(int _index) 
{
	return studenten.at(_index);
}
