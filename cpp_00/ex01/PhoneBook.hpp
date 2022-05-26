#ifndef PHONEBOOK_CLASS_H
# define PHONEBOOK_CLASS_H

#include <string>

class	PhoneBook {

	public:
	PhoneBook();
	~PhoneBook();

	void	addContact();

	private:
	char m_phoneBook [8];

};

#endif