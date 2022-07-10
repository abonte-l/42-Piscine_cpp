#include "Fixed.hpp"

Fixed::Fixed() : _rawBits(0) {
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed() : _rawBits(0) {
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed() : _rawBits(0) {
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed& src) {
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
}

Fixed::~Fixed() {
	std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits() const {
	std::cout << "getRawBits member function called" << std::endl;
	return (_rawBits);
}

void Fixed::setRawBits(int const raw) {
	_rawBits = raw;
	return ;
}

Fixed& Fixed::operator=(const Fixed& src) {
	std::cout << "Copy assignment operator called" << std::endl;
	_rawBits = src.getRawBits();
		return (*this);
}

float Fixed::toFloat() const {
	return (float(this->_rawBits) / float(1 << _bitNumber));
}

int Fixed::toInt() const {
	return (int(this->_rawBits >> _bitNumber));
}

std::ostream& operator<<(std::ostream &out, const Fixed& src) {
	out << src.toFloat();
	return (out);
}
 