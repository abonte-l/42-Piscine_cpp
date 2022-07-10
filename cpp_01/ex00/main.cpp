#include "Zombie.hpp"

int	main() {

	std::cout << "\033[1;37mGenerate zombie number 01" << std::endl;
	Zombie zombieRand01("\033[1;32mFleshy Fleshington\033[0;1m");
	zombieRand01.announce();

	std::cout << "Generate zombie number 02" << std::endl;
	Zombie *zombieRand02 = newZombie("\033[1;32mFester McBrains\033[0;1m");
	zombieRand02->announce();
	delete(zombieRand02);
	
	std::cout << "Generate zombie number 03" << std::endl;
	randomChump("\033[1;32mBrainy Undead\033[0;1m");
	return (0);
}