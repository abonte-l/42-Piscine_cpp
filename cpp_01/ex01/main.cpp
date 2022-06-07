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
	std::string zombieName = zombiesRandNAme[rand() % zombieRandNameSize];
	std::cout << "Generate a zombie horde of " << zombieName << std::endl;
	int N = rand() % 10 + 1;
	Zombie *myZombieHorde = zombieHorde(N, zombieName);
	delete[] myZombieHorde;
	return (0);
}