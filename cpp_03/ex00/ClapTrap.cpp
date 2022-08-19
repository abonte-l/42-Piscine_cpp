#include "ClapTrap.hpp"


ClapTrap::ClapTrap() : _name("RedShirt"), _hit(10), _energy(10), _damage(0)  {
	std::cout << DEFAULT_CONSTRUCT << std::endl;
	std::cout << _name << CREATION << std::endl;
	std::cout << std::endl;
}

ClapTrap::ClapTrap(std::string const name) : _name(name), _hit(10), _energy(10), _damage(0){
	std::cout << DEFAULT_CONSTRUCT << std::endl;
	std::cout << _name << CREATION << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& src){
	std::cout << COPY_CONSTRUCT << std::endl;
	std::cout << _name << COPY << std::endl;
	*this = src;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& src) {
	std::cout << COPY_ASSIGN<< std::endl;
	_name = src._name;
	_hit = src._hit;
	_energy = src._energy;
	_damage = src._damage;
	return (*this);
}

ClapTrap::~ClapTrap() {
	std::cout << DESTRUCTOR << std::endl;
}