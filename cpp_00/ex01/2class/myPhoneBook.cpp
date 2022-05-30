#include "Contact.hpp"
#include "PhoneBook.hpp"



void	homeDisplay() {
	std::cout << std::endl;
	std::cout << "WELCOME ON MY_AWESOME_PHONE_BOOK" << std::endl;
	std::cout << std::endl;
	std::cout << "Available Commands :" << std::endl;
	std::cout << std::endl;
	std::cout << "ADD : save new contact" << std::endl;
	std::cout << "SEARCH : display a contact" << std::endl;
	std::cout << "EXIT : close MY_PHONE_BOOK" << std::endl;
	std::cout << std::endl;
}


int	main() {
	std::string command;
	PhoneBook phoneBook;

	homeDisplay();
	while (!std::cin.eof()) {
	//	std::cout << "PROUT 01" << std::endl;
		
	//	std::cout << "PROUT 02" << std::endl;
		std::cout << "Enter your command : ";
		std::getline(std::cin, command);
	//	std::cout << "PROUT 03" << std::endl;
		std::cout << std::endl;
		for (int j=0; command[j]!=0; j++) {
				command[j] = toupper(command[j]);
		}
		if (command == "ADD") {
			std::cout << "ADDING A CONTACT" << std::endl;
			phoneBook.addEntry();
		}
		else if (command == "SEARCH") {
			
			std::cout << "SEARCH ENGINE" << std::endl;
			phoneBook.displayAll();
			std::cout << "SELECT THE CONTACT TO DISPLAY" << std::endl;
			std::getline(std::cin, ); // je dois mettre une string ici pour que ca fonctionne il faut donc un atoi pour comparer ensuite auxindex
			phoneBook.displayEntry(i);


		}
		else if (command == "EXIT") {
			std::cout << "EXITING..." << std::endl;
			std::cout << "BYE LOVELY" << std::endl;
			break;
		}
		else { 
			std::cout << "Wrong command" << std::endl;
			std::cout << "Please use ADD, SEARCH or EXIT" << std::endl;
		}
	}

	
}
