#include "PhoneBook.hpp"

int	main() {

	PhoneBook myPhoneBook;
	homeDisplay();
	int command = 0;
	do {
		command = commandCollect();
	} while (command == 0);
			
}
