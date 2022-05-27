#ifndef CONTACT_CLASS_H
# define CONTACT_CLASS_H

#include <string>
#include <iostream>

class	Contact {

	public:
	Contact();
	~Contact();

	void addEntry(std::string);
	void deleteEntry(std::string);
	void displayEntry(std::string);

	private:
	int _index;
	int _indexCreation;
	std::string _firstName;
	std::string _lastName;
	std::string _nickName;
	std::string _phoneNumber;
	std::string _darkestSecret;
}; 

#endif