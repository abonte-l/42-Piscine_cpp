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
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger.\nI really do!" << std::endl;
}
void Harl::info(void) {
	std::cout << "I cannot believe adding extra bacon costs more money.\nYou didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}
void Harl::warning(void) {
	std::cout << "I think I deserve to have some extra bacon for free.\nI’ve been coming for years whereas you started working here since last month." << std::endl;
}
void Harl::error(void) {
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
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