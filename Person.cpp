#include "Person.h"
#include <iostream>

Person::Person(Pet pet) : pet(pet) {}

Person::Person(const char* petName)
{
	pet = Pet(petName);
}