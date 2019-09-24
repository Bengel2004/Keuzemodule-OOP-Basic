
#include "pch.h"
#include "Docent.h"
#include "Student.h"
#include "Module.h"
#include <iostream>
#include <string>

//using namespace std;

int main()
{
	// stack (kleine waardes zoals variables)
	Docent Leraar1 = Docent("Kipje", 3.50);
	std::cout << Leraar1.getName() << " " << Leraar1.getSalary() << std::endl;

	// heap (Grote objecten)
	Docent* Leraar2 = new Docent("Koetje", 5.50);
	std::cout << Leraar2->getName() << " " << Leraar2->getSalary() << std::endl;
	delete Leraar2;
   
}

