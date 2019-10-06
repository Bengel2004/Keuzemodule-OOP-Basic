// Opdracht 1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <string>
#include "KoffieAutomaat.h"
#include "Euro.h"
#include "HalveEuro.h"
#include "KoffieMuntje.h"

int main()
{
	HalveEuro munt1 = HalveEuro("50 cent", .5);
	Euro munt2 = Euro("Euro", 1);
	KoffieMuntje munt3 = KoffieMuntje("Koffie Muntje", 100);


	KoffieAutomaat automaat = KoffieAutomaat();
	automaat.BuyCoffee(munt1);
	
}



