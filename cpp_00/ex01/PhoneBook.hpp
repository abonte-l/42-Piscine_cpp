#ifndef PHONEBOOK_H
# define PHONEBOOK_H

#include <string>
#include <iostream>
#include <iomanip>
#include "Contact.hpp"


class	PhoneBook {
	private:
		int _indexGen;
		int _size;
		
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
		int getSize ();
		
}; 

void	homeDisplay();
void 	addDisplay(PhoneBook &);
void 	searchDisplay(PhoneBook &);
void 	exitDisplay(PhoneBook &);

#endif