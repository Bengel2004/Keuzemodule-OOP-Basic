#pragma once
#include "Munt.h"
#include <iostream>
#include <string>
class KoffieMuntje : public Munt
{
public:
	KoffieMuntje();
	KoffieMuntje(std::string _name, float _value);

	std::string GetName();
	float GetValue();
};

