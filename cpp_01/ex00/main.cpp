#include "Zombie.hpp"

const std::string zombiesRandNAme[] {
	"prout01",
	"prout02",
	"prout03",
	"prout04",
};

const int zombieRandNameSize = (sizeof(zombiesRandNAme) / sizeof(std::string));


int	main() {
	std::string zombieName[3];
	 for (int i = 0; i < 3; i++) 
		zombieName[i] = zombiesRandNAme[rand() % zombieRandNameSize];
	std::cout << zombieName << std::endl;

	Zombie zombieRand01(zombieName[0]);
	zombieRand01.announce();

	Zombie *zombieRand02 = newZombie(zombieName[1]);
	zombieRand02->announce();
	delete(zombieRand02);

	


	// zombie01.announce();
	

}