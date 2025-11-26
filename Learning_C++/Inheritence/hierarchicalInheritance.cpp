#include <iostream>
using namespace std;

class Animal
{ // Base class
public:
    void eat()
    {
        cout << "Eating..." << endl;
    }
};

class Dog : public Animal
{ // Derived 1
public:
    void bark()
    {
        cout << "Barking..." << endl;
    }
};

class Cat : public Animal
{ // Derived 2
public:
    void meow()
    {
        cout << "Meowing..." << endl;
    }
};

int main()
{
    Dog d;
    Cat c;

    d.eat(); // inherited from Animal
    d.bark();

    c.eat(); // inherited from Animal
    c.meow();
}
