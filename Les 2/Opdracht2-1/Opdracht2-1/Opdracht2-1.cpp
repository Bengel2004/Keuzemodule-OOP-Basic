// Opdracht2-1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <fstream>

#define ReadFile "/Users/Niels Poelder/Documents/C++/School/Les 2/Koetje.txt"
#define WriteFile "/Users/Niels Poelder/Documents/C++/School/Les 2/Opdracht-2-1-Output.txt"

int countCharactersInFile() {
	char ch;
	std::ifstream in_stream;

	int count = 0;

	in_stream.open(ReadFile);
	in_stream.get(ch);
	while (!in_stream.fail()) {
		count++;
		in_stream.get(ch);
	}
	in_stream.close();

	return count;
}

char getCharacterAtPosition(int number) {
	char ch;
	std::ifstream fileInput;

	fileInput.open(ReadFile);
	for (int i = 0; i < number; i++) {
		fileInput.get(ch);
	}
	fileInput.close();
	return ch;
}

int main() {
	int count;

	count = countCharactersInFile();

	std::ifstream in_stream;

	in_stream.open(ReadFile);
	if (!in_stream) {
		std::cout << "Probleem bij openen file" << std::endl;
		exit(1);
	}

	std::ofstream out_stream;
	out_stream.open(WriteFile);
	if (!out_stream) {
		std::cout << "Probleem bij openen output file" << std::endl;
		exit(1);
	}
	

	for (int i = count; i != 0; i--) 
	{
		out_stream << getCharacterAtPosition(i);
		std::cout << getCharacterAtPosition(i);
	}

	in_stream.close();
	out_stream.close();


	return 0;
}