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
		Contact _data[8];
		
	public:
		PhoneBook();
		~PhoneBook();

		int getSize ();
		void setData(int);
		void addEntry();
		void displayAll();
		void displayDataEntry(int);
		void displayFirstLine();
		void displayLastLine();
		void displayDataOverview();
}; 

void	homeDisplay();
void 	addDisplay(PhoneBook &);
void 	searchDisplay(PhoneBook &);
void 	exitDisplay();

#endif