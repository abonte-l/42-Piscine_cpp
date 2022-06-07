#include "Zombie.hpp"

const std::string zombiesRandNAme[] {
	"\033[1;32mCrawly McBrains\033[0;1m",
	"\033[1;32mWalker Spew\033[0;1m",
	"\033[1;32mSpewy Eyeball\033[0;1m",
	"\033[1;32mFester McBrains\033[0;1m",
	"\033[1;32mFleshy Necro\033[0;1m",
	"\033[1;32mHungry Guts\033[0;1m",
	"\033[1;32mBrainy Undead\033[0;1m",
	"\033[1;32mFleshy Fleshington\033[0;1m",
};

const int zombieRandNameSize = (sizeof(zombiesRandNAme) / sizeof(std::string));


int	main() {
	std::string zombieName[3];
	 for (int i = 0; i < 3; i++) 
		zombieName[i] = zombiesRandNAme[rand() % zombieRandNameSize];
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