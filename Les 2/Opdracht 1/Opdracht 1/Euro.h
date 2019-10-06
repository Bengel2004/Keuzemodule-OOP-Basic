#pragma once
#include "Munt.h"
class Euro: public Munt
{
public:
	Euro();
	Euro(std::string _name, float _value);
	std::string GetName();
	float GetValue();
};

