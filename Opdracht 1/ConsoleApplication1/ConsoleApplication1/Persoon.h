#pragma once
class Persoon
{
protected:
	std::string name;
	int age;

public:
	Persoon();
	//virtual std::string GetName() = 0; met de = 0 geef je aan dat gehele class abstract is.
	virtual std::string GetName();
	virtual int GetAge();
};

