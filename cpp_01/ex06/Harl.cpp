#include "Harl.hpp"

Harl::Harl() {

}

Harl::~Harl() {

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
	std::cout << DEBUG_MESS << std::endl;
	std::cout << std::endl;
}
void Harl::info(void) {
	std::cout << INFO_MESS << std::endl;
	std::cout << std::endl;
}
void Harl::warning(void) {
	std::cout << WARNING_MESS << std::endl;
	std::cout << std::endl;
}
void Harl::error(void) {
	std::cout << ERROR_MESS << std::endl;
	std::cout << std::endl;
}

std::string turningUp(std::string data) {
	for (int j=0; data[j]!=0; ++j) {
		data[j] = toupper(data[j]);
	}
	return (data);
}

int getFilter(std::string keyWord) {

	keyWord = turningUp(keyWord);

	std::string levels[] = {
		"DEBUG",
		"INFO",
		"WARNING",
		"ERROR",
	};

	for (int i = 0; i <4; i++) {
		if (levels[i] == keyWord)
			return (i);
	}
	return (-1);
}