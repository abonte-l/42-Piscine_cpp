#ifndef FIXED_H
# define FIXED_H

#include <iostream>
#include <cmath>

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
		Fixed& operator=(const Fixed&);

		int getRawBits() const;
		void setRawBits(int const);
		float toFloat() const;
		int toInt() const;
}; 

std::ostream& operator<<(std::ostream &out, const Fixed& src);

#endif



