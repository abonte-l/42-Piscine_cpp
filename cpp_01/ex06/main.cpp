#include "Harl.hpp"

int	main(int ac, char **av) {
	Harl harl;

	if (ac != 2) {
		std::cout << "Error : Not enough arguments " << std::endl;
		return (-1);
	}

	enum levels {
		DEBUG = 0,
		INFO = 1,
		WARNING = 2,
		ERROR = 3,
	};

	switch (getFilter(av[1])) {
		case DEBUG:
			std::cout << "[ DEBUG ]"<< std::endl;
			harl.complain("DEBUG");
			break;
		case INFO:
			std::cout << "[ INFO ]"<< std::endl;
			harl.complain("INFO");
			break;
		case WARNING:
			std::cout << "[ WARNING ]"<< std::endl;
			harl.complain("WARNING");
			break;
		case ERROR:
			std::cout << "[ ERROR ]"<< std::endl;
			harl.complain("ERROR");
			break;
		default:
			std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
			break;
		
	}

	return (0);
}