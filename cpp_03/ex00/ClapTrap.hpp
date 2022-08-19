#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <iostream>

#include "ClapTrapDefine.hpp"

class	ClapTrap {
	private:
	std::string _name;
	int _hit;
	int _energy;
	int _damage;

	public:
	ClapTrap();
	ClapTrap(std::string const);
	ClapTrap& operator=(const ClapTrap&);
	~ClapTrap();

	void attack(const std::string&);
	void takeDamage(unsigned int);
	void beRepaired(unsigned int);
};

#endif

