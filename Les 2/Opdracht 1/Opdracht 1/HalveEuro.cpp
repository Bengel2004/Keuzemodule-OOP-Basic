#include "pch.h"
#include "HalveEuro.h"


HalveEuro::HalveEuro(std::string _name, float _value) : Munt(_name, _value)
{
}

HalveEuro::HalveEuro()
{
}



std::string HalveEuro::GetName()
{
	return name;
}

float HalveEuro::GetValue()
{
	return value;
}
