#pragma once
#include <string>
#include <iostream>

class Munt
{
public:
	Munt();
	Munt(std::string _name, float _value);
	virtual std::string GetName() = 0;
	virtual float GetValue() = 0;
protected:
	std::string name;
	float value;
};

