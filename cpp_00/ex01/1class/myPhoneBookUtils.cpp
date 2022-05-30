#include "Contact.hpp"

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

int		commandCollect() {
	std::string commandStr;
	int commandNum = 0;
	std::cout << "Enter your command : ";
	getline(std::cin, commandStr);
	std::cout << std::endl;
	for (int j=0; commandStr[j]!=0; j++) {
				commandStr[j] = toupper(commandStr[j]);
			}
	if (commandStr == "ADD") {
		commandNum = 1;
	}
	else if (commandStr == "SEARCH") {
		commandNum = 2;
	}
	else if (commandStr == "EXIT") {
		commandNum = 3;
	}
	return commandNum;
}