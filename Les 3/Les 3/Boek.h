#pragma once
#include <string>
class Boek
{
public:
	Boek();
	~Boek();
	Boek(std::string _name);
	std::string GetBook();
	void SetName(std::string _name);

private:
	std::string name = "(Onbekend)";

};

