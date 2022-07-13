#ifndef HARL_H
# define HARL_H

#include <iostream>
#include <string>

#define ERROR_ARG "\033[1;31mError : Not enough parameters \033[0;0m"

#define LEVEL_01 "\033[1;32m[ DEBUG ]\033[0;0m"
#define LEVEL_02 "\033[1;33m[ INFO ]\033[0;0m"
#define LEVEL_03 "\033[1;34m[ WARNING ]\033[0;0m"
#define LEVEL_04 "\033[1;31m[ ERROR ]\033[0;0m"

#define DEBUG_MESS "I love having extra bacon for my XL-double-cheese-triple-pickle-special-ketchup burger.\nI really do!"
#define INFO_MESS "I cannot believe adding extra bacon costs more money.\nYou didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!"
#define WARNING_MESS "I think I deserve to have some extra bacon for free.\nI’ve been coming for years whereas you started working here since last month."
#define ERROR_MESS "This is unacceptable! I want to speak to the manager now."
#define DEFAULT_MESS "\033[1;36m[ Probably complaining about insignificant problems ]\033[0;0m"

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

int getFilter(std::string);

#endif
