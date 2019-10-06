#include "pch.h"
#include "Munt.h"


Munt::Munt()
{
}

Munt::Munt(std::string _name, float _value) : name(_name), value(_value)
{

}

std::string Munt::GetName()
{
	return name;
}

float Munt::GetValue()
{
	return value;
}

