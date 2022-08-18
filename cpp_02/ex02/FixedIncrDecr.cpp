#include "Fixed.hpp"

Fixed& Fixed::operator++() {
	++this->_rawBits;
	return (*this);
}

Fixed Fixed::operator++(int) {
	Fixed tmp;
	tmp._rawBits = _rawBits++;
	return (tmp);
}

Fixed& Fixed::operator--() {
	--this->_rawBits;
	return (*this);
}

Fixed Fixed::operator--(int) {
	Fixed tmp;
	tmp._rawBits = _rawBits--;
	return (tmp);
}
