#ifndef PHONEBOOK_H
# define PHONEBOOK_H

#include <string>
#include <iostream>
#include <iomanip>
#include "Contact.hpp"


class	PhoneBook {
	private:
		int _indexGen;
		int _indexCount;
		
	public:
		PhoneBook();
		~PhoneBook();

		Contact _data[8];

		void addEntry();
		void displayEntry(int);
		void displayFirstLine();
		void displayLastLine();
		void displayAll();
		std::string stringCutter(std::string);
		
}; 

void	homeDisplay();
void 	searchDisplay();

#endif