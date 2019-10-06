// Opdracht2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <fstream>
#include <string>

#define FILE1 "/Users/Niels Poelder/Documents/C++/School/Les 2/Koetje.txt"
#define FILE2 "/Users/Niels Poelder/Documents/C++/School/Les 2/Kipje.txt"

#define OUTFILE "/Users/Niels Poelder/Documents/C++/School/Les 2/Opdracht2Output.txt"

int main() {
	std::ifstream in_streamKoetje;
	std::ifstream in_streamKipje;

	in_streamKoetje.open(FILE1);
	if (!in_streamKoetje) {
		std::cout << "Probleem bij openen file Koetje" << std::endl;
		exit(1);
	}

	in_streamKipje.open(FILE2);
	if (!in_streamKipje) {
		std::cout << "Probleem bij openen file Kipje" << std::endl;
		exit(1);
	}

	std::ofstream out_stream;
	out_stream.open(OUTFILE);
	if (!out_stream) {
		std::cout << "Probleem bij openen output file" << std::endl;
		exit(1);
	}

	std::string data;
	getline(in_streamKoetje, data);
	std::cout << data << std::endl;
	out_stream << data << std::endl;

	getline(in_streamKipje, data);
	std::cout << data << std::endl;
	out_stream << data << std::endl;

	while (!in_streamKoetje.eof() && !in_streamKipje.eof()) {
		getline(in_streamKoetje, data);
		std::cout << data << std::endl;
		out_stream << data << std::endl;

		getline(in_streamKipje, data);
		std::cout << data << std::endl;
		out_stream << data << std::endl;
		
		// het had vast ook wel gekunt met modulo maar dit werkt ook gewoon
	}
	
	in_streamKoetje.close();
	in_streamKipje.close();

	out_stream.close();

	return 0;
}