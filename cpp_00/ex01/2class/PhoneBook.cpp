#include "PhoneBook.hpp"

PhoneBook::PhoneBook() : _indexGen(1), _indexCount(0) {
}

PhoneBook::~PhoneBook() {

}

void	PhoneBook::addEntry() {

	int i = (_indexGen - 1) % 8;
	_data[i]._index = i + 1;
	std::cout << "i = " << i << std::endl;
	std::cout << "Enter contact's firstname : ";
	std::getline(std::cin, _data[i]._firstName);
	std::cout << "Enter contact's lastname : ";
	std::getline(std::cin, _data[i]._lastName);
	std::cout << "Enter contact's nickname : ";
	std::getline(std::cin, _data[i]._nickName);
	std::cout << "Enter contact's phone number : ";
	std::getline(std::cin, _data[i]._phoneNumber);
	std::cout << "Enter contact's darkest secret : ";
	std::getline(std::cin, _data[i]._darkestSecret);
	std::cout  << std::endl;
	++_indexGen;
	if (_indexCount < 8)
		++_indexCount;
}

void PhoneBook::displayFirstLine() {
	std::cout << std::setfill('-');
	for (int i = 0; i < 4; ++i)
		std::cout << "+" << std::setw(10) << "";
	std::cout << "+" << std::endl << std::setfill(' ');
	std::cout << "|" << std::setw(10) << "INDEX";
	std::cout << "|" << std::setw(10) << "FIRSTNAME";
	std::cout << "|" << std::setw(10) << "LASTNAME";
	std::cout << "|" << std::setw(10) << "NICKNAME";
	std::cout << "|" << std::endl;
	std::cout << std::setfill('-');
	for (int i = 0; i < 4; ++i)
		std::cout << "+" << std::setw(10) << "";
	std::cout << "+" << std::endl << std::setfill(' ');
}

std::string PhoneBook::stringCutter(std::string str) {
	if (str.length() <= 10)
		return(str);
	str = str.substr(0, 9) + ".";
	return(str);
}

void PhoneBook::displayAll() {
	
	if (_indexCount == 0) {
		std::cout << std::endl;
		std::cout << "NO CONTACTS TO DISPLAY" << std::endl;
		std::cout << std::endl;
	}
	displayFirstLine();
	for (int i = 0; i < _indexCount; i++) {
		std::cout << "|" << std::setw(10) << _data[i]._index;
		std::cout << "|" << std::setw(10) << stringCutter(_data[i]._firstName);
		std::cout << "|" << std::setw(10) << stringCutter(_data[i]._lastName);
		std::cout << "|" << std::setw(10) << stringCutter(_data[i]._nickName);
		std::cout << "|" << std::endl;
	}

}

void	PhoneBook::displayEntry(int i) {
	std::cout << "FIRSTNAME : " << _data[i]._firstName << std::endl;
	std::cout << "LASTNAME : "<< _data[i]._lastName << std::endl;
	std::cout << "NICKNAME : "<< _data[i]._nickName << std::endl;
	std::cout << "LASTNAME : "<< _data[i]._phoneNumber << std::endl;
	std::cout << "NICKNAME : "<< _data[i]._darkestSecret << std::endl;
}