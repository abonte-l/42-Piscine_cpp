#include "Zombie.hpp"


Zombie::Zombie() {
		
};

Zombie::Zombie(std::string name) : _name(name) {
		
};

Zombie::~Zombie() {
	std::cout << ZOMBIE_IC << _name  <<  D_ZOMBIE_SNORT << std::endl;
}

void Zombie::announce(void) {

	std::cout << ZOMBIE_IC <<  _name << BRAIN_IC << ZOMBIE_SNORT << BRAIN_IC << std::endl;
}

void Zombie::setName(std::string name) {
	_name = name;
}