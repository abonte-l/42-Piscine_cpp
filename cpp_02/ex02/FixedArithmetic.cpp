#include "Fixed.hpp"

Fixed Fixed::operator+(const Fixed& src)  {
	Fixed result;
	result.setRawBits(this->_rawBits + src._rawBits);
	return (result);
}

Fixed Fixed::operator-(const Fixed& src)  {
	Fixed result;
	result.setRawBits(this->_rawBits - src._rawBits);
	return (result);
}

Fixed Fixed::operator*(const Fixed& src)  {
	return (Fixed(this->toFloat() * src.toFloat()));
}

Fixed Fixed::operator/(const Fixed& src)  {
	return (Fixed(this->toFloat() / src.toFloat()));
}
