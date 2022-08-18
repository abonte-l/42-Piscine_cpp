#ifndef FIXED_H
# define FIXED_H

#include <iostream>
#include <iomanip>
#include <cmath>

#include "FixedDefine.hpp"

class	Fixed {
	private:
		int _rawBits;
		const static int _bitNumber = 8;
		
		
	public:
		Fixed();
		Fixed(const int);
		Fixed(const float);
		Fixed(const Fixed&);
		~Fixed();
		Fixed operator=(const Fixed&);

		int getRawBits() const;
		void setRawBits(int const);
		float toFloat() const;
		int toInt() const;

		Fixed operator+(const Fixed&) ;
		Fixed operator-(const Fixed&) ;
		Fixed operator*(const Fixed&) ;
		Fixed operator/(const Fixed&) ;

		Fixed& operator++();
		Fixed operator++(int);
		Fixed& operator--();
		Fixed operator--(int);

		bool operator>(const Fixed&) const;
		bool operator<(const Fixed&) const;
		bool operator>=(const Fixed&) const;
		bool operator<=(const Fixed&) const;
		bool operator==(const Fixed&) const;
		bool operator!=(const Fixed&) const;

		static const Fixed &min(const Fixed&, const Fixed&);
		static Fixed &min(Fixed&, Fixed&);
		static const Fixed &max(const Fixed&, const Fixed&);
		static Fixed &max(Fixed&, Fixed&);

};

std::ostream& operator<<(std::ostream &out, const Fixed& src);

void displayTitle(std::string);
void displayTestTitle(std::string);
void logicalTests(Fixed, Fixed, Fixed, Fixed);
void arithmeticTests(Fixed, Fixed, Fixed);
void incrDecrTests(Fixed);

#endif



