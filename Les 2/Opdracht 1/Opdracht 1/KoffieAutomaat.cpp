#include "pch.h"
#include <iostream>
#include <string>
#include "KoffieAutomaat.h"
#include "HalveEuro.h"
#include "Euro.h"
#include "KoffieMuntje.h"


KoffieAutomaat::KoffieAutomaat()
{
}


void KoffieAutomaat::BuyCoffee(HalveEuro _munt)
{
	std::cout << "Munt type is " << _munt.GetName() << std::endl;
	std::cout << "Je kan de gewone koffie kopen";
}

void KoffieAutomaat::BuyCoffee(Euro _munt)
{
	std::cout << "Munt type is " << _munt.GetName() << std::endl;
	std::cout << "Je kan de gewone koffie kopen";
	std::cout << "Je kan de fancy koffie kopen";
}

void KoffieAutomaat::BuyCoffee(KoffieMuntje _munt)
{
	std::cout << "Munt type is " << _munt.GetName() << std::endl;
	std::cout << "Je kan de gewone koffie kopen";
	std::cout << "Je kan de fancy koffie kopen";
	std::cout << "Je kan de super deluxe hyper moderne koffie kopen";
}
