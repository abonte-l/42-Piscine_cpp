#include "PhoneBook.hpp"

void 	searchDisplay() {
	std::cout << "SELECT THE CONTACT TO DISPLAY BY ENTER IT'S INDEX" << std::endl;
	std::getline(std::cin, selection);
}

void	homeDisplay() {
	std::cout << std::endl;
	std::cout << "🌼 WELCOME ON MY_AWESOME_PHONE_BOOK 🌼" << std::endl;
	std::cout << std::endl;
	std::cout << "Available Commands :" << std::endl;
	std::cout << std::endl;
	std::cout << "ADD : save new contact" << std::endl;
	std::cout << "SEARCH : display a contact" << std::endl;
	std::cout << "EXIT : close MY_AWESOME_PHONE_BOOK" << std::endl;
	std::cout << std::endl;
}