#ifndef CONTACT_H
# define CONTACT_H

#include <string>
#include <iostream>
#include <iomanip>
#include <sstream>


class	Contact {
	private:
		std::string _firstName;
		std::string _lastName;
		std::string _nickName;
		std::string _phoneNumber;
		std::string _darkestSecret;
		int _index;

	public:
		Contact();
		~Contact();

		void setIndex(int);
		void setContact();
		void printAndCut(std::string);
		void displayEntry();
		void displayOverview(void);
};
		

#endif