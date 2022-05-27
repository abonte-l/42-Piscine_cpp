#ifndef PHONEBOOK_CLASS_H
# define PHONEBOOK_CLASS_H

#include <string>
#include <iostream>
#include <iomanip>  
#include <ctime>
#include <chrono>
#include "Contact.hpp"

class	Contact;

class	PhoneBook {

	public:
	PhoneBook();
	~PhoneBook();

	void addContact();
	void deleteContact();
	void displayContact();
	void homeDisplay();

	private:
	Contact _phoneBook[8];
};

void	homeDisplay();
int		commandCollect();

#endif