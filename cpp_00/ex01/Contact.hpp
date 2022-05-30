#ifndef CONTACT_H
# define CONTACT_H

#include <string>
#include <iostream>


class	Contact {
	private:
		struct contactData
		{
			int _index;
			std::string _firstName;
			std::string _lastName;
			std::string _nickName;
			std::string _phoneNumber;
			std::string _darkestSecret;
		};

		int _indexGen;
		struct contactData _data[8];
		
	public:
		Contact();
		~Contact();

		void addEntry();
		void displayEntry(std::string);
}; 
void	homeDisplay();
int		commandCollect();

#endif