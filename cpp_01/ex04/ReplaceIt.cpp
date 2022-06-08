#include "ReplaceIt.hpp"

std::string	replaceIt(std::string str, std::string s1, std::string s2) {
	std::string result = str;
	std::string::size_type startPos = 0;
	size_t startS1;

	while ((startS1= result.find(s1, startPos)) != std::string::npos) {
		result.erase(startS1, s1.length());
		result.insert(startS1, s2);
		startPos = startS1 + s2.length();
	}
	result = result + "\n";
	return (result);
}