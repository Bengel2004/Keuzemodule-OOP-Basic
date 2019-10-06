#include "pch.h"
#include "Student.h"
#include "Persoon.h"


Student::Student(const std::string _name, int _age, int _nr)
{ 
	this->name = _name;
	this->age = _age;
	this->studentNr = _nr;
}
//{
//}
//
//
//Student::~Student()
//{
//}



float Student::GetStudentNr()
{
	return studentNr;
}