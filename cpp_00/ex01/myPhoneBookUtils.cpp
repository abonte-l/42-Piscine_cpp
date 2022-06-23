#include "PhoneBook.hpp"
#include <cstdlib>

void 	addDisplay(PhoneBook& repertoire) {
	std::cout << "ADDING A CONTACT" << std::endl;
	repertoire.addEntry();
}

void 	searchDisplay(PhoneBook& repertoire) {
	std::string selection;
	std::cout << "SEARCH ENGINE" << std::endl;
	repertoire.displayAll();
	std::cout << std::endl;
	do {
	std::cout << "SELECT THE CONTACT TO DISPLAY BY ENTER IT'S INDEX" << std::endl;
	std::getline(std::cin, selection);
	} while (!(std::strtol(selection.data(), NULL, 10) <= repertoire.getSize() && std::strtol(selection.data(), NULL, 10) >= 1));
	int i = std::strtol(selection.data(), NULL, 10);
	repertoire.displayDataEntry(i -1);
}

void 	exitDisplay() {
	std::cout << std::endl << "EXITING..." << std::endl;
	std::cout << std::endl << "🌺 \033[1;31mBYE LOVELY\033[0;1m 🌺" << std::endl;
}


void	homeDisplay() {
	std::cout << std::endl;
	std::cout << " 🌺 \033[1;31mWELCOME ON MY_AWESOME_PHONE_BOOK\033[0;1m 🌺" << std::endl;
	std::cout << std::endl;
	std::cout << "Available Commands :" << std::endl;
	std::cout << std::endl;
	std::cout << "ADD : save new contact" << std::endl;
	std::cout << "SEARCH : display a contact" << std::endl;
	std::cout << "EXIT : close MY_AWESOME_PHONE_BOOK" << std::endl;
}