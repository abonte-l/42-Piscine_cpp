#include "Fixed.hpp"

Fixed::Fixed() : _rawBits(0) {
	std::cout << "\033[1;30mDefault constructor called\033[0;1m" << std::endl;
}

Fixed::Fixed(const float c) {
	this->_rawBits = roundf(c * (1 << _bitNumber));
	std::cout << "\033[1;30mFloat constructor called\033[0;1m" << std::endl;
}

Fixed::Fixed(const int c) {
	this->_rawBits = c * (1 << _bitNumber);
	std::cout << "\033[1;30mInt constructor called\033[0;1m" << std::endl;
}

Fixed::Fixed(const Fixed& src) {
	std::cout << "\033[1;30mCopy constructor called\033[0;1m" << std::endl;
	_rawBits = src.getRawBits();
}

Fixed::~Fixed() {
	std::cout << "\033[1;30mDestructor called\033[0;1m" << std::endl;
}

Fixed Fixed::operator=(const Fixed& src) {
	std::cout << "\033[1;30mCopy assignment operator called\033[0;1m" << std::endl;
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
