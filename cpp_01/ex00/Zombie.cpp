#include "Zombie.hpp"


Zombie::Zombie() {
		
};

Zombie::Zombie(std::string name) : _name(name) {
		
};

Zombie::~Zombie() {
	std::cout << "🧟‍♀️" << _name << " Dying zombie sounds " << "🧟‍♀️" << std::endl;
}

void Zombie::announce(void) {

	std::cout << "🧟‍♀️" << _name << " BraiiiiiiinnnzzzZ... " << "🧟‍♀️" << std::endl;
}

Zombie* newZombie(std::string name) {
	Zombie *newZombie = new Zombie(name);
	return (newZombie);
}

// void ramdomChump(std::string name) {

// }

// std::string Zombie::getName() {
// 	return (_name);
// }