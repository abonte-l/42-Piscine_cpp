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
	int m_index;
	int m_indexCreation;
	std::string m_firstName;
	std::string m_lastName;
	std::string m_nickName;
	std::string m_phoneNumber;
	std::string m_darkestSecret;
}; 

#endif