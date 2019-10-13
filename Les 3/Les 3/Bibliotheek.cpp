#include "pch.h"
#include "Bibliotheek.h"
#include <iostream>
#include <string>


Bibliotheek::Bibliotheek()
{
}


Bibliotheek::~Bibliotheek()
{
	std::cout << "Bibliotheek Destructor" << std::endl;;
	delete boek;
}

Bibliotheek & Bibliotheek::operator=(const Bibliotheek & _bibliotheek)
{
	std::cout << "Assignment operator" << std::endl;
	if (this != &_bibliotheek) {

		if (boek) delete boek;

		boek = new Boek;
		boek->SetName(_bibliotheek.boek->GetBook());
		return *this;
	}
}

Bibliotheek::Bibliotheek(const Bibliotheek & _bibliotheek)
{
	std::cout << "Copy actor" << std::endl;

	boek = new Boek;
	boek->SetName(_bibliotheek.boek->GetBook());
}

void Bibliotheek::Show()
{
	if (boek)
	{
		std::cout << "- Bibliotheek bevat " << boek->GetBook() << std::endl;
	}
	else
	{
		std::cout << "- Bibliotheek is leeg" << std::endl;
	}
}

void Bibliotheek::Add(std::string _name)
{
	boek = new Boek(_name);
}
