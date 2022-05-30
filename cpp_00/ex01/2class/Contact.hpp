#ifndef CONTACT_H
# define CONTACT_H

#include <string>
#include <iostream>
#include <iomanip>


class	Contact {
	public:
			struct contactData
		{
			int _index;
			std::string _firstName;
			std::string _lastName;
			std::string _nickName;
			std::string _phoneNumber;
			std::string _darkestSecret;
		};
	
		Contact();
		~Contact();

		
};
		

#endif