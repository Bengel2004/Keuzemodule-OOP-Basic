#pragma once
#include "Boek.h"
#include <string>
class Bibliotheek
{
public:
	Bibliotheek();
	~Bibliotheek();

	Bibliotheek& operator=(const Bibliotheek& _bibliotheek);
	Bibliotheek(const Bibliotheek & _bibliotheek);

	void Show();
	void Add(std::string _name);
private:
	Boek* boek;
};

