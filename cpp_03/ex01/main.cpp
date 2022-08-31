#include "ClapTrap.hpp"

int	main() {
	ClapTrap redshirt;
	ClapTrap claptrap("\033[1;36mJim\033[0;1m");
	

	redshirt.attack("bandit");
	redshirt.takeDamage(5);
	redshirt.beRepaired(7);
	redshirt.takeDamage(10);
	redshirt.attack("bandit");
	redshirt.beRepaired(3);

	std::cout << std::endl;

	claptrap.attack("bandit");
	claptrap.takeDamage(7);
	claptrap.beRepaired(6);

	return (0);
} 