#include "pch.h"
#include "Euro.h"


Euro::Euro()
{
}

Euro::Euro(std::string _name, float _value) : Munt(_name, _value)
{
}


std::string Euro::GetName()
{
	return name;
}

float Euro::GetValue()
{
	return value;
}
