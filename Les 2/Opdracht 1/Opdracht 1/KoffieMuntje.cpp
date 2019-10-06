#include "pch.h"
#include "KoffieMuntje.h"
#include "Munt.h"


KoffieMuntje::KoffieMuntje()
{
}

KoffieMuntje::KoffieMuntje(std::string _name, float _value) : Munt(_name, _value)
{

}

std::string KoffieMuntje::GetName()
{
	return name;
}

float KoffieMuntje::GetValue()
{
	return value;
}

