#include "Contact.hpp"

Contact::Contact() {
	
}

Contact::~Contact() {

}

void Contact::setIndex(int i) {
	_index = i;
}

void Contact::setContact() {
	do {
		std::cout << "Enter contact's firstname > ";
		std::getline(std::cin, _firstName);
		if (std::cin.eof())
			return;
	} while (_firstName.length() == 0);
	do {
		std::cout << "Enter contact's lastname > ";
		std::getline(std::cin, _lastName);
		if (std::cin.eof())
			return;
	} while (_lastName.length() == 0);
	do {
		std::cout << "Enter contact's nickname > ";
		std::getline(std::cin, _nickName);
		if (std::cin.eof())
			return;
	} while (_nickName.length() == 0);
	do {
		std::cout << "Enter contact's phone number > ";
		std::getline(std::cin, _phoneNumber);
		if (std::cin.eof())
			return;
	} while (_phoneNumber.length() == 0);
	do {
		std::cout << "Enter contact's darkest secret > ";
		std::getline(std::cin, _darkestSecret);
		if (std::cin.eof())
			return;
	} while (_darkestSecret.length() == 0);
}

void Contact::printAndCut(std::string str) {
	std::cout << "|" << std::setw(10);
	if (str.length() > 10)
		str = str.substr(0, 9) + ".";
	std::cout << str;
}

void	Contact::displayEntry() {
	std::cout << std::endl;
	std::cout << std::setw(12) << "FIRSTNAME : " << _firstName << std::endl;
	std::cout << std::setw(12) << "LASTNAME : "<< _lastName << std::endl;
	std::cout << std::setw(12) << "NICKNAME : "<< _nickName << std::endl;
	std::cout << std::setw(12) << "LASTNAME : "<< _phoneNumber << std::endl;
	std::cout << std::setw(12) << "NICKNAME : "<< _darkestSecret << std::endl;
}

void	Contact::displayOverview(void) {
	std::stringstream ss;
	ss << _index;
	std::string indexConvert = ss.str();
	printAndCut(indexConvert);
	printAndCut(_firstName);
	printAndCut(_lastName);
	printAndCut(_nickName);
	std::cout << "|";
	std::cout << std::endl;
}
