#include "Contact.hpp"


int	main() {

	Contact contact;
	homeDisplay();
	int command = 0;
	do {
		command = commandCollect();
	} while (command == 0);
	if (command == 1) {
		std::cout << "ADDING A CONTACT" << std::endl;
		contact.addEntry();
		contact.displayEntry();
	}
	else if (command == 2) {
		std::cout << "SEARCH ENGINE" << std::endl;
	}
	else if (command == 3) {
		std::cout << "EXITING..." << std::endl;
		std::cout << "BYE LOVELY" << std::endl;
		exit(0);
	}
}
