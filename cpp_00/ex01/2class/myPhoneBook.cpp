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
			std::string selection;
			std::cout << "SEARCH ENGINE" << std::endl;
			repertoire.displayAll();
			std::cout << std::endl;
			do {
			std::cout << "SELECT THE CONTACT TO DISPLAY BY ENTER IT'S INDEX" << std::endl;
			std::getline(std::cin, selection);
			} while (!(std::stoi(selection) <= repertoire._indexPub && std::stoi(selection) >= 1));
			int i = std::stoi(selection);
			repertoire.displayEntry(i -1);
		}
		else if (command == "EXIT") { 
			std::cout << "EXITING..." << std::endl;
			std::cout << "BYE LOVELY" << std::endl;
			break;
		}
	}

	
}
