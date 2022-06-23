#include "PhoneBook.hpp"

PhoneBook::PhoneBook() : _indexGen(1), _size(0) {
}

PhoneBook::~PhoneBook() {

}

void	PhoneBook::setData(int i) {
	_data[i].setContact();
}

void	PhoneBook::addEntry() {
	int i = (_indexGen - 1) % 8;
	_data[i].setIndex(i + 1);
	setData(i);
	std::cout  << std::endl;
	++_indexGen;
	if (_size < 8){
		++_size;
	}
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

void PhoneBook::displayLastLine() {
	std::cout << std::setfill('-');
	for (int i = 0; i < 4; ++i)
		std::cout << "+" << std::setw(10) << "";
	std::cout << "+" << std::endl << std::setfill(' ');
}

void PhoneBook::displayDataOverview() {
	for (int i = 0; i < _size; i++) {
		_data[i].displayOverview();
	}
}


void PhoneBook::displayAll() {
	if (_size == 0) {
		std::cout << std::endl;
		std::cout << "NO CONTACTS TO DISPLAY" << std::endl;
		std::cout << std::endl;
	}
	else {
		displayFirstLine();
		displayDataOverview();
		displayLastLine();
	}
}

void PhoneBook::displayDataEntry(int i) {
	_data[i].displayEntry();
}

int PhoneBook::getSize() {
	return (_size);
}
