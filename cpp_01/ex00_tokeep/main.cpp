#include "Zombie.hpp"

int	main() {
	std::string zombieName[3];
	 for (int i = 0; i < 3; i++) 
		zombieName[i] = makingZombies();
	std::cout << "Generate zombie number 01" << std::endl;
	Zombie zombieRand01(zombieName[0]);
	zombieRand01.announce();

	std::cout << "Generate zombie number 02" << std::endl;
	Zombie *zombieRand02 = newZombie(zombieName[1]);
	zombieRand02->announce();
	delete(zombieRand02);
	
	std::cout << "Generate zombie number 03" << std::endl;
	randomChump(zombieName[2]);
	return (0);
}