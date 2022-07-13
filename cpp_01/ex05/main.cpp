#include "Harl.hpp"

int	main(int ac, char **av) {
	Harl harl;

	if (ac == 1) {
		displayAll(harl);
		return (0);
	}
	else if (ac > 1) {
		std::string level = getLevel(av[1]);
		harl.complain(level);
	}
	
	return (0);
}