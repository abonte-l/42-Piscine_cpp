#ifndef FIXED_H
# define FIXED_H

#include <iostream>

class	Fixed {
	private:
		int _rawBits;
		const static int _bitNumber = 8;
		
		
	public:
		Fixed();
		Fixed(const Fixed&);
		~Fixed();
		Fixed& operator=(const Fixed&);

		int getRawBits() const;
		void setRawBits(int const);
}; 

#endif
