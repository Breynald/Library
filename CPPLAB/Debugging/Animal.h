// Debugging: Animal.h
#ifndef ANIMAL_H
#define ANIMAL_H

#include <string>
using std::string;

// class Animal definition
class Animal
{
public:
	Animal(const int = 0, const int = 0);

	void setHeight(int);
	int getHeight() const;

	void setWeight(int);
	int getWeight() const;

	string getName() const;
	void print() const;
protected:
	int height;
	int weight;
	string name;
}; // end class Animal

#endif // ANIMAL_H
