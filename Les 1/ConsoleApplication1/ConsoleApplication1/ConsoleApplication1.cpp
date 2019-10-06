
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

	Module module1 = Module("OOP Basic", 5);
	
	Docent leraar1 = Docent("Kipje", 31, 3.50);
	std::cout << leraar1.GetName() << " " << leraar1.getSalary() << std::endl;
	module1.SetDocent(leraar1);

	// aantal studenten in de klas
	int studentenCount = 5;
	// voeg studenten toe
	for (int i = 0; i < studentenCount; i++) 
	{
		std::string _name;
		int _age;
		int _nr;

		std::cout << std::endl << "Enter Name: ";
		std::cin >> _name;
		std::cout << "Enter Age: ";
		std::cin >> _age;
		std::cout << "Enter Student Nr: ";
		std::cin >> _nr;
		std::cout << std::endl;
		Student _tempStudent = Student(_name, _age, _nr);
		std::cout << "Added " << _name << " to " << module1.GetName() << std::endl;
		module1.SetStudent(_tempStudent);
	}
	// haalt alle studenten op
	for (int i = 0; i < studentenCount; i++)
	{
		std::cout << module1.GetStudent(i) << std::endl;
	}



	// heap (Grote objecten)
	Docent* leraar2 = new Docent("Koetje", 33, 5.50);
	std::cout << leraar2->GetName() << " " << leraar2->GetAge() << " Jaar $" << leraar2->getSalary()  << std::endl;
	delete leraar2;

	Student* student1 = new Student("Bob", 21, 30287);
	std::cout << student1->GetName() << " " << student1->GetAge() << " Jaar Studentnr " << student1->GetStudentNr() << std::endl;
	
	delete student1;
   
}

