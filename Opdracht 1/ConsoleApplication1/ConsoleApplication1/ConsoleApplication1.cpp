
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
	Docent Leraar1 = Docent("Kipje", 31, 3.50);
	std::cout << Leraar1.GetName() << " " << Leraar1.getSalary() << std::endl;

	// heap (Grote objecten)
	Docent* Leraar2 = new Docent("Koetje", 33, 5.50);
	std::cout << Leraar2->GetName() << " " << Leraar2->GetAge() << " Jaar $" << Leraar2->getSalary()  << std::endl;
	delete Leraar2;

	Student* student1 = new Student("Bob", 21, 30287);
	std::cout << student1->GetName() << " " << student1->GetAge() << " Jaar Studentnr " << student1->GetStudentNr() << std::endl;
	delete student1;
   
}

