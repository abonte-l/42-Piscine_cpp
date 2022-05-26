
#include "PhoneBook.hpp"

PhoneBook::PhoneBook() {

}

PhoneBook::~PhoneBook() {

}

void	addContact() {

}

void	deleteContact() {

}

void	displayContact() {

}

void	homeDisplay() {

	std::string test;

	std::cout << std::endl;
	std::cout << "WELCOME ON MY_PHONE_BOOK" << std::endl;
	std::cout << std::endl;
	std::cout << "Available Commands :" << std::endl;
	std::cout << std::endl;
	std::cout << "ADD : save new contact" << std::endl;
	std::cout << "SEARCH : display a contact" << std::endl;
	std::cout << "EXIT : close MY_PHONE_BOOK" << std::endl;
	std::cout << std::endl;
	std::cout << "Enter your command :"; std::cin >> test;
	std::cout << test << std::endl;
}