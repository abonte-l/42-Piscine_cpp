#include "Fixed.hpp"

bool Fixed::operator>(const Fixed& src) const {
	return(this->_rawBits > src._rawBits);
}

bool Fixed::operator<(const Fixed& src) const {
	return(this->_rawBits < src._rawBits);
}

bool Fixed::operator>=(const Fixed& src) const {
	return(this->_rawBits >= src._rawBits);
}

bool Fixed::operator<=(const Fixed& src) const {
	return(this->_rawBits <= src._rawBits);
}

bool Fixed::operator==(const Fixed& src) const {
	return(this->_rawBits == src._rawBits);
}

bool Fixed::operator!=(const Fixed& src) const {
	return(this->_rawBits != src._rawBits);
}