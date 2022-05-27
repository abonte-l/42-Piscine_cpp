#ifndef PHONEBOOK_CLASS_H
# define PHONEBOOK_CLASS_H

#include <string>
#include <iostream>
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
	char m_phoneBook[8];
};

void	homeDisplay();
int		commandCollect();

#endif