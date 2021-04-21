// Debugging: debugging.cpp
#include <bits/stdc++.h>
using namespace std;

#include "Animal.h"
#include "Lion.h"
#include "Dog.h"
int main()
{
    Animal* a1 = new Animal(0, 0);
    a1->print();
    Dog d1(60, 120, "Fido");
    Dog* d2 = new Dog();
    Lion lion1(45, 300);

    d1.Print();
    //d1.print();
    d2->Print();
    lion1.Print();

    a1 = &d1;
    cout << "Animal 1 now has the same height and weight "
        << "as dog 1\n";
    a1->print();

    d2 = reinterpret_cast <Dog*> (a1);
    cout << "Dog 2 now has the same height and weight as animal 1\n";
    d2->print();
    
    return 0;
} // end main
