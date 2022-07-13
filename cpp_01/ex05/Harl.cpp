#include "Harl.hpp"

Harl::Harl() {

}

Harl::~Harl() {

}

void displayAll(Harl &harl) {

	harl.complain("DEBUG");
	harl.complain("INFO");
	harl.complain("WARNING");
	harl.complain("ERROR");
	std::cout << LEVEL_INST << std::endl;
	std::cout << std::endl;

}

void Harl::complain(std::string level) {

	std::string levels[] = {
		"DEBUG",
		"INFO",
		"WARNING",
		"ERROR",
	};
	
	void (Harl::*array[])(void) = {
		&Harl::debug,
		&Harl::info,
		&Harl::warning,
		&Harl::error
	};
	
	for (int i = 0; i < 4; i++) {
		if (levels[i] == level)
		{
			(this->*array[i])();
			return;
		}
	}
}

void Harl::debug() {
	std::cout << LEVEL_01 << std::endl;
	std::cout << DEBUG_MESS << std::endl;
	std::cout << std::endl;
}
void Harl::info(void) {
	std::cout << LEVEL_02 << std::endl;
	std::cout << INFO_MESS << std::endl;
	std::cout << std::endl;
}
void Harl::warning(void) {
	std::cout << LEVEL_03 << std::endl;
	std::cout << WARNING_MESS << std::endl;
	std::cout << std::endl;
}
void Harl::error(void) {
	std::cout << LEVEL_04 << std::endl;
	std::cout << ERROR_MESS << std::endl;
	std::cout << std::endl;
}

std::string turningUp(std::string data) {
	for (int j=0; data[j]!=0; ++j) {
		data[j] = toupper(data[j]);
	}
	return (data);
}

std::string getLevel(std::string keyWord) {

	keyWord = turningUp(keyWord);

	std::string levels[] = {
		"DEBUG",
		"INFO",
		"WARNING",
		"ERROR",
	};

	for (int i = 0; i <4; i++) {
		if (levels[i] == keyWord) {
			std::string level = levels[i];
			return (level);
		}
	}
	return ("No level detected");
}