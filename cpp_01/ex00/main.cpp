#include "Zombie.hpp"

int	main() {

	std::cout << GEN_Z1 << std::endl;
	Zombie zombie1(Z1_NAME);
	zombie1.announce();

	std::cout << GEN_Z2 << std::endl;
	Zombie *zombie2 = newZombie(Z2_NAME);
	zombie2->announce();
	delete(zombie2);
	
	std::cout << GEN_Z3 << std::endl;
	randomChump(Z3_NAME);
	return (0);
}