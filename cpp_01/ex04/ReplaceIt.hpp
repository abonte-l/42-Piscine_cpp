#ifndef REPLACEIT_H
# define REPLACEIT_H

#include <iostream>
#include <fstream>

#define ERROR_ARG "\033[1;34m[Error: Wrong parameters!]\033[0;0m" 

#define O_OK "\033[1;32m[Successfully opened the file for reading!]\033[0;0m"
#define O_NOK "\033[1;31m[Unable to open the file for reading!]\033[0;0m"
#define W_OK "\033[1;32m[File successfully wrote!]\033[0;0m"
#define W_NOK "\033[1;31m[Error while writing!]\033[0;0m"

#define F_EXT ".replace"

std::string	replaceIt(std::string , std::string , std::string );

#endif