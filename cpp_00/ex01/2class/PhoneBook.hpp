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

		Contact::contactData _data[8];

		void addEntry();
		void displayEntry(int);
		void displayFirstLine();
		void displayAll();
		std::string stringCutter(std::string);
		
}; 


#endif