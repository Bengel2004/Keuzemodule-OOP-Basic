#pragma once
class Persoon
{
protected:
	std::string name;
	int age;

public:
	Persoon();
	virtual std::string GetName();
	virtual int GetAge();
};

