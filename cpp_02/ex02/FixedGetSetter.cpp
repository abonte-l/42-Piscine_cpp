#include "Fixed.hpp"

int Fixed::getRawBits() const {
	std::cout << "\033[1;30mgetRawBits member function called\033[0;1m" << std::endl;
	return (_rawBits);
}

void Fixed::setRawBits(int const raw) {
	_rawBits = raw;
	return ;
}
