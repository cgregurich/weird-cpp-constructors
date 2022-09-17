#include "Pet.h"
#include <stdint.h>
#include <cstdio>
#pragma once
struct Person
{
	Pet pet = NULL;
	Person(Pet pet);
	Person(const char* petName);


};