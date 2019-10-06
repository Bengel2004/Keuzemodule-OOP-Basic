#pragma once
#include "Munt.h"
class HalveEuro : public Munt
{
public:
	HalveEuro(std::string _name, float _value);
	HalveEuro();
	std::string GetName();
	float GetValue();
};

