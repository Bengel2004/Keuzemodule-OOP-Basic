#include "pch.h"
#include "Boek.h"
#include <iostream>
#include <string>


Boek::Boek()
{
	std::cout << "Default Empty book" << std::endl;;
}


Boek::~Boek()
{
	std::cout << "Book Destructor" << std::endl;;
}

Boek::Boek(std::string _name) : name(_name)
{
}

std::string Boek::GetBook()
{
	return name;
}

void Boek::SetName(std::string _name)
{
	this->name = _name;
}
