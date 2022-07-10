#include "Fixed.hpp"

Fixed::Fixed() : _rawBits(0) {
	std::cout << "\033[1;30mDefault constructor called\033[0;1m" << std::endl;
}

Fixed::Fixed(const Fixed& src) {
	std::cout << "\033[1;37mCopy constructor called\033[0;1m" << std::endl;
	*this = src;
}

Fixed::~Fixed() {
	std::cout << "\033[1;31mDestructor called\033[0;1m" << std::endl;
}

int Fixed::getRawBits() const {
	std::cout << "\033[1;33mgetRawBits member function called\033[0;1m" << std::endl;
	return (_rawBits);
}

void Fixed::setRawBits(int const raw) {
	_rawBits = raw;
	return ;
}

Fixed& Fixed::operator=(const Fixed& src) {
	std::cout << "\033[1;32mCopy assignment operator called\033[0;1m" << std::endl;
	_rawBits = src.getRawBits();
		return (*this);
}