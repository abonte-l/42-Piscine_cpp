#ifndef PHONEBOOK_CLASS_H
# define PHONEBOOK_CLASS_H

#include <string>

class	PhoneBook {

	public:

	PhoneBook();
	~PhoneBook();

	void addFirstName(std::string);
	void addLasttName(std::string);
	void addNickName(std::string);
	void addPhonenumber(std::string);
	void addDarkestSecret(std::string);

	private:
	int m_index;
	std::string m_firstName;
	std::string m_lastName;
	std::string m_nickName;
	std::string m_phoneNumber;
	std::string m_darkestSecret;
}; 

#endif