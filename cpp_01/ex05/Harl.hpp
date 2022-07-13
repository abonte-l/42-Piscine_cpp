#ifndef HARL_H
# define HARL_H

#include <iostream>
#include <string>

#define ERROR_ARG "Error : Not enough parameters "

#define LEVEL_01 "\033[1;32mLEVEL 01 : DEBUG\033[0;0m"
#define LEVEL_02 "\033[1;33mLEVEL 02 : INFO\033[0;0m"
#define LEVEL_03 "\033[1;34mLEVEL 03 : WARNING\033[0;0m"
#define LEVEL_04 "\033[1;31mLEVEL 04 : ERROR\033[0;0m"
#define LEVEL_INST "\033[1;37mYou can have a display matching the level you asked for : \n \033[1;35m./harl <level you want to display> (./harl DEBUG) "

#define DEBUG_MESS "I love having extra bacon for my XL-double-cheese-triple-pickle-special-ketchup burger.\nI really do!"
#define INFO_MESS "I cannot believe adding extra bacon costs more money.\nYou didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!"
#define WARNING_MESS "I think I deserve to have some extra bacon for free.\nI’ve been coming for years whereas you started working here since last month."
#define ERROR_MESS "This is unacceptable! I want to speak to the manager now."
#define DEFAULT_MESS "[ Probably complaining about insignificant problems ]"


class Harl {
	private:
		void debug(void);
		void info(void);
		void warning(void);
		void error(void);
	public :
		Harl();
		~Harl();
		void complain(std::string);
};

std::string getLevel(std::string);
void displayAll(Harl &);

#endif
