#include "ClapTrap.hpp"


ClapTrap::ClapTrap() : _name("\033[1;31mRedShirt\033[0;1m"), _hit(10), _energy(10), _damage(0)  {
	std::cout << DEFAULT_CONSTRUCT << std::endl;
	std::cout << RED << _name << CREATION << STOP << std::endl;
	std::cout << std::endl;
}

ClapTrap::ClapTrap(std::string const name) : _name(name), _hit(10), _energy(10), _damage(0) {
	std::cout << DEFAULT_CONSTRUCT << std::endl;
	std::cout << BLUE << _name << CREATION << STOP << std::endl;
	std::cout << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& src) {
	std::cout << COPY_CONSTRUCT << std::endl;
	std::cout << _name << COPY << std::endl;
	*this = src;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& src) {
	std::cout << COPY_ASSIGN << std::endl;
	_name = src._name;
	_hit = src._hit;
	_energy = src._energy;
	_damage = src._damage;
	return (*this);
}

ClapTrap::~ClapTrap() {
	std::cout << DESTRUCTOR << std::endl;
}

void ClapTrap::attack(const std::string &target) {
	if (_hit > 0) {
		std::cout << "ClapTrap " << _name << " attacks " << target << ", causing " << YELLOW << _damage << " points of damage!" << STOP << std::endl;
		--_hit;
		std::cout <<  _hit << " hit points remaining to " << _name << std::endl;
		std::cout << std::endl;
	}
	else if (_hit <= 0) {
		std::cout << _name << DEATH << STOP << std::endl;
		std::cout << std::endl;
	}
}

void ClapTrap::takeDamage(unsigned int damages) {
	if (_hit > 0) {
	std::cout << "ClapTrap " << _name << " took "  << ORANGE << damages << " points of damage!" << STOP << std::endl;
	_hit -= damages;
	std::cout <<  _hit << " hit points remaining to " << _name << std::endl;
	std::cout << std::endl;
	}
	else if (_hit <= 0) {
		std::cout << _name << DEATH << STOP << std::endl;
		std::cout << std::endl;
	}
}

void ClapTrap::beRepaired(unsigned int heal) {
	if (_hit > 0) {
		std::cout << "ClapTrap " << _name << " heals " << GREEN << heal << " points of damage!" << STOP << std::endl;
		_hit += heal;
		std::cout <<  _hit << " hit points remaining to " << _name << std::endl;
		std::cout << std::endl;
	}
	else if (_hit <= 0) {
		std::cout << _name << DEATH << STOP << std::endl;
		std::cout << std::endl;
	}

}