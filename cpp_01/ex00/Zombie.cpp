#include "Zombie.hpp"

const std::string zombiesRandNAme[] {
	"prout01",
	"prout02",
	"prout03",
	"prout04",
};

const int zombieRandNameSize = (sizeof(zombiesRandNAme) / sizeof(std::string));

Zombie::Zombie() {
		_name = zombiesRandNAme[rand() % zombieRandNameSize];
};

Zombie::~Zombie() {
	std::cout << "🧟‍♀️" << _name << " Dying zombie sounds " << "🧟‍♀️" << std::endl;
}

void Zombie::announce(void) {

	std::cout << "🧟‍♀️" << _name << " BraiiiiiiinnnzzzZ... " << "🧟‍♀️" << std::endl;
}

Zombie* newZombie(std::string _name) {

}

void ramdomChump(std::string _name) {

}

