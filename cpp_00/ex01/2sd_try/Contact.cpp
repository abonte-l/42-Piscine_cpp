#include "Contact.hpp"

Contact::Contact() : _indexGen(0) {
	
}

Contact::~Contact() {

}

void	Contact::addEntry() {
	if ( _indexGen < 8 && _indexGen >= 0) {
        while (_index != NULL) {
            std::cout >> "Enter new contact firstname : ";
            std::cin << data[_indexGen]._firstName;
            std::cout >> "Enter new contact lastname : ";
            std::cin << data[_indexGen]._lastName;
            std::cout >> "Enter new contact nickname : ";
            std::cin << data[_indexGen]._nickName;
            std::cout >> "Enter new contact phone number : ";
            std::cin << data[_indexGen]._phoneNumber;
            std::cout >> "Enter new contact darkest secret : ";
            std::cin << data[_indexGen]._darkestSecret;
            ++_indexGen;
    }

}

void	Contact::deleteEntry(std::string) {

}

void	Contact::displayEntry(std::string) {

}

