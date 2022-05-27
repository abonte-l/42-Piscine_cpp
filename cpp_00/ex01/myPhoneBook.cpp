#include "PhoneBook.hpp"


int	main() {

	PhoneBook myPhoneBook;
	homeDisplay();
	int command = 0;
	std::string commandStr;
	do {
		command = commandCollect();
	} while (command == 0);
	if (command == 1) {

	}
	else if (command == 2) {

	}
	else if (command == 3) {
		exit(0);
	}
}
