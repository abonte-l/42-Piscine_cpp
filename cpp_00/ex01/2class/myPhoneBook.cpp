#include "PhoneBook.hpp"

int	main() {
	std::string command;
	PhoneBook repertoire;
	homeDisplay();
	while (!std::cin.eof()) {
		std::cout << std::endl << "Enter your command : ";
		std::getline(std::cin, command);
		std::cout << std::endl;
		for (int j=0; command[j]!=0; j++) {
				command[j] = toupper(command[j]);
		}
		if (command == "ADD") {
			addDisplay(repertoire); 
		}
		else if (command == "SEARCH") {
			searchDisplay(repertoire);
		}
		else if (command == "EXIT") { 
			exitDisplay(repertoire);
			break;
		}
	}

	
}
