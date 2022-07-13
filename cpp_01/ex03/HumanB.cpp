#include "HumanB.hpp"

HumanB::HumanB(std::string name) : _weapon(NULL) {
	_name = name;
}

HumanB::~HumanB() {

}

void HumanB::setWeapon(Weapon &weapon) {
	_weapon = &weapon;
}

void HumanB::attack() {
	if (_weapon == NULL) {
		std::cout << "It's dead " << _name << ", you have no weapon" << std::endl;
		std::cout << _name << " tries again" << std::endl;
	}
	else
		std::cout << _name << ACTION << _weapon->getType() << std::endl;
}