#include "Harl.hpp"

int	main(int ac, char **av) {
	Harl harl;

	if (ac != 2) {
		std::cout << ERROR_ARG << std::endl;
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
			std::cout << LEVEL_01 << std::endl;
			harl.complain("DEBUG");
		case INFO:
			std::cout << LEVEL_02 << std::endl;
			harl.complain("INFO");
		case WARNING:
			std::cout << LEVEL_03 << std::endl;
			harl.complain("WARNING");
		case ERROR:
			std::cout << LEVEL_04 << std::endl;
			harl.complain("ERROR");
			break;
		default:
			std::cout << DEFAULT_MESS << std::endl;
			break;
		
	}

	return (0);
}