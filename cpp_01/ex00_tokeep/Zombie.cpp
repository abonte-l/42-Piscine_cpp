#include "Zombie.hpp"


Zombie::Zombie() {
		
};

Zombie::Zombie(std::string name) : _name(name) {
		
};

Zombie::~Zombie() {
	std::cout << "🧟 " << _name  <<  " : Dying zombie sounds " << std::endl;
}

void Zombie::announce(void) {

	std::cout << "🧟 " <<  _name << " : 🧠" << " BraiiiiiiinnnzzzZ... " << "🧠" << std::endl;
}



std::string makingZombies() {

	const std::string zombiesRandNAme[8] {
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

	std::string zombieName = zombiesRandNAme[rand() % zombieRandNameSize];

	return (zombieName);
}