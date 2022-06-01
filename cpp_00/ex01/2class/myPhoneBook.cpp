#include "PhoneBook.hpp"

int	main() {
	std::string command;
	PhoneBook repertoire;
	homeDisplay();
	while (!std::cin.eof()) {
		std::cout << "Enter your command : ";
		std::getline(std::cin, command);
		std::cout << std::endl;
		for (int j=0; command[j]!=0; j++) {
				command[j] = toupper(command[j]);
		}
		if (command == "ADD") {
			std::cout << "ADDING A CONTACT" << std::endl;
			repertoire.addEntry();
		}
		else if (command == "SEARCH") {
			searchDisplay();
		}
		else if (command == "EXIT") { 
			std::cout << "EXITING..." << std::endl;
			std::cout << "BYE LOVELY" << std::endl;
			break;
		}
	}

	
}
