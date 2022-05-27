#include "Contact.hpp"


int	main() {

	Contact contact;
	homeDisplay();
	int command = 0;
	do {
		command = commandCollect();
	} while (command == 0);
	if (command == 1) {
		std::cout << contact.index << std::endl;
		contact.addEntry();
		std::cout << contact.index << std::endl;
		contact.addEntry();
		std::cout << contact.index << std::endl;
		contact.addEntry();
	}
	else if (command == 2) {

	}
	else if (command == 3) {
		exit(0);
	}
}
