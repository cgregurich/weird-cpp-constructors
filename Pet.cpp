#include "Pet.h"
#include <iostream>
Pet::Pet(const char* name)
{
	std::cout << "Pet(const char* name) -> " << name << std::endl;
}