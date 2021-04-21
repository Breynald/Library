// Debugging: Dog.h
#ifndef DOG_H
#define DOG_H

#include "Animal.h"

// class Dog definition
class Dog : public Animal
{
public:
	Dog(const int = 0, const int = 0, string = "Toto");

	void Print() const;
	void setName(string);
}; // end class Dog

#endif // DOG_H
