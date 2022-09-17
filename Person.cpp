#include "Person.h"
#include <iostream>


Person::Person(int x)
{
	std::cout << "Person(x) -> " << x << std::endl;
	pet = Pet(x);
}