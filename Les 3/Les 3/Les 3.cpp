// Les 3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include "Boek.h"
#include "Bibliotheek.h"
#include <iostream>

int main()
{
    std::cout << "Hello World!\n"; 

	std::cout << "--Bibliotheek aanmaken" << std::endl;
	Bibliotheek bibliotheek1 = Bibliotheek();
	bibliotheek1.Show();
	std::cout << "--Boek toevoegen" << std::endl;
	bibliotheek1.Add("Het gouden ei");
	bibliotheek1.Show();

	std::cout << "--Bibliotheek 2 aangemaakt" << std::endl;
	Bibliotheek bibliotheek2 = Bibliotheek();
	bibliotheek2.Show();


	bibliotheek2 = bibliotheek1;
	bibliotheek2.Show();
}
